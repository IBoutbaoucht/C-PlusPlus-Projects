#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>
#include "Container.h"
#include "Pod.h"
#include "Server.h"
#include "KubernetesCluster.h"
#include "Cloud_Util.h"
#include "CloudExceptions.h"
#include "MetricLogger.h"

int main()
{
    std::cout.precision(2);
    std::cout << std::fixed;

    // Test AllocationException direct
    std::cout << "=== Test AllocationException direct ===\n";
    try
    {
        auto failNode = std::make_shared<Server>("fail-node", 2, 4096);
        // Don't start the server
        failNode->allocate(1, 512); // Should throw
    }
    catch (const AllocationException &e)
    {
        std::cout << "Exception capturée : " << e.what() << std::endl;
    }

    // Test FileException
    std::cout << "\n=== Test FileException ===\n";
    KubernetesCluster cluster;
    auto nodeX = std::make_shared<Server>("nodeX", 12, 12048);
    nodeX->start();
    cluster.addNode(nodeX);

    try
    {
        saveClusterMetrics(cluster, "cluster1_metrics.txt");
    }
    catch (const FileException &e)
    {
        std::cout << "Exception capturée : " << e.what() << std::endl;
    }

    // Test serveurs inactifs avec lambda
    std::cout << "\n=== Test Lambda : serveurs inactifs ===\n";
    KubernetesCluster cluster1;
    auto inactiveServer = std::make_shared<Server>("node3", 2.0, 4096.0);
    cluster1.addNode(inactiveServer);

    auto activeServer = std::make_shared<Server>("nodeA", 8.0, 8192.0);
    activeServer->start();
    cluster1.addNode(activeServer);

    auto filter = [](const Server &s)
    {
        return !s.isActive();
    };

    auto inactifs = cluster1.getFilteredServers(filter);
    for (const auto &s : inactifs)
    {
        if (s)
        { 
            std::cout << *s << "\n";
        }
    }

    // Test déploiement sur serveur inactif
    std::cout << "\n=== Déploiement sur un serveur inactif ===\n";
    try
    {
        auto pod = std::make_unique<Pod>("test-pod");
        pod->addContainer(std::make_unique<Container>("c1", "nginx", 1.0, 512.0));
        cluster1.deployPod(std::move(pod));
    }
    catch (const AllocationException &e)
    {
        std::cout << "Exception capturée : " << e.what() << std::endl;
    }

    auto c1a = std::make_unique<Container>("c1", "nginx", 2.0, 1024.0);
    auto c2a = std::make_unique<Container>("c2", "redis", 4, 2048.0);
    auto c3a = std::make_unique<Container>("c3", "mysql", 2, 1024.0);

    auto pod1a = std::make_unique<Pod>("web-pod");
    pod1a->addContainer(std::move(c1a));
    pod1a->addContainer(std::move(c2a));

    auto pod2a = std::make_unique<Pod>("db-pod");
    pod2a->addContainer(std::move(c3a));

    cluster1.deployPod(std::move(pod1a));
    cluster1.deployPod(std::move(pod2a));

    for (const auto &pod : cluster1.getPods())
    {
        std::cout << "Pod " << pod->getName() << " a " << pod->getContainers().size() << " conteneurs\n";
    }

    // Test tri des pods
    KubernetesCluster cluster2;
    auto nodeY = std::make_shared<Server>("nodeY", 16.0, 16000.0);
    nodeY->start();
    cluster2.addNode(nodeY);

    auto c1 = std::make_unique<Container>("c1", "nginx", 2.0, 1024.0);
    auto c2 = std::make_unique<Container>("c2", "redis", 4, 2048.0);
    auto c3 = std::make_unique<Container>("c3", "mysql", 2, 1024.0);

    auto pod1 = std::make_unique<Pod>("web-pod");
    pod1->addContainer(std::move(c1));
    pod1->addContainer(std::move(c2));

    auto pod2 = std::make_unique<Pod>("db-pod");
    pod2->addContainer(std::move(c3));

    std::vector<std::unique_ptr<Pod>> pods;
    pods.push_back(std::move(pod1));
    pods.push_back(std::move(pod2));

    deployPods(cluster2, pods);

    // Tri des pods
    std::vector<const Pod *> podRefs;
    for (const auto &pod : cluster2.getPods())
    {
        podRefs.push_back(pod.get());
    }

    std::sort(podRefs.begin(), podRefs.end(), [](const Pod *a, const Pod *b)
              { return a->getContainers().size() > b->getContainers().size(); });

    std::cout << "\n=== Pods triés par nombre de conteneurs ===\n";
    for (const auto &pod : podRefs)
    {
        std::cout << "-> Déploiement du Pod [Pod: " << pod->getName() << "]\n"; // <-- Added pod name

        // 2. Print all containers
        for (const auto &container : pod->getContainers())
        {
            std::cout << *container << "\n";
        }

        // 3. Calculate and allocate resources
        double totalCpu = 0, totalMem = 0;
        for (const auto &container : pod->getContainers())
        {
            totalCpu += container->getCpu();
            totalMem += container->getMemory();
        }
        nodeX->allocate(totalCpu, totalMem);

        // 4. Print node status
        std::cout << "sur le nœud\n";
        std::cout << *nodeX << "\n";
    }
    std::cout << "\n=== Tri des pods ===\n";
    for (const auto &pod : podRefs)
    {
        MetricLogger<Pod>::logToStream(*pod, std::cout);
    }

    std::cout << "\n=== Tous les conteneurs du cluster 1 ===\n";
    for (const auto &pod : podRefs)
    {
        for (const auto &container : pod->getContainers())
        {
            std::cout << *container << "\n";
        }
    }

    return 0;
}
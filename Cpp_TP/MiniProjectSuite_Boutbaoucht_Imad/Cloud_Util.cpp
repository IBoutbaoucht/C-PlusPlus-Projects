#include "Cloud_Util.h"
#include "CloudExceptions.h"
#include <fstream>
#include <iostream>

void display(const KubernetesCluster &cluster)
{
    std::cout << cluster.getMetrics() << std::endl;
}

void deployPods(KubernetesCluster &cluster, std::vector<std::unique_ptr<Pod>> &pods)
{
    for (auto &pod : pods)
    {
        cluster.deployPod(std::move(pod));
    }
    pods.clear();
}

void saveClusterMetrics(const KubernetesCluster &cluster, const std::string &filename)
{
    std::ofstream file(filename);
    if (!file.is_open())
    {
        throw FileException("Could not open file: " + filename);
    }
    file << cluster.getMetrics();
    file.close();
    std::cout << "Métriques sauvegardées avec succès." << std::endl;
}

void forEachContainer(const KubernetesCluster &cluster, const std::function<void(const Container &)> &func)
{
    for (const auto &podPtr : cluster.getPods())
    {
        for (const auto &containerPtr : podPtr->getContainers())
        {
            func(*containerPtr);
        }
    }
}

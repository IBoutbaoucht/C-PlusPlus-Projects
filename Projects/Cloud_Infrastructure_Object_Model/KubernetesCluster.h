#ifndef KUBERNETES_CLUSTER_H
#define KUBERNETES_CLUSTER_H

#include "Server.h"
#include "Pod.h"
#include "CloudExceptions.h"
#include <memory>
#include <vector>
#include <functional>
#include <string>
#include <sstream>

class KubernetesCluster
{
public:
    void addNode(std::shared_ptr<Server> node);
    bool removePod(const std::string &name);
    void deployPod(std::unique_ptr<Pod> pod);
    Server *schedulePod(Pod &pod); // Change return type from bool to Server*
    Pod *getPod(const std::string &name);

    const std::vector<std::shared_ptr<Server>> &getServers() const;
    const std::vector<std::unique_ptr<Pod>> &getPods() const;

    std::vector<std::shared_ptr<Server>> getFilteredServers(
        std::function<bool(const Server &)> filter) const;

    std::string getMetrics() const;

    friend std::ostream &operator<<(std::ostream &os, const KubernetesCluster &c);

private:
    std::vector<std::shared_ptr<Server>> nodes_;
    std::vector<std::unique_ptr<Pod>> pods_;
};

#endif // KUBERNETES_CLUSTER_H
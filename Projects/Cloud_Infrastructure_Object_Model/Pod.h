#ifndef POD_H
#define POD_H

#include "Container.h"
#include <memory>
#include <vector>
#include <string>
#include <unordered_map>

class Pod
{
private:
    std::string name_;
    std::vector<std::unique_ptr<Container>> containers_; // Note: named 'containers' without underscore
    std::unordered_map<std::string, std::string> labels_;

public:
    Pod(const std::string &name);
    Pod(std::string name, std::unordered_map<std::string, std::string> labels);

    void addContainer(std::unique_ptr<Container> container);
    bool removeContainer(const std::string &id);
    void deploy();
    std::string getMetrics() const;

    const std::vector<std::unique_ptr<Container>> &getContainers() const;
    const std::string &getName() const;

    friend std::ostream &operator<<(std::ostream &os, const Pod &p);
};

#endif // POD_H
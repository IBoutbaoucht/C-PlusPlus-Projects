#include "Pod.h"
#include "Resource.h"
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <string>
#include <utility> // For std::move

// Constructor implementation - matches header declaration
Pod::Pod(std::string name, std::unordered_map<std::string, std::string> labels)
    : name_(std::move(name)), labels_(std::move(labels)) {}

Pod::Pod(const std::string &name) : name_(name) {}

void Pod::addContainer(std::unique_ptr<Container> container)
{
    containers_.push_back(std::move(container)); // Changed containers to containers_
}

bool Pod::removeContainer(const std::string &id)
{
    auto it = std::find_if(containers_.begin(), containers_.end(), // Changed containers to containers_
                           [&id](const auto &container)
                           {
                               return container && container->getId() == id; // Added null check
                           });

    if (it != containers_.end())
    {                          // Changed containers to containers_
        containers_.erase(it); // Changed containers to containers_
        return true;
    }
    return false;
}

// Additional recommended implementations:

void Pod::deploy()
{
    for (const auto &container : containers_)
    {
        if (container)
        {
            container->start();
        }
    }
}

std::string Pod::getMetrics() const
{
    std::ostringstream oss;
    oss << "[Pod: " << name_ << "]\n";
    for (const auto &container : containers_)
    {
        if (container)
        {
            oss << container->getMetrics() << "\n";
        }
    }
    return oss.str();
}

const std::vector<std::unique_ptr<Container>> &Pod::getContainers() const
{
    return containers_;
}

const std::string &Pod::getName() const
{
    return name_;
}

std::ostream &operator<<(std::ostream &os, const Pod &p)
{
    os << p.getMetrics();
    return os;
}
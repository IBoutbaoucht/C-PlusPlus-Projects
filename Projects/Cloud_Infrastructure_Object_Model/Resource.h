#ifndef RESOURCE_H
#define RESOURCE_H

#include <string>

class Resource
{
protected:
    std::string id_;
    double cpu_;
    double memory_;
    bool active_;

public:
    Resource(std::string id, double cpu, double memory)
        : id_(std::move(id)), cpu_(cpu), memory_(memory), active_(false) {}

    // Public getters for protected members
    double getCpu() const { return cpu_; }
    double getMemory() const { return memory_; }
    std::string getId() const { return id_; }
    bool isActive() const { return active_; }

    virtual void start() = 0;
    virtual void stop() = 0;
    virtual std::string getMetrics() const = 0;
    virtual ~Resource() = default;
};

#endif // RESOURCE_H
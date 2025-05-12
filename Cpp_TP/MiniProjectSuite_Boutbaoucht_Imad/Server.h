#ifndef SERVER_H
#define SERVER_H

#include "Resource.h"
#include <memory>
#include <vector>
#include <string>
#include <ostream>

class Pod; // Forward declaration

class Server : public Resource
{
private:
    double available_cpu_;
    double available_memory_;

public:
    Server(std::string id, double cpu, double memory);

    bool allocate(double cpu, double memory);
    void start() override;
    void stop() override;
    std::string getMetrics() const override;

    bool isActive() const { return active_; }
    double getAvailableCpu() const { return available_cpu_; }
    double getAvailableMemory() const { return available_memory_; }
    double getFreeCpu() const;
    double getFreeMemory() const;

    friend std::ostream &operator<<(std::ostream &os, const Server &s);
};

#endif // SERVER_H
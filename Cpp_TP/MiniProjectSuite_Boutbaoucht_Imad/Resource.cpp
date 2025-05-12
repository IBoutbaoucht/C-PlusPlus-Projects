#include "Resource.h"

Resource::Resource(std::string id, double cpu, double memory) : id_(id), cpu_(cpu), memory_(memory) {}

std::string Resource::getId() const
{
    return id_;
}

double Resource::getMemory() const
{
    return memory_;
}
double Resource::getCpu() const
{
    return cpu_;
}

#include "Server.h"
#include "CloudExceptions.h"
#include <sstream>
#include <stdexcept>



Server::Server(std::string id, double cpu, double memory)
    : Resource(std::move(id), cpu, memory), available_cpu_(cpu), available_memory_(memory) {}

bool Server::allocate(double cpu, double memory)
{
    if (!isActive())
    {
        throw AllocationException("Server " + getId() + " n'est pas actif");
    }
    if (cpu > available_cpu_ || memory > available_memory_)
    {
        return false;
    }
    available_cpu_ -= cpu;
    available_memory_ -= memory;
    return true;
}

void Server::start()
{
    active_ = true;
}

void Server::stop()
{
    active_ = false;
}

double Server::getFreeCpu() const
{
    return available_cpu_;
}

double Server::getFreeMemory() const
{
    return available_memory_;
}

std::string Server::getMetrics() const
{
    std::ostringstream oss;
    oss << "[Server: " << id_ << " | Total: " << static_cast<int>(cpu_) << " CPU, " << static_cast<int>(memory_) << " MB"
        << " | Free: " << static_cast<int>(available_cpu_) << " CPU, " << static_cast<int>(available_memory_) << " MB]";
    return oss.str();
}

std::ostream &operator<<(std::ostream &os, const Server &s)
{
    os << "[Server: " << s.getId()
       << " | Total: " << static_cast<int>(s.getCpu()) << " CPU, " << static_cast<int>(s.getMemory()) << " MB"
       << " | Free: " << static_cast<int>(s.getFreeCpu()) << " CPU, " << static_cast<int>(s.getFreeMemory()) << " MB]";
    return os;
}
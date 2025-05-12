#include "Container.h"
#include <sstream>
#include <iostream>

Container::Container(std::string id, std::string image, double cpu, double memory)
    : Resource(std::move(id), cpu, memory), image_(std::move(image)) {}

void Container::start()
{
    active_ = true;
}

void Container::stop()
{
    active_ = false;
}

const std::string &Container::getImage() const
{
    return image_;
}

std::string Container::getMetrics() const
{
    std::ostringstream oss;
    oss << "[Container: " << id_ << ": " << cpu_ << " CPU, "
        << memory_ << " Memory, " << image_ << "]";
    return oss.str();
}

std::ostream &operator<<(std::ostream &os, const Container &c)
{
    os << "[Container: " << c.getId() << ": "
       << static_cast<int>(c.getCpu()) << " CPU, "
       << static_cast<int>(c.getMemory()) << " Memory, "
       << c.getImage() << "]";
    return os;
}

#ifndef CONTAINER_H
#define CONTAINER_H

#include "Resource.h"
#include <iostream>
#include <memory>
#include <string>

class Container : public Resource
{
private:
    std::string image_;

public:
    Container(std::string id, std::string image, double cpu, double memory);

    const std::string &getImage() const;

    // Make Resource getters publicly available
    using Resource::getCpu;
    using Resource::getId;
    using Resource::getMemory;
    using Resource::isActive;

    void start() override;
    void stop() override;

    std::string getMetrics() const override;

    friend std::ostream &operator<<(std::ostream &os, const Container &c);
};

#endif // CONTAINER_H
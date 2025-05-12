#ifndef CLOUD_EXCEPTIONS_H
#define CLOUD_EXCEPTIONS_H

#include <stdexcept>
#include <string>

class CloudException : public std::runtime_error {
public:
    explicit CloudException(const std::string& msg) : std::runtime_error(msg) {}
};

// Make AllocationException also inherit from CloudException for consistency
class AllocationException : public CloudException {
public:
    explicit AllocationException(const std::string& msg)
        : CloudException(msg) {}
};

class FileException : public CloudException {
public:
    explicit FileException(const std::string& msg) 
        : CloudException("File Error: " + msg) {}
};

#endif // CLOUD_EXCEPTIONS_H
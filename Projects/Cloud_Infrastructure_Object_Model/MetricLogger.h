#ifndef METRIC_LOGGER_H
#define METRIC_LOGGER_H

#include <iostream>
#include <sstream>

template<typename T>
class MetricLogger {
public:
    static void logToStream(const T& obj, std::ostream& os, const std::string& title = "") {
        if (!title.empty()) {
            os << "=== " << title << " ===\n";
        }
        os << obj.getMetrics() << "\n";
    }
};

#endif 
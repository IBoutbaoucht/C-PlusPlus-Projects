#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {10, 12, 15, 17};

    std::cout << "Pour un vecteur {";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i != vec.size() - 1) {
            std::cout << ",";
        }
    }
    std::cout << "} :" << std::endl;

    int addition = 5;

    std::transform(vec.begin(), vec.end(), vec.begin(), [&addition](int x) {
        return addition + x;
    });

    std::cout << "Modified vector: ";
    for (int x : vec) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}
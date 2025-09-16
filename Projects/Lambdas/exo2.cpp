#include <iostream>
#include <vector>
#include <functional>

void filtrer(const std::vector<int>& vec, std::function<bool(int)> predicat) {
    for (int x : vec) {
        if (predicat(x)) {
            std::cout << x << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> vec = {10,15,20,25,30,50,75};

    std::cout << "Prédicat : x > 20" << std::endl;
    filtrer(vec, [](int x) { return x > 20; });

    std::cout << "Prédicat : x % 2 == 0" << std::endl;
    filtrer(vec, [](int x) { return x % 2 == 0; });

    return 0;
}
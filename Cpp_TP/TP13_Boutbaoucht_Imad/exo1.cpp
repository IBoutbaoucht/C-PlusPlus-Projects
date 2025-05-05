#include <iostream>
#include <vector>
#include <algorithm>

class Additionneur {
private:
    int valeur_;
public:
    Additionneur(int valeur) : valeur_(valeur) {}
    void operator()(int x) const {
        std::cout << x + valeur_ << " ";
    }
};

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::for_each(vec.begin(), vec.end(), Additionneur(10));
    std::cout << std::endl;
    return 0;
}
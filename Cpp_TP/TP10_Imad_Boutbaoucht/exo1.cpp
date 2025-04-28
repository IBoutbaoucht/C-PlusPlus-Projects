
// Maximum Exercice
#include <iostream>

template <typename T>

T maximum(T a, T b){
    if (a > b){
        return a ;
    }
    return b ;
}

std::string maximum(std::string a, std::string b){
    int result = a.std::string::compare(b);
    if (result > 0){
        return a ;
    }
    return b ;
}


int main() {
    std::cout << maximum(5, 10) << std::endl; // Affiche 10
    std::cout << maximum(3.14, 2.71) << std::endl; // Affiche 3.14
    std::cout << maximum(std::string("chat"), std::string("chien")) << std::endl; // Affiche chien
    return 0 ;
}
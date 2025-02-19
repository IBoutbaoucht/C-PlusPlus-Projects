#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

bool is_palindrome(const std::string& text) {
    std::string filtered;
    
    // Supprimer les espaces et convertir en minuscules
    for (char c : text) {
        if (std::isalnum(c)) {
            filtered += std::tolower(c);
        }
    }
    
    // Vérifier si la chaîne filtrée est un palindrome
    std::string reversed = filtered;
    std::reverse(reversed.begin(), reversed.end());
    
    return filtered == reversed;
}

int main() {
    std::string input;
    std::cout << "Entrez un mot : ";
    std::getline(std::cin, input);
    
    if (is_palindrome(input)) {
        std::cout << " ' " << input << " ' " << " est un palindrome.\n";
    } else {
        std::cout << " ' " << input  << " ' " << " n'cest pas un palindrome.\n";
    }
    
    return 0;
}

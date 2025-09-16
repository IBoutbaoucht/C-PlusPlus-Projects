#include <iostream>
#include <unordered_map>
#include <sstream>
#include <string>
#include <cctype>

void word_frequency(const std::string& text) {
    std::unordered_map<std::string, int> freq;
    std::istringstream iss(text);
    std::string word;

    // Lire les mots un par un
    while (iss >> word) {
        // Supprimer la ponctuation en début et fin de mot
        // while (!word.empty() && std::ispunct(word.front())) word.erase(word.begin());
        // while (!word.empty() && std::ispunct(word.back())) word.pop_back();
        
        if (!word.empty()) {
            freq[word]++;
        }
    }

    // Afficher les fréquences des mots
    std::cout << "Frequence des mots :\n";
    for (const auto& pair : freq) {
        std::cout << pair.first << " -> " << pair.second << '\n';
    }
}

int main() {
    std::string input;
    std::cout << "Entrez une phrase : ";
    std::getline(std::cin, input);
    
    word_frequency(input);
    
    return 0;
}

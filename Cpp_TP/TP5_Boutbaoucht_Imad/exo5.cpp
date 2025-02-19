#include <iostream>
#include <string>
#include <sstream>
#include <map>

void sort_by_length(const std::string& text) {
    std::multimap<int, std::string> word_map;
    std::stringstream ss(text);
    std::string word;

    // Remplir le multimap avec les mots et leurs longueurs
    while (ss >> word) {
        word_map.insert({word.length(), word});
    }

    // Affichage des mots triés par longueur
    std::cout << "Trie par longueur : ";
    for (const auto& pair : word_map) {
        std::cout << pair.second << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::string phrase = "Le langage C++ est rapide et efficace";
    std::cout << " ' " << phrase << " ' " << std::endl;
    sort_by_length(phrase);

    std::cout << "Entrez une phrase : ";
    std::getline(std::cin, phrase);
    std::cout << " ' " << phrase << " ' " << std::endl;
    sort_by_length(phrase);

    return 0;
}

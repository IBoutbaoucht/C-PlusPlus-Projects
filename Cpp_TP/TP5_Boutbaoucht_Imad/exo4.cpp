#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cctype>

// Fonction pour nettoyer un mot et le rendre en minuscule
std::string clean_word(const std::string& word) {
    std::string cleaned;
    for (char ch : word) {
        if (ch != ',' && ch != '.') {
            cleaned += std::tolower(ch);
        }
    }
    return cleaned;
}

void top_frequent_words(const std::string& text, int n) {
    std::map<std::string, int> freq;
    std::stringstream ss(text);
    std::string word;

    // Comptage des occurrences des mots
    while (ss >> word) {
        word = clean_word(word);
        freq[word]++;
    }

    // Copier les résultats dans un vecteur de paires pour pouvoir les trier
    std::vector<std::pair<std::string, int>> sorted_words(freq.begin(), freq.end());

    // Tri des mots en fonction de leur fréquence
    std::sort(sorted_words.begin(), sorted_words.end(), 
              [](const auto& a, const auto& b) { return a.second > b.second; });

    // Affichage des n mots les plus fréquents
    std::cout << "Top " << n << " mots les plus fréquents :\n";
    for (size_t i = 0; i < static_cast<size_t>(n) && i < sorted_words.size(); ++i) {
        std::cout << i + 1 << ". " << sorted_words[i].first << " -> " << sorted_words[i].second << '\n';
    }
}

int main() {
    std::string text = "C++ est rapide, C++ est puissant, C++ est utilisé";
    std::cout << " ' " << text << " ' " << std::endl;
    top_frequent_words(text, 3);

    std::cout << "Entrez un texte : ";
    std::getline(std::cin, text);
    std::cout << " ' " << text << " ' " << std::endl;
    top_frequent_words(text, 3);


    return 0;
}


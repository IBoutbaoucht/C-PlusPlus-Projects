#include <iostream>
#include <fstream>
#include <string> 

int main() {
    std::string keyword;
    std::cout << "Entrez le mot-cle a rechercher : ";
    std::getline(std::cin, keyword);

    std::ifstream in_file("input.txt");
    std::ofstream out_file("output.txt");

    if (!in_file || !out_file) {
        std::cerr << "Erreur lors de l'ouverture des fichiers" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(in_file, line)) {
        if (line.find(keyword) != std::string::npos) {
            out_file << line << std::endl;
        }
    }

    in_file.close();
    out_file.close();
    std::cout << "Lignes contenant \"" << keyword << "\" copiees dans output.txt" << std::endl;
    return 0;
}
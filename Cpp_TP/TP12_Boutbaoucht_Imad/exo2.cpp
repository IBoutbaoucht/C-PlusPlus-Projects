#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>

int main() {
    std::ifstream in_file("data.txt");
    std::ofstream out_file("report.txt");

    if (!in_file || !out_file) {
        std::cerr << "Erreur lors de l'ouverture des fichiers" << std::endl;
        return 1;
    }

    out_file << std::setw(20) << std::left << "Nom"
             << std::setw(10) << "Age"
             << std::setw(15) << "Salaire" << std::endl;

    std::string line;
    while (std::getline(in_file, line)) {
        std::istringstream iss(line);
        std::string nom;
        int age;
        double salaire;

        if (iss >> nom >> age >> salaire) {
            out_file << std::fixed << std::setprecision(2)
                     << std::setw(20) << std::left << nom
                     << std::setw(10) << age
                     << std::setw(15) << salaire << std::endl;
        }
    }

    in_file.close();
    out_file.close();
    std::cout << "Rapport genere dans report.txt" << std::endl;
    return 0;
}
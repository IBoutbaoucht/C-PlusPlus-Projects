#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Fichier {
private:
    fstream* flux;  // Pointer to file stream
    string nomFichier;

public:
    // Constructor initializes the file name
    Fichier(string nom) : nomFichier(nom) {
        flux = new fstream();  // Dynamically allocate the file stream
    }

    // Method to save data to the file
    void sauvegarder(const string& contenu) {
        cout << "Sauvegarde des données..." << endl;
        flux->open(nomFichier, ios::out);  // Open file in write mode
        if (flux->is_open()) {
            *flux << contenu << endl;  // Write data
            flux->close();  // Close file
        } else {
            cout << "Erreur: Impossible d'ouvrir le fichier en écriture." << endl;
        }
    }

    // Method to read data from the file
    void charger() {
        cout << "Lecture des données..." << endl;
        flux->open(nomFichier, ios::in);  // Open file in read mode
        if (flux->is_open()) {
            cout << "Contenu du fichier :" << endl;
            string ligne;
            while (getline(*flux, ligne)) {  // Read and print each line
                cout << ligne << endl;
            }
            flux->close();  // Close file
        } else {
            cout << "Erreur: Impossible d'ouvrir le fichier en lecture." << endl;
        }
    }

    // Destructor frees allocated memory
    ~Fichier() {
        delete flux;
        cout << "Mémoire du flux libérée." << endl;
    }
};

int main() {
    // Create a file manager object
    Fichier monFichier("test.txt");

    // Save data to the file
    monFichier.sauvegarder("Bonjour, ceci est un test.");

    // Read data from the file
    monFichier.charger();


    return 0;
}

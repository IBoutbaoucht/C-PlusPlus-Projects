#include <iostream>
#include <vector>

using namespace std;

class Objet {
public:
    string nom;
    int quantite;

    Objet(string n, int q) : nom(n), quantite(q) {}

    void afficher() {
        cout << "- " << nom << " (x" << quantite << ")" << endl;
    }
};

class Inventaire {
private:
    vector<Objet*> objets; // Stores dynamically allocated objects

public:
    // Adds an object to the inventory
    void ajouterObjet(string nom, int quantite) {
        Objet* nouvelObjet = new Objet(nom, quantite);
        objets.push_back(nouvelObjet);
        cout << "Ajout de " << nom << " (x" << quantite << ")" << endl;
    }

    // Displays all objects in the inventory
    void afficherInventaire() {
        cout << "Inventaire :" << endl;
        for (Objet* obj : objets) {
            obj->afficher();
        }
    }

    // Destructor to free allocated memory
    ~Inventaire() {
        for (Objet* obj : objets) {
            delete obj;
        }
        cout << "Mémoire de l'inventaire libérée." << endl;
    }
};

int main() {
    Inventaire inventaire;

    inventaire.ajouterObjet("Pomme", 3);
    inventaire.ajouterObjet("Épée", 1);

    inventaire.afficherInventaire();

    // Memory is automatically freed when `inventaire` goes out of scope
    return 0;
}

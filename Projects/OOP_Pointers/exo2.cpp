#include <iostream>

using namespace std;

class Joueur {
public:

    string nom;
    int score;
    // Constructor
    Joueur(string Name, int Score) : nom(Name), score(Score) {}

    // Default
    Joueur() : nom("Inconnu"), score(0) {}

    // Function to display player information
    void affichage_info() {
        cout << "Nom: " << nom << endl;
        cout << "Score: " << score << endl;
    }


private:
    string dob ;
    
};

int main() {
    // Dynamically allocating a Joueur object
    Joueur* alice = new Joueur();
    alice->nom = "Alice" ;
    alice->score = 100 ;
    
    // Using -> to access members
    alice->affichage_info();


    // Can't do this (private):
    // alice->dob = "22/12/2000" ; 

    // Deleting the dynamically allocated object
    delete alice;  
    cout << "Objet dynamique supprimé." << endl;

    return 0;
}

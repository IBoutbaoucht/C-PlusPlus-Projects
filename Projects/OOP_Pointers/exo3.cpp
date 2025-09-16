#include <iostream>

using namespace std;

class Joueur {
public:
    // Constructor: Initializes attributes
    Joueur(string Name, int Score) : nom(Name), score(Score) {
        cout << "Constructeur appelé" << endl;
    }

    // Destructor: Displays a message when an object is destroyed
    ~Joueur() {
        cout << "Destructeur appelé" << endl;
    }

    // Function to display player information
    void affichage_info() {
        cout << "Joueur: " << nom << ", Score: " << score << endl;
    }

private:
    string nom;
    int score;
};

int main() {
    // Creating an object (constructor is called)
    Joueur alice("Alice", 100);
    
    // Displaying information
    alice.affichage_info();

    // When 'alice' goes out of scope, the destructor is automatically called

    return 0;
}

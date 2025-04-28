// Paire Exercice

#include <iostream>
#include <vector>
#include <memory>
#include <string>
using namespace std;

// Classe de base
class PaireBase {
public:
    virtual void afficher() const = 0; // méthode pure virtuelle
    virtual ~PaireBase() = default;    // destructeur virtuel
};

// Classe template générale
template<typename T, typename U>
class Paire : public PaireBase {
protected:
    T premier;
    U second;
public:
    Paire(T p, U s) : premier(p), second(s) {}

    void afficher() const override {
        cout << "Paire : ";
        
        // Affichage premier
        if constexpr (is_same<T, bool>::value) {
            cout << (premier ? "vrai" : "faux");
        } else {
            cout << premier;
        }

        cout << " , ";

        // Affichage second
        if constexpr (is_same<U, bool>::value) {
            cout << (second ? "vrai" : "faux");
        } else {
            cout << second;
        }
        
        cout << endl;
    }
};

// Spécialisation partielle pour Paire<T, int>
template<typename T>
class Paire<T, int> : public PaireBase {
protected:
    T premier;
    int second;
public:
    Paire(T p, int s) : premier(p), second(s) {}

    void afficher() const override {
        cout << "Paire speciale (second est int) : ";

        if constexpr (is_same<T, bool>::value) {
            cout << (premier ? "vrai" : "faux");
        } else {
            cout << premier;
        }

        cout << " , " << second << endl;
    }
};

int main() {
    vector<unique_ptr<PaireBase>> paires;
    
    paires.push_back(make_unique<Paire<double, int>>(3.14, 42));
    paires.push_back(make_unique<Paire<int, bool>>(10, true));
    paires.push_back(make_unique<Paire<string, double>>("Test", 2.71));
    
    for (const auto& p : paires) {
        p->afficher();
    }

    return 0;
}

// conteneur Exercice

#include <iostream>
#include <vector>
#include <string>

template <typename T>
class Conteneur {
private:
    std::vector<T> elements;
    size_t capacity;

public:
    Conteneur(size_t max_capacity) : capacity(max_capacity) {}

    // Méthode pour ajouter un élément dans le conteneur
    void ajouter(const T& element) {
        if (elements.size() < capacity) {
            elements.push_back(element);
        } else {
            std::cout << "Capacité dépassée " << std::endl;
        }
    }

    // Méthode pour obtenir un élément à une position donnée
    T obtenir(size_t index) const {
        if (index < elements.size()) {
            return elements[index];
        } else {
            std::cerr << "Index hors limites!" << std::endl;
            return T(); // Retourne une valeur par défaut
        }
    }
};

int main() {
    // Exemple avec des entiers
    Conteneur<int> c1(3); // Capacité de 3
    c1.ajouter(10);
    c1.ajouter(20);
    c1.ajouter(30);
    c1.ajouter(40); // Capacité dépassée
    std::cout << c1.obtenir(0) << " " << c1.obtenir(1) << std::endl; // Affiche 10 20

    // Exemple avec des chaînes de caractères
    Conteneur<std::string> c2(2); // Capacité de 2
    c2.ajouter("Bonjour");
    c2.ajouter("Monde");
    std::cout << c2.obtenir(0) << " " << c2.obtenir(1) << std::endl; // Affiche Bonjour Monde

    return 0;
}

#include <iostream>

// Exercice 1 : Utilisation des directives du préprocesseur
void exercice1() {
    #define PI 3.14159 
    #ifdef DEBUG
        std::cout << "Mode debug activé\n";
    #endif
    std::cout << "La valeur de PI est : " << PI << std::endl;
}

// Exercice 2 : Utilisation de la fonction main avec argc et argv
void exercice2(int argc, char* argv[]) {
    // Affichage des arguments passés en ligne de commande
    for (int i = 1; i < argc; ++i) {
        std::cout << "Argument " << i << ": " << argv[i] << std::endl;
    }
}

// Exercice 3 : Espaces de noms et portée des variables
namespace MonEspace {
    int valeur = 10;
}
void exercice3() {
    std::cout << "Valeur dans l'espace de noms : " << MonEspace::valeur << std::endl;
    using namespace std;
    cout << "Affichage avec using namespace std" << endl;
}

// Exercice 4 : Entrée et sortie avec cin et cout
void exercice4() {
    int entier;
    double decimal;
    std::cout << "Entrez un entier: ";
    std::cin >> entier;
    std::cout << "Entrez un nombre décimal: ";
    std::cin >> decimal;
    std::cout << "Valeurs saisies: " << entier << " et " << decimal << std::endl;
}

int main(int argc, char* argv[]) {
    #ifdef EXO
        #if EXO == 1
            exercice1();
        #elif EXO == 2
            exercice2(argc, argv);
        #elif EXO == 3
            exercice3();
        #elif EXO == 4
            exercice4();
        #else
            std::cout << "Numéro d'exercice invalide." << std::endl;
        #endif
    #else
        std::cout << "Aucune macro EXO définie, exécution de l'exercice 1 par défaut." << std::endl;
        exercice1();
    #endif
    return 0;
}

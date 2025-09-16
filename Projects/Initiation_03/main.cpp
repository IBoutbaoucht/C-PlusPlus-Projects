#include <iostream>
#include <limits>

// Exercice 1

void exercice1() {
	int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	std::cout << "Taille totale du tableau : " << sizeof(tab) << " octet(s)" << std::endl;
	std::cout << "Taille d'un élément : " << sizeof(tab[0]) << " octet(s)" << std::endl;
	std::cout << "Nombre d'éléments : " << sizeof(tab) / sizeof(tab[0]) << std::endl;
}

// Exercice 2

void exercice2() {
	const double prixPetitePiece = 250.0;
	const double prixGrandePiece = 350.0;
	const double taxe = 0.06;
	const int validite = 30;

	int petites, grandes;
	std::cout << "Nombre de petites pièces : ";
	std::cin >> petites;
	std::cout << "Nombre de grandes pièces : ";
	std::cin >> grandes;

	double cout = (petites * prixPetitePiece) + (grandes * prixGrandePiece);
	double totalTaxe = cout * taxe;
	double total = cout + totalTaxe;

	std::cout << "===============================\n";
	std::cout << "Estimate for carpet cleaning service" << std::endl;
	std::cout << "Cost : " << cout << "dh" << std::endl;
	std::cout << "Tax: " << totalTaxe << "dh" << std::endl;
	std::cout << "Total estimate: " << total << "dh" << std::endl;
	std::cout << "This estimate is valid for " << validite << " days" << std::endl;
}

// Exercice 3
constexpr int factorielle(int n) {
	return (n <= 1) ? 1 : n * factorielle(n - 1);
}
void exercice3() {
	constexpr int fact5 = factorielle(5);
	static_assert(fact5 == 120, "Erreur de calcul de la factorielle");
	std::cout << "Factorielle de 5 : " << fact5 << std::endl;
}


// Exercice 4

int value = 100;
void exercice4() {
	int value = 50;
	std::cout << "Valeur locale : " << value << std::endl;
	std::cout << "Valeur globale : " << ::value << std::endl;
}

// Exercice 5

#define PI 3.14159
constexpr double RAYON = 7.0;
void exercice5() {
	const int MOIS = 12;
	std::cout << "Nombre de mois dans une année : " << MOIS << std::endl;
	std::cout << "Rayon du cercle : " << RAYON << std::endl;
	std::cout << "Aire du cercle : " << (PI * RAYON * RAYON) << std::endl;
}

// Exercice 6

int safeMultiply(int a, int b) {
	if (b != 0 && (a > std::numeric_limits<int>::max() / b)) {
		std::cerr << "Overflow détecté !" << std::endl;
		return -1;
	}
	return a * b;
}
void exercice6() {
	int a = 30000, b = 1000;
	std::cout << "Multiplication : " << safeMultiply(a, b) << std::endl;
	a = 300000, b = 10000;
	std::cout << "Multiplication : " << safeMultiply(a, b) << std::endl;
}



int main() {
    #ifdef EXO
        #if EXO == 1
            exercice1();
        #elif EXO == 2
            exercice2();
        #elif EXO == 3
            exercice3();
        #elif EXO == 4
            exercice4();
        #elif EXO == 5
            exercice5();
        #elif EXO == 6
            exercice6();
        #else
            std::cout << "Numéro d'exercice invalide." << std::endl;
        #endif
    #else
        std::cout << "Aucune macro EXO définie, exécution de l'exercice 1 par défaut." << std::endl;
        exercice1();
    #endif
    return 0;
}

#include <iostream>


#ifndef EXO_1
#ifndef EXO_2
#ifndef EXO_3
#ifndef EXO_4
#ifndef EXO_5
	int main(){
		return 0 ;
	}
	// Traitement du cas ou aucun macro n'est definie (selectionne) .
#endif
#endif
#endif
#endif
#endif


int main() {
	// Exercice 1 : Affichage d'un message
	#ifdef EXO_1
   	    std::cout << "Hello, World!\nBienvenue en C++!\n";
	#endif
	
	
	// Exercice 2 : Lecture et affichage d’un entier
	#ifdef EXO_2
		int nombre;
		std::cout << "Entrez un nombre: ";
		std::cin >> nombre;
		std::cout << "Vous avez entre: " << nombre << std::endl;
	#endif

	// Exercice 3 : Opérations mathématiques
	#ifdef EXO_3
		double a, b;
		std::cout << "Entrez deux nombres: ";
		std::cin >> a >> b;

		std::cout << "Somme: " << (a + b) << std::endl;
		std::cout << "Difference: " << (a - b) << std::endl;
		std::cout << "Produit: " << (a * b) << std::endl;

		if (b != 0)
			std::cout << "Quotient: " << (a / b) << std::endl;
		else
			std::cout << "Erreur: Division par zéro !" << std::endl;
		
	#endif

	// Exercice 4 : Détection et correction d’erreurs
	#ifdef EXO_4
		std::cout << "Entrez un nombre: ";
		int num;
		std::cin >> num;
		std::cout << "Vous avez entre: " << num << std::endl;
		
	#endif

	// Exercice 5 : Conversion Celsius → Fahrenheit
	#ifdef EXO_5
		double celsius;
		std::cout << "Entrez une temperature en Celsius: ";
		std::cin >> celsius;

		double fahrenheit = (9.0 / 5.0) * celsius + 32;
		std::cout << "Temperature en Fahrenheit: " << fahrenheit << std::endl;

	#endif
	
	return 0 ;

}

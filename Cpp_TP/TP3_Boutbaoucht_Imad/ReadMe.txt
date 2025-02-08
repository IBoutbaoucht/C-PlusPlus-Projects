# TP3 - Boutbaoucht Imad

## Description

Ce TP contient des exercices en C++ qui permettent de découvrir les bases du langage C++,
incluant Analyse de la mémoire d’un tableau, l'utilisation de constexpr et const, et Shadowing .

---

## Instructions pour exécuter le programme

### Prérequis

- Un compilateur C++ supportant le standard C++17.
- Recommendation : `g++` (GNU Compiler Collection) ou tout autre compilateur C++ compatible.

---

### Compilation

1. Ouvrez un terminal dans le répertoire du TP où se trouve le fichier `main.cpp`.

2. Pour compiler un exercice spécifique, définissez la macro correspondante lors de la compilation à l'aide de l'option `-D` :

	l'execution de chaque commande va generer un executable nomme programme ,
	l'execution de ce dernier va lancer le contenu de l'exercice specifie pour le tester.
	
 ""	Terminal : 
		programme
	
 ""	
  ### SYNTAX  :
	
	   g++ -std=c++17 -D EXO="Numero de l'exercice" main.cpp -o programme.
	 

   - Pour l'Exercice 1 (Analyse de la mémoire d’un tableau) :
     
	   g++ -std=c++17 -D EXO=1 main.cpp -o programme
	   

   - Pour l'Exercice 2 (Estimation pour le service de nettoyage de tapis) :
     
	  g++ -std=c++17 -D EXO=2 main.cpp -o programme
	  

   - Pour l'Exercice 3 (Calcul de la factorielle à la compilation avec constexpr) :

      g++ -std=c++17 -D EXO=3 main.cpp -o programme


   - Pour l'Exercice 4 (Variables Globales et Locales (Shadowing)) :

      g++ -std=c++17 -D EXO=4 main.cpp -o programme
	  
   - Pour l'Exercice 5 (Utilisation avancée des constantes) :

      g++ -std=c++17 -D EXO=5 main.cpp -o programme
	  
   - Pour l'Exercice 6 (Détection d’overflow lors d’une multiplication) :

      g++ -std=c++17 -D EXO=6 main.cpp -o programme


----


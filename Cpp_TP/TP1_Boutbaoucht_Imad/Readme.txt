# TP1 - Boutbaoucht Imad

## Description

Ce TP contient des exercices en C++ qui permettent de découvrir les bases du langage C++,
incluant l'affichage d'un message, la lecture et l'affichage d'un entier, et les opérations mathématiques.

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
	
	   g++ -std=c++17 -D "code de l'exercice" main.cpp -o programme.
	   
   Code de :
	   
   - l'Exercice 1 :  EXO_1
     
   - l'Exercice 2 :  EXO_2

   - l'Exercice 3 :  EXO_3

   - l'Exercice 4 :  EXO_4

   - l'Exercice 5 :  EXO_5

	

   - Pour l'Exercice 1 (Affichage d'un message) :
     
	   g++ -std=c++17 -D EXO_1 main.cpp -o programme

   - Pour l'Exercice 2 (Lecture et affichage d'un entier) :
     
	  g++ -std=c++17 -D EXO_2 main.cpp -o programme

   - Pour l'Exercice 3 (Opérations mathématiques) :

      g++ -std=c++17 -D EXO_3 main.cpp -o programme

   - Pour l'Exercice 4 (Détection et correction d’erreurs) :

      g++ -std=c++17 -D EXO_4 main.cpp -o programme

   - Pour l'Exercice 5 (Conversion Celsius → Fahrenheit) :

      g++ -std=c++17 -D EXO_5 main.cpp -o programme


3. Vous pouvez aussi définir plusieurs exercices . Par exemple :

   g++ -std=c++17 -D EXO_1 -D EXO_2 main.c++ -o programme
   
   ceci va permetez d'executer les exercices 1 et 2 au meme temp.

----


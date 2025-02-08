# TP2 - Boutbaoucht Imad

## Description

Ce TP contient des exercices en C++ qui permettent de découvrir les bases du langage C++,
incluant plus sur l'utilisation des directives du préprocesseur, les arguments passés en ligne de command à la fonction main
, et L'espaces de noms .

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
	 

   - Pour l'Exercice 1 (Utilisation des directives du préprocesseur) :
     
	   g++ -std=c++17 -D EXO=1 main.cpp -o programme
	   
	// definir le mode DEBUG
	   g++ -std=c++17 -D EXO=1 -D DEBUG main.cpp -o programme

   - Pour l'Exercice 2 (Utilisation de la fonction main) :
     
	  g++ -std=c++17 -D EXO=2 main.cpp -o programme
	  
	// execution :
		programme arg1 arg2 arg3 ...

   - Pour l'Exercice 3 (Espaces de noms et portée des variables) :

      g++ -std=c++17 -D EXO=3 main.cpp -o programme


   - Pour l'Exercice 4 (Entrée et sortie avec cin et cout) :

      g++ -std=c++17 -D EXO=4 main.cpp -o programme


----


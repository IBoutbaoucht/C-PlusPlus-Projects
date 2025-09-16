# TP3 - Boutbaoucht Imad

## Description

Ce TP contient des exercices en C++ qui permettent de découvrir les bases du langage C++, incluant l'analyse de la mémoire d’un tableau, l'utilisation de `constexpr` et `const`, et le shadowing.

---

## Instructions pour exécuter le programme

### Prérequis

- Un compilateur C++ supportant le standard C++17.
- Recommandation : `g++` (GNU Compiler Collection) ou tout autre compilateur C++ compatible.

---

### Compilation

1. Ouvrez un terminal dans le répertoire du TP où se trouve le fichier `main.cpp`.

2. Pour compiler un exercice spécifique, définissez la macro correspondante lors de la compilation à l'aide de l'option `-D` :

   L'exécution de chaque commande va générer un exécutable nommé `programme`, dont l'exécution lancera le contenu de l'exercice spécifié pour le tester.

   **Terminal :**

   ```bash
   ./programme
   ```

### Syntaxe

```bash
   g++ -std=c++17 -D EXO="Numéro de l'exercice" main.cpp -o programme
```

**Exemples :**

- Pour l'Exercice 1 (Analyse de la mémoire d’un tableau) :
  ```bash
  g++ -std=c++17 -D EXO=1 main.cpp -o programme
  ```

- Pour l'Exercice 2 (Estimation pour le service de nettoyage de tapis) :
  ```bash
  g++ -std=c++17 -D EXO=2 main.cpp -o programme
  ```

- Pour l'Exercice 3 (Calcul de la factorielle à la compilation avec `constexpr`) :
  ```bash
  g++ -std=c++17 -D EXO=3 main.cpp -o programme
  ```

- Pour l'Exercice 4 (Variables Globales et Locales - Shadowing) :
  ```bash
  g++ -std=c++17 -D EXO=4 main.cpp -o programme
  ```

- Pour l'Exercice 5 (Utilisation avancée des constantes) :
  ```bash
  g++ -std=c++17 -D EXO=5 main.cpp -o programme
  ```

- Pour l'Exercice 6 (Détection d’overflow lors d’une multiplication) :
  ```bash
  g++ -std=c++17 -D EXO=6 main.cpp -o programme
  ```

---


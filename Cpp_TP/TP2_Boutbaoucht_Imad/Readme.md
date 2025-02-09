# TP2 - Boutbaoucht Imad

## Description

Ce TP contient des exercices en C++ qui permettent de découvrir les bases du langage C++, incluant l'utilisation des directives du préprocesseur, les arguments passés en ligne de commande à la fonction `main`, et les espaces de noms.

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

- Pour l'Exercice 1 (Utilisation des directives du préprocesseur) :
  ```bash
  g++ -std=c++17 -D EXO=1 main.cpp -o programme
  ```

  *Définir le mode DEBUG :*
  ```bash
  g++ -std=c++17 -D EXO=1 -D DEBUG main.cpp -o programme
  ```

- Pour l'Exercice 2 (Utilisation de la fonction main) :
  ```bash
  g++ -std=c++17 -D EXO=2 main.cpp -o programme
  ```

  *Exécution avec des arguments :*
  ```bash
  ./programme arg1 arg2 arg3 ...
  ```

- Pour l'Exercice 3 (Espaces de noms et portée des variables) :
  ```bash
  g++ -std=c++17 -D EXO=3 main.cpp -o programme
  ```

- Pour l'Exercice 4 (Entrée et sortie avec cin et cout) :
  ```bash
  g++ -std=c++17 -D EXO=4 main.cpp -o programme
  ```

---


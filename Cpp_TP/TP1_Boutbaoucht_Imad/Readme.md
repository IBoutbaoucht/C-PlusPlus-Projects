# TP1 - Boutbaoucht Imad

## Description

Ce TP contient des exercices en C++ qui permettent de découvrir les bases du langage C++, incluant l'affichage d'un message, la lecture et l'affichage d'un entier, et les opérations mathématiques.

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
   g++ -std=c++17 -D "code de l'exercice" main.cpp -o programme
```

**Code des exercices :**

- Exercice 1 : `EXO_1`
- Exercice 2 : `EXO_2`
- Exercice 3 : `EXO_3`
- Exercice 4 : `EXO_4`
- Exercice 5 : `EXO_5`

**Exemples :**

- Pour l'Exercice 1 (Affichage d'un message) :
  ```bash
  g++ -std=c++17 -D EXO_1 main.cpp -o programme
  ```

- Pour l'Exercice 2 (Lecture et affichage d'un entier) :
  ```bash
  g++ -std=c++17 -D EXO_2 main.cpp -o programme
  ```

- Pour l'Exercice 3 (Opérations mathématiques) :
  ```bash
  g++ -std=c++17 -D EXO_3 main.cpp -o programme
  ```

- Pour l'Exercice 4 (Détection et correction d’erreurs) :
  ```bash
  g++ -std=c++17 -D EXO_4 main.cpp -o programme
  ```

- Pour l'Exercice 5 (Conversion Celsius → Fahrenheit) :
  ```bash
  g++ -std=c++17 -D EXO_5 main.cpp -o programme
  ```

3. Vous pouvez aussi définir plusieurs exercices en même temps. Par exemple :

   ```bash
   g++ -std=c++17 -D EXO_1 -D EXO_2 main.cpp -o programme
   ```

   Ceci permettra d'exécuter les exercices 1 et 2 simultanément.

---


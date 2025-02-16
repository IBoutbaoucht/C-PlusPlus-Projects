# TP4 - Boutbaoucht Imad

# Exercices en C++

## Description
Ce projet contient plusieurs exercices en C++ couvrant différents concepts de programmation, y compris les tableaux, les structures de données STL (vector, list, map, set), le tri, et un cache LRU.

## Compilation et Exécution
### Prérequis
Assurez-vous d'avoir un compilateur C++ installé sur votre système, comme `g++`.

### Compilation
Utilisez la commande suivante pour compiler le programme :
```bash
 g++ -o exercice main.cpp
```

### Exécution d'un exercice spécifique
Le programme est conçu pour exécuter un exercice spécifique en utilisant une macro de préprocesseur `EXO`. Vous devez définir `EXO` lors de l'exécution.

#### Exemple : Exécuter l'exercice 1
```bash
 g++ -o exercice main.cpp -DEXO=1
 ./exercice
```

#### Exemple : Exécuter l'exercice 5
```bash
 g++ -o exercice main.cpp -DEXO=5
 ./exercice
```

#### Exercice avec arguments (Exercice 4)
Si vous exécutez l'exercice 4, vous devez fournir des nombres en argument :
```bash
 g++ -o exercice main.cpp -DEXO=4
 ./exercice 3 5 7 9
```

### Exercices Disponibles
- **Exercice 1** : Somme des éléments d'un tableau
- **Exercice 2** : Somme de la diagonale principale d'une matrice
- **Exercice 3** : Inversion d'un tableau
- **Exercice 4** : Multiplication des nombres passés en argument
- **Exercice 5** : Manipulation d'une liste (insertion)
- **Exercice 6** : Utilisation de `std::set` pour éviter les doublons
- **Exercice 7** : Utilisation de `std::map` pour stocker des paires clé-valeur
- **Exercice 8** : Comptage de mots avec `unordered_map`
- **Exercice 9** : Tri d'un tableau
- **Exercice 10** : Trouver la plus longue séquence d'entiers consécutifs
- **Exercice 11** : Implémentation d'un cache LRU (Least Recently Used)

## Remarque
Si aucune macro `EXO` n'est définie, l'exercice 1 sera exécuté par défaut.



# Programmation Orientée Objet en C++ avec
Pointeurs

## Description
Ce projet contient plusieurs exercices en C++ portant sur la gestion de pointeurs, 
la manipulation de fichiers et l'implémentation d'un smart pointer rudimentaire.
Un **Makefile** est fourni pour faciliter la compilation de tous les exercices.

## Prérequis
- Avoir un compilateur C++ installé (comme g++).
- Assurez-vous que `make` est installé sur votre système.

## Compilation
Pour compiler tous les exercices, exécutez la commande suivante :
```sh
make
```
Cela générera des fichiers exécutables nommés `exo1`, `exo2`, ..., `exo7`.

Pour compiler un exercice spécifique, utilisez :
```sh
make exoX
```
(remplacez `X` par le numéro de l'exercice, par exemple `make exo6`).

## Exécution
Une fois compilé, vous pouvez exécuter un exercice avec :
```sh
./exoX
```
(remplacez `X` par le numéro de l'exercice).

## Nettoyage
Pour supprimer les exécutables générés, utilisez :
```sh
make clean
```

## Détails des exercices

### Exercice 6 : Manipulation de fichiers avec pointeurs
- Définition d'une classe `Fichier` permettant de lire et écrire dans un fichier texte.
- Utilisation d'un **pointeur** vers un **flux de fichier** (`fstream*`).
- Implémentation des méthodes `sauvegarder()` et `charger()`.
- Gestion dynamique de la mémoire.

#### Exemple d'exécution :
```
Sauvegarde des données...
Lecture des données...
Contenu du fichier :
Bonjour, ceci est un test.
Mémoire du flux libérée.
```

### Exercice 7 : Implémentation d'un Smart Pointer (SharedPtr)
- Implémentation d'une classe `SharedPtr` qui **gère un pointeur avec un compteur de références**.
- Incrémentation du compteur lors de la **copie** d'un `SharedPtr`.
- Décrémentation et libération de la mémoire lorsque le compteur atteint **zéro**.

#### Exemple d'exécution :
```
Création d'un SharedPtr vers 10
Nombre de références : 1
Création d'une copie
Nombre de références : 2
Destruction d'un SharedPtr
Nombre de références : 1
Destruction d'un SharedPtr
Objet supprimé
```

## Remarque
Ces exercices font partie d'un TP sur la **programmation orientée objet en C++ avec pointeurs**.

Bon codage ! 🚀

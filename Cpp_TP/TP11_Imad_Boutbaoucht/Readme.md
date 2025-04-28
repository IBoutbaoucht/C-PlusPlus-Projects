# TP 11 : Gestion des Exceptions

**Nom** : Imad Kissami  
**Date** : 21 Avril 2025

## Objectif

- Créer un Makefile pour compiler tous les fichiers `.cpp`.
- Tous les fichiers doivent être regroupés dans un dossier `TP11_Nom_Prénom`.
- Mettre la main sur les concepts de gestion des exceptions.

## Exercice 1 : Gestion des exceptions dans une opération

- Écrire un programme qui demande à l’utilisateur de saisir deux nombres et une opération (+, -, *, /).
- Implémenter une fonction `calculate` qui effectue l’opération demandée et gère deux types d’exceptions :
  - Une exception pour la division par zéro.
  - Une exception pour une opération non valide.

## Exercice 2 : Gestion d’un inventaire avec des exceptions

- Créer une classe `Inventory` qui gère un stock d’articles (représenté par un entier).
- Implémenter des méthodes pour ajouter (`add_items`) et retirer (`remove_items`) des articles.
- Gérer les erreurs suivantes avec des exceptions :
  - Tentative d’ajouter un nombre négatif d’articles.
  - Tentative de retirer plus d’articles que le stock disponible.

## Exercice 3 : Gestion d’une pile avec des exceptions

- Implémenter une classe `Stack` qui gère une pile d’entiers avec une capacité maximale fixée au moment de la construction.
- Ajouter des méthodes `push` et `pop`.
- Gérer les erreurs suivantes avec des exceptions :
  - Tentative de pousser un élément dans une pile pleine.
  - Tentative de retirer un élément d’une pile vide.
- Créer une série de fonctions (func_a, func_b, func_c) qui utilisent la pile et provoquent une exception pour démontrer le déroulement de pile (stack unwinding).

## Compilation et Exécution

1. Créer un Makefile pour compiler tous les fichiers `.cpp`.
2. Utiliser la commande suivante pour compiler et exécuter le programme :
    ```bash
    make
    ./programme
    ```

## Conclusion

Ce TP permet de comprendre et de maîtriser la gestion des exceptions en C++, en implémentant des mécanismes de gestion d’erreurs pour des opérations sur des nombres, des inventaires et des piles.

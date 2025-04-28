# TP 10  Templates

Nom  Imad Boutbaoucht

## Objectif

- Créer un Makefile pour compiler tous les fichiers `.cpp`.
- Tous les fichiers doivent être regroupés dans un dossier `TP10_Nom_Prénom`.
- Maîtriser les concepts des templates en C++  fonctions templates, classes templates, spécialisation, déduction de types, `if constexpr`, variadic templates, et méta-programmation.

## Exercice 1  Fonction template pour le maximum

- Écrire une fonction template `maximum` qui prend deux paramètres de type générique et retourne le plus grand des deux.
- Implémenter une spécialisation pour `stdstring` qui compare les chaînes lexicographiquement.

## Exercice 2  Classe template Conteneur

- Créer une classe template `Conteneur` qui gère une liste d'éléments de type `T` avec une capacité maximale fixée à la construction.
- Implémenter des méthodes pour ajouter (`ajouter`) et obtenir (`obtenir`) des éléments.

## Exercice 3  Classe template Paire avec spécialisation et `if constexpr`

- Implémenter une classe template `Paire` qui stocke deux valeurs de types potentiellement différents (`T` et `U`).
- Ajouter une méthode `afficher` pour afficher les valeurs.
- Implémenter une spécialisation partielle pour `PaireT, int` qui affiche un message spécifique.
- Utiliser `if constexpr` dans la méthode `afficher` pour gérer les booléens différemment.

## Exercice 4  Template Matrix avec méta-programmation

- Implémenter une classe template `Matrix` qui représente une matrice de taille fixe (M lignes, N colonnes) d’éléments de type `T`.
- Ajouter une méthode `add` pour additionner deux matrices de mêmes dimensions.
- Utiliser `static_assert` pour vérifier la compatibilité des dimensions lors de l’addition.
- Implémenter une spécialisation partielle via une classe `MatrixAdder` pour gérer les cas où les dimensions des matrices sont incompatibles, en affichant un message d’erreur et en retournant une matrice vide.

## Compilation et Exécution

1. Créer un Makefile pour compiler tous les fichiers `.cpp`.
2. Utiliser la commande suivante pour compiler et exécuter le programme 
    ```bash
    make
    .programme
    ```

## Conclusion

Ce TP permet de comprendre et de maîtriser les concepts des templates en C++, y compris les fonctions templates, les classes templates, la spécialisation, la déduction de types, et les techniques avancées comme `if constexpr` et la méta-programmation.

#include <iostream>
#include "Movies.h"

// Fonction pour incrémenter le compteur de visionnage
void increment_watched(Movies &movies, std::string name) {
    if (movies.increment_watched(name)) {
        std::cout << name << " visionnage incrémenté" << std::endl;
    } else {
        std::cout << name << " introuvable" << std::endl;
    }
}

// Fonction pour ajouter un film
void add_movie(Movies &movies, std::string name, std::string rating, int watched) {
    if (movies.add_movie(name, rating, watched)) {
        std::cout << name << " ajouté" << std::endl;
    } else {
        std::cout << name << " existe déjà" << std::endl;
    }
}

int main() {
    Movies my_movies;

    my_movies.display();

    add_movie(my_movies, "Big", "PG-13", 2);
    add_movie(my_movies, "Star Wars", "PG", 5);
    add_movie(my_movies, "Cendrillon", "PG", 7);

    my_movies.display();

    add_movie(my_movies, "Cendrillon", "PG", 7);
    add_movie(my_movies, "L'Âge de glace", "PG", 12);

    my_movies.display();

    increment_watched(my_movies, "Big");
    increment_watched(my_movies, "L'Âge de glace");

    my_movies.display();

    increment_watched(my_movies, "XXX");

    return 0;
}

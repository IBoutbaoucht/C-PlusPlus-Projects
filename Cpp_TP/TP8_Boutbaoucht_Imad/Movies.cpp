#include "Movies.h"

// Ajouter un film à la liste
bool Movies::add_movie(std::string name, std::string rating, int watched) {
    for (const auto& movie : movies_list) {
        if (movie.get_name() == name) {
            return false;
        }
    }
    movies_list.push_back(Movie(name, rating, watched));
    return true;
}

// Incrémenter le compteur de visionnage d'un film existant
bool Movies::increment_watched(std::string name) {
    for (auto& movie : movies_list) {
        if (movie.get_name() == name) {
            movie.increment_watched();
            return true;
        }
    }
    return false;
}

// Affichage de tous les films
void Movies::display() const {
    if (movies_list.empty()) {
        std::cout << "Désolé, aucun film à afficher" << std::endl;
    } else {
        std::cout << "===================================" << std::endl;
        for (const auto& movie : movies_list) {
            movie.display();
        }
        std::cout << "===================================" << std::endl;
    }
}

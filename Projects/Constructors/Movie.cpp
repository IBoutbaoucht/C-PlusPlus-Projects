#include "Movie.h"

// Constructeur
Movie::Movie(std::string name, std::string rating, int watched)
    : name(name), rating(rating), watched(watched) {}

// Getters
std::string Movie::get_name() const { return name; }
std::string Movie::get_rating() const { return rating; }
int Movie::get_watched() const { return watched; }

// Incrémenter le compteur de visionnage
void Movie::increment_watched() { watched++; }

// Affichage des informations du film
void Movie::display() const {
    std::cout << name << ", " << rating << ", " << watched << std::endl;
}

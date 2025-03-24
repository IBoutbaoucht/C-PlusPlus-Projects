#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>

class Movie {
private:
    std::string name;
    std::string rating;
    int watched;

public:
    // Constructeur
    Movie(std::string name, std::string rating, int watched);

    // Getters
    std::string get_name() const;
    std::string get_rating() const;
    int get_watched() const;

    // Méthodes
    void increment_watched();
    void display() const;
};

#endif

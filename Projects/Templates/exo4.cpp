// Matrix Exercice

#include <iostream>
#include <array>
#include <stdexcept>

// Classe Matrix pour gérer les matrices
template <typename T, std::size_t M, std::size_t N>
class Matrix {
private:
    std::array<std::array<T, N>, M> data;

public:
    // Méthode pour définir un élément à une position donnée
    void set(std::size_t i, std::size_t j, T value) {
        if (i >= M || j >= N) {
            throw std::out_of_range("Index out of range");
        }
        data[i][j] = value;
    }

    // Méthode pour obtenir un élément à une position donnée
    T get(std::size_t i, std::size_t j) const {
        if (i >= M || j >= N) {
            throw std::out_of_range("Index out of range");
        }
        return data[i][j];
    }

    // Méthode pour additionner deux matrices
    template <std::size_t M2, std::size_t N2>
    Matrix<T, M, N> add(const Matrix<T, M2, N2>& other) const {
        // Vérification de la compatibilité des dimensions lors de la compilation
        static_assert(M == M2 && N == N2, "Dimensions incompatibles pour l'addition");

        Matrix<T, M, N> result;
        for (std::size_t i = 0; i < M; ++i) {
            for (std::size_t j = 0; j < N; ++j) {
                result.set(i, j, this->get(i, j) + other.get(i, j));
            }
        }
        return result;
    }
};

// Spécialisation partielle pour les matrices avec des dimensions incompatibles
template <typename T, std::size_t M1, std::size_t N1, std::size_t M2, std::size_t N2>
class MatrixAdder {
public:
    static Matrix<T, 0, 0> add(const Matrix<T, M1, N1>&, const Matrix<T, M2, N2>&) {
        static_assert(M1 == M2 && N1 == N2, "Dimensions incompatibles pour l'addition");
        return Matrix<T, 0, 0>();  // Retourne une matrice vide en cas d'erreur
    }
};

// Spécialisation pour ajouter les matrices si les dimensions sont compatibles
template <typename T, std::size_t M, std::size_t N>
class MatrixAdder<T, M, N, M, N> {
public:
    static Matrix<T, M, N> add(const Matrix<T, M, N>& m1, const Matrix<T, M, N>& m2) {
        return m1.add(m2);  // Retourne le résultat de l'addition
    }
};

int main() {
    // Matrices compatibles
    Matrix<int, 2, 2> m1;
    m1.set(0, 0, 1); m1.set(0, 1, 2);
    m1.set(1, 0, 3); m1.set(1, 1, 4);

    Matrix<int, 2, 2> m2;
    m2.set(0, 0, 5); m2.set(0, 1, 6);
    m2.set(1, 0, 7); m2.set(1, 1, 8);

    auto m3 = m1.add(m2);
    std::cout << m3.get(0, 0) << " " << m3.get(0, 1) << std::endl; // Affiche 6 8
    std::cout << m3.get(1, 0) << " " << m3.get(1, 1) << std::endl; // Affiche 10 12

    Matrix<int, 2, 3> m4;  // Incompatible
    // m1.add(m4); // Erreur de compilation (static_assert)

    return 0;
}

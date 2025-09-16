#include <bits/stdc++.h>

using namespace std;

int n = 3, m = 3;

int** transpose(int** M) {
    int** T = new int*[m];  // On inverse dimensions n et m
    for (int i = 0; i < m; i++) {
        T[i] = new int[n];  
        for (int j = 0; j < n; j++) {
            T[i][j] = M[j][i];  // Correction de l'inversion
        }
    }
    return T;
}

int main() {
    // Allocation dynamique d'une matrice
    int** Matrix = new int*[n];
    
    int a = 1;
    for (int i = 0; i < n; i++) {
        Matrix[i] = new int[m];  
        for (int j = 0; j < m; j++) {
            Matrix[i][j] = a++;
        }
    }

    cout << "Matrice Initiale :" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << Matrix[i][j] << ' ';
        }
        cout << endl;
    }

    int** T = transpose(Matrix);

    cout << "Matrice Transposée :" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << T[i][j] << ' ';
        }
        cout << endl;
    }

    // Libération de la mémoire pour Matrix
    for (int i = 0; i < n; i++) {
        delete[] Matrix[i];
    }
    delete[] Matrix;

    // Libération de la mémoire pour la transposée
    for (int i = 0; i < m; i++) { // Correction ici
        delete[] T[i];
    }
    delete[] T;

    return 0 ;
}



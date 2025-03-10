#include <bits/stdc++.h>

using namespace std ;


class Joueur{
public:
    string nom ;
    int score ;


    void affichage_info(){
        cout << "Joueur: " << nom << ", " ;
        cout << "Score: " << score << endl ; 
    }

    Joueur(string Name,int Score) : nom(Name) , score(Score) {}

    // Default Constructor
    Joueur() : nom("Inconnu"), score(0) {}


};

int main(){

    Joueur alice("Alice",100) ;
    alice.affichage_info();

    Joueur bob ;
    bob.nom = "Bob" ;
    bob.score = 200 ;
    bob.affichage_info() ;

    return 0 ;
}
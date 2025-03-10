#include <iostream>
#include <vector>
#include <numeric> // for accumulate()

using namespace std;

class Etudiant {
private:
    string nom;
    vector<float> notes;

public:
    // Constructor
    Etudiant(string n, vector<float> ns) : nom(n), notes(ns) {}

    // Method to calculate the average of the grades
    float calculerMoyenne() {
        if (notes.empty()) return 0.0; // Avoid division by zero
        return accumulate(notes.begin(), notes.end(), 0.0) / notes.size();
    }

    // Method to display student details
    void afficherInfo() {
        cout << "Nom: " << nom << endl;
        cout << "Notes: ";
        for (size_t i = 0; i < notes.size(); i++) {
            cout << notes[i];
            if (i < notes.size() - 1) cout << ", ";
        }
        cout << endl;
        cout << "Moyenne: " << calculerMoyenne() << endl;
    }
};

int main() {
    // Creating a student with a list of grades
    vector<float> notesKarim = {15, 18, 12};
    Etudiant karim("Karim", notesKarim);

    // Display student info
    karim.afficherInfo();

    return 0;
}

#include <iostream>

class SharedPtr {
public:

    int* ptr;          // Pointeur vers l'objet
    int* ref_count;    // Pointeur vers le compteur de références

    // Constructeur prenant un pointeur brut
    SharedPtr(int* p = nullptr) : ptr(p), ref_count(new int(1)) {
        if (ptr) {
            std::cout << "Création d'un SharedPtr vers " << *ptr << std::endl;
        } else {
            std::cout << "Création d'un SharedPtr vers nullptr" << std::endl;
        }
        printRefCount();
    }

    // Constructeur de copie
    SharedPtr(const SharedPtr& other) : ptr(other.ptr), ref_count(other.ref_count) {
        if (ptr) {
            (*ref_count)++;
            std::cout << "Création d'une copie" << std::endl;
            printRefCount();
        }
    }

    // Destructeur
    ~SharedPtr() {
        release();
    }

    // Méthode pour afficher le nombre de références
    void printRefCount() const {
        std::cout << "Nombre de références : " << *ref_count << std::endl;
    }

    // Méthode pour libérer la ressource
    void release() {
        if (ptr) {
            (*ref_count)--;
            if (*ref_count == 0) {
                std::cout << "Destruction d'un SharedPtr" << std::endl;
                std::cout << "Objet supprimé" << std::endl;
                delete ptr;
                delete ref_count;
                ptr = nullptr;
                ref_count = nullptr;
            } else {
                std::cout << "Destruction d'un SharedPtr" << std::endl;
                printRefCount();
            }
        }
    }

    
};

int main() {
    // Création d'un SharedPtr vers 10
    SharedPtr ptr1(new int(10));

    // Création d'une copie
    SharedPtr ptr2 = ptr1;

    return 0;
}
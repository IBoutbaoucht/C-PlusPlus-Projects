#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

class Livre {
public:
    std::string titre;
    int pages;
    Livre(std::string t, int p) : titre(t), pages(p) {}
};

std::ostream& operator<<(std::ostream& os, const Livre& l) {
    os << l.titre << " - " << l.pages << " pages";
    return os;
}

int main() {
    std::vector<Livre> livres = {
        Livre("C++ Moderne", 350),
        Livre("Apprendre Python", 500),
        Livre("Algorithmique", 450)
    };

    std::cout<<"A partir des livres:"<<std::endl;
    for (auto i:livres){
        std::cout<<i.titre<<" - "<<i.pages<<" pages ";
    }
    std::cout<<std::endl;
    
    std::sort(livres.begin(), livres.end(), [](const Livre& a, const Livre& b) {
        return a.titre < b.titre;
    });

    std::cout << "\n - Tri par titre :" << std::endl;
    for (const Livre& l : livres) {
        std::cout << l << std::endl;
    }

    std::sort(livres.begin(), livres.end(), [](const Livre& a, const Livre& b) {
        return a.pages > b.pages;
    });

    std::cout << "\n - Tri par nombre de pages decroissant :" << std::endl;
    for (const Livre& l : livres) {
        std::cout << l << std::endl;
    }

    return 0;
}
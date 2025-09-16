#include<bits/stdc++.h>

using namespace std ;

void exercice1(){
	int tableau[5] = {10,20,30,40,50} ;
	int somme = 0 ;
	cout << "Éléments :" ;
	for(int i=0;i<5;i++){
		cout << tableau[i] << " " ;
		somme+=tableau[i] ;
	}
	cout << endl << "Somme : " << somme << endl;
}

void exercice2(){
	int Matrice[3][3] = {{1,2,3},{4,5,6},{7,8,9}} ;
	int sommeDiagonale = 0 ;
	cout << "Matrice : " << endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << Matrice[i][j] << " " ;
		}
		cout << endl ;
	}
	cout << "Somme :" ;
	for(int i=0;i<3;i++){
		sommeDiagonale+=Matrice[i][i] ;
	}
	cout << sommeDiagonale ;
	cout << endl ;
}

void exercice3(){
	std::array<int,5> arr = {1,2,3,4,5} ;
	cout << "Original :" << endl ;
	for(int i=0;i<5;i++){
		cout << arr[i] << " " ;
	}
	reverse(arr.begin(),arr.end()) ;
	cout << endl << "Inversé : " << endl ;
	for(int i=0;i<5;i++){
		cout << arr[i] << " " ;
	}
	cout << endl ;
}


void exercice4(int argc, char* argv[]){
	vector<int> nombres ;
	for(int i=1;i<argc;i++){
		nombres.push_back(stoi(argv[i])) ;
	}
	cout << "Doublé :" ;
	for(int i=1;i<argc;i++){
		cout << 2*nombres[i] << " ";
	}
	cout << endl ;
}

void exercice5(){
	list<int> L = {10,20,30,40,50} ;
	L.push_front(0) ;
	L.push_back(60) ;

	cout << "Après insertion : " ;
	for(auto x:L){
		cout << x << " " ;
	} 
	cout << endl ;

}

void exercice6(){
	// Déclarer un std::set d'entiers
	std::set<int> numbers;

	// Insertion d'éléments
	numbers.insert(5);
	numbers.insert(10);
	numbers.insert(15);
	numbers.insert(20);

	// Affichage de l'ensemble original
	std::cout << "Original : ";
	for (int num : numbers) {
		std::cout << num << " ";
	}
	std::cout << std::endl;

	// Tenter d'insérer un doublon
	numbers.insert(10); // Doublon de 10, cela ne sera pas ajouté

	// Affichage après insertion d'un doublon
	std::cout << "Après insertion de 10 : ";
	for (int num : numbers) {
		std::cout << num << " ";
	}
	std::cout << std::endl;
}

void exercice7(){
	std::map<std::string, int> students;

    // Insérer des paires clé-valeur dans la map
    students["John"] = 85;
    students["Alice"] = 90;
    students["Bob"] = 78;

    // Affichage des noms d'étudiants et de leurs notes
    for (const auto& pair : students) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }

}

void exercice8(){
	std::string phrase = "pomme banane pomme orange banane banane";
    
    // Créer un unordered_map pour stocker les mots et leurs fréquences
    std::unordered_map<std::string, int> wordCount;
    
    // Utiliser un stringstream pour diviser la phrase en mots
    std::stringstream asociated_stream(phrase);
    std::string word;
    
    // Compter les occurrences des mots
    while (asociated_stream >> word) {
        wordCount[word]++;
    }

    // Affichage des mots et de leurs occurrences
    for (const auto& entry : wordCount) {
        std::cout << entry.first << " : " << entry.second << std::endl;
    }

    // Afficher le nombre total de mots uniques
    std::cout << wordCount.size() << std::endl;

}

void exercice9(){
	std::vector<int> numbers = {30, 10, 50, 20, 40};
		
	// Affichage avant tri
	std::cout << "Original : ";
	for (int num : numbers) {
		std::cout << num << " ";
	}
	std::cout << std::endl;

	// Trier le vecteur en ordre croissant
	std::sort(numbers.begin(), numbers.end());

	// Affichage après tri
	std::cout << "Trié : ";
	for (int num : numbers) {
		std::cout << num << " ";
	}
	std::cout << std::endl;
	
}

void exercice10(){

	// Liste donnée d'entiers
	std::vector<int> numbers = {100, 4, 200, 1, 3, 2};

	// Stocker les nombres dans un std::set pour un accès rapide
	std::set<int> numberSet(numbers.begin(), numbers.end());

	set<int> LongestSequence ;

	set<int> Sequence ;

	int longestStreak = 0;
	int currentStreak = 1;
	int previousNumber = *numberSet.begin();
	Sequence.insert(*numberSet.begin());

	// Parcourir les éléments du set
	for (auto it = std::next(numberSet.begin()); it != numberSet.end(); ++it) {
		if (*it == previousNumber + 1) {
			// Si le nombre actuel est consécutif au précédent, augmenter la séquence
			currentStreak++;
			Sequence.insert(*it) ;
		} else {
		// Si la séquence est interrompue, réinitialiser le compteur de séquence
			if( currentStreak > longestStreak ){
				longestStreak = currentStreak ;
				LongestSequence = Sequence ;
			}
			currentStreak = 1;
			Sequence = {};
			Sequence.insert(*it) ;
		}
		previousNumber = *it;
		
	}

	// Comparer la dernière séquence
	if( currentStreak > longestStreak ){
		longestStreak = currentStreak ;
		LongestSequence = Sequence ;
	}

	// Afficher la longueur de la plus longue séquence consécutive
	std::cout << "Plus longue sequence : " << longestStreak << std::endl;
	for(auto x : LongestSequence){
		cout << x << " " ;
	}
	
}


// Exercice 11

void display(const std::list<std::pair<int, int>>& lru) {
    std::cout << "Etat du cache : ";
    for (const std::pair<int, int>& item : lru) {
        std::cout << "(" << item.first << ", " << item.second << ") ";
    }
    std::cout << std::endl;
}

int get(std::unordered_map<int, std::list<std::pair<int, int>>::iterator>& cache, 
        std::list<std::pair<int, int>>& lru, int key) {
    if (cache.find(key) == cache.end()) return -1; // Clé non trouvée

    // Déplacer l'élement en tete (récemment utilisé)
    lru.splice(lru.begin(), lru, cache[key]);
    
    return cache[key]->second; // Retourne la valeur
}

void put(std::unordered_map<int, std::list<std::pair<int, int>>::iterator>& cache, 
         std::list<std::pair<int, int>>& lru, int capacity, int key, int value) {
    if (cache.find(key) != cache.end()) {
        // Mise A jour de la valeur et déplacement en tete
        cache[key]->second = value;
        lru.splice(lru.begin(), lru, cache[key]);
    } else {
        if (lru.size() == capacity) {
            // Supprimer l'élement le moins récemment utilisé
            int old_key = lru.back().first;
            std::cout << "Ajout de (" << key << ", " << value << "), suppression de (" << old_key << ", " << lru.back().second << ")\n";
            cache.erase(old_key);
            lru.pop_back();
        }
        // Ajouter un nouvel élement en tête
        lru.emplace_front(key, value);
        cache[key] = lru.begin();
    }
}

void exercice11() {
    std::list<std::pair<int, int>> lru;
    std::unordered_map<int, std::list<std::pair<int, int>>::iterator> cache;
    int capacity = 2;

    put(cache, lru, capacity, 1, 10);
    put(cache, lru, capacity, 2, 20);
    display(lru);  // Etat du cache : (2, 20) (1, 10)

    std::cout << "Acces a la cle 1 : " << get(cache, lru, 1) << std::endl;
    display(lru);  // Etat du cache : (1, 10) (2, 20)

    put(cache, lru, capacity, 3, 30);
    display(lru);  // Etat du cache : (3, 30) (1, 10) (2, 20 supprimé)
}



// Main
int main(int argc, char* argv[]){
     #ifdef EXO
        #if EXO == 1
            exercice1();
        #elif EXO == 2
            exercice2();
        #elif EXO == 3
            exercice3();
        #elif EXO == 4
            exercice4(argc,argv);
	#elif EXO == 5
	    exercice5();
	#elif EXO == 6
		exercice6();
	#elif EXO == 7
		exercice7();
	#elif EXO == 8
		exercice8();
	#elif EXO == 9
		exercice9();
	#elif EXO == 10
		exercice10();
	#elif EXO == 11
		exercice11();
        #else
            std::cout << "Numéro d'exercice invalide." << std::endl;
        #endif
    #else
        std::cout << "Aucune macro EXO définie, exécution de l'exercice 1 par défaut." << std::endl;
        exercice1();
    #endif


	return 0 ;
}

# TP8 - POO C++ - Constructeurs

## 🎬 Project Overview
This C++ project is designed to help movie enthusiasts track the films they have watched and how many times they have viewed them. It implements Object-Oriented Programming (OOP) principles using classes and constructors.

## 📂 Project Structure
```
TP8_Nom_Prénom/
│── src/
│   ├── main.cpp        # Main program
│   ├── Movie.h         # Movie class definition
│   ├── Movie.cpp       # Movie class implementation
│   ├── Movies.h        # Movies collection class definition
│   ├── Movies.cpp      # Movies collection class implementation
│── Makefile            # Compilation script
│── README.md           # Project documentation
```

## 📌 Features
- **Movie Class:** Represents a single movie with a name, rating (G, PG, PG-13, R), and view count.
- **Movies Class:** Manages a collection of movies with the ability to:
  - Add a new movie (only if it doesn’t already exist).
  - Increment the view count of a movie.
  - Display the list of movies.
- **Console Interaction:** Allows users to add movies, track watch counts, and view their collection.

## ⚙️ Installation & Compilation
1. **Clone the repository:**
   ```sh
   git clone https://github.com/.........
   cd tp8-poo-cpp
   ```
2. **Compile the project using Makefile:**
   ```sh
   make
   ```
3. **Run the executable:**
   ```sh
   ./movies_app
   ```
4. **Clean up compiled files (optional):**
   ```sh
   make clean
   ```

## 🚀 Usage
### Example Execution
```sh
Désolé, aucun film à afficher

Big ajouté
Star Wars ajouté
Cendrillon ajouté

===================================
Big, PG-13, 2
Star Wars, PG, 5
Cendrillon, PG, 7
===================================

Cendrillon existe déjà
L'Âge de glace ajouté

===================================
Big, PG-13, 2
Star Wars, PG, 5
Cendrillon, PG, 7
L'Âge de glace, PG, 12
===================================

Big visionnage incrémenté
L'Âge de glace visionnage incrémenté

===================================
Big, PG-13, 3
Star Wars, PG, 5
Cendrillon, PG, 7
L'Âge de glace, PG, 13
===================================

XXX introuvable
```

## 🛠️ Technologies Used
- **C++** (Object-Oriented Programming, Vectors, Constructors)
- **Makefile** (For compilation automation)

## 📜 License
This project is open-source and available under the [MIT License](LICENSE).

## 🤝 Contributing
Contributions are welcome! Feel free to fork the repository and submit pull requests.

## 📧 Contact
For any questions or suggestions, feel free to reach out.

Happy coding! 🚀


# Nom de l'exécutable final
TARGET = main

# Tous les fichiers source .cpp dans le dossier courant
SRCS = $(wildcard *.cpp)

# Remplace .cpp par .o pour avoir les fichiers objets
OBJS = $(SRCS:.cpp=.o)

# Compilateur
CXX = g++
# Options de compilation
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic

# Règle par défaut
all: $(TARGET)

# Création de l'exécutable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compilation des fichiers objets
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyage des fichiers objets et exécutable
# rm -f $(OBJS) $(TARGET)
clean:
	rm -f $(OBJS) $(TARGET)


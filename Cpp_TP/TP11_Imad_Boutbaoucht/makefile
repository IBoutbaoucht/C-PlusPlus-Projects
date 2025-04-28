CC = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g
FILES = exo1.cpp exo2.cpp exo3.cpp
OUTPUT = tp11_templates

# Règle principale
all: tp11_templates

tp11_templates: exo1.cpp exo2.cpp exo3.cpp
	$(CC) $(CXXFLAGS) exo1.cpp -o tp11_exo1
	$(CC) $(CXXFLAGS) exo2.cpp -o tp11_exo2
	$(CC) $(CXXFLAGS) exo3.cpp -o tp11_exo3

# Règle de nettoyage
clean:
	rm -f tp11_exo1 tp11_exo2 tp11_exo3 

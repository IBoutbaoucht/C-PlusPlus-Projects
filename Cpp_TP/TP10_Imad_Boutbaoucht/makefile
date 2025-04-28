CC = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -g
FILES = exo1.cpp exo2.cpp exo3.cpp exo4.cpp
OUTPUT = tp10_templates

# Règle principale
all: tp10_templates

tp10_templates: exo1.cpp exo2.cpp exo3.cpp exo4.cpp
	$(CC) $(CXXFLAGS) exo1.cpp -o tp10_exo1
	$(CC) $(CXXFLAGS) exo2.cpp -o tp10_exo2
	$(CC) $(CXXFLAGS) exo3.cpp -o tp10_exo3
	$(CC) $(CXXFLAGS) exo4.cpp -o tp10_exo4

# Règle de nettoyage
clean:
	rm -f tp10_exo1 tp10_exo2 tp10_exo3 tp10_exo4

# Makefile pour compiler tous les exercices

CXX = g++
CXXFLAGS = -std=c++17 -Wall

EXERCISES = exo1 exo2 exo3 exo4 exo5

all: $(EXERCISES)

exo1: exo1.cpp
	$(CXX) $(CXXFLAGS) -o exo1 exo1.cpp

exo2: exo2.cpp
	$(CXX) $(CXXFLAGS) -o exo2 exo2.cpp

exo3: exo3.cpp
	$(CXX) $(CXXFLAGS) -o exo3 exo3.cpp

exo4: exo4.cpp
	$(CXX) $(CXXFLAGS) -o exo4 exo4.cpp

exo5: exo5.cpp
	$(CXX) $(CXXFLAGS) -o exo5 exo5.cpp

clean:
	rm -f $(EXERCISES)

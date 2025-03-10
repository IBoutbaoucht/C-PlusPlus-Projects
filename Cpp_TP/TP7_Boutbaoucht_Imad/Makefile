# Makefile pour compiler tous les exercices

CXX = g++
CXXFLAGS = -std=c++17 -Wall

EXERCISES = exo1 exo2 exo3 exo4 exo5 exo6 exo7

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

exo6: exo6.cpp
	$(CXX) $(CXXFLAGS) -o exo6 exo6.cpp

exo7: exo7.cpp
	$(CXX) $(CXXFLAGS) -o exo7 exo7.cpp

clean:
	rm -f $(EXERCISES)
#	del /F /Q exo1.exe exo2.exe exo3.exe exo4.exe exo5.exe exo6.exe exo7.exe *.o 2> NUL

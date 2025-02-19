CC = g++
CFLAGS = -Wall -std=c++17

OBJ1 = exo1.o
OBJ2 = exo2.o
OBJ3 = exo3.o
OBJ4 = exo4.o
OBJ5 = exo5.o
OBJ6 = exo6.o

all: exo1 exo2 exo3 exo4 exo5 exo6 # Build all executables


exo1: $(OBJ1)  
	$(CC) $(CFLAGS) -o exo1 $(OBJ1)  

exo1.o: exo1.cpp
	$(CC) $(CFLAGS) -c exo1.cpp -o exo1.o


exo2: $(OBJ2)
	$(CC) $(CFLAGS) -o exo2 $(OBJ2)   

exo2.o: exo2.cpp
	$(CC) $(CFLAGS) -c exo2.cpp -o exo2.o


exo3: $(OBJ3)
	$(CC) $(CFLAGS) -o exo3 $(OBJ3)   

exo3.o: exo3.cpp
	$(CC) $(CFLAGS) -c exo3.cpp -o exo3.o


exo4: $(OBJ4)
	$(CC) $(CFLAGS) -o exo4 $(OBJ4)   

exo4.o: exo4.cpp
	$(CC) $(CFLAGS) -c exo4.cpp -o exo4.o


exo5: $(OBJ5)
	$(CC) $(CFLAGS) -o exo5 $(OBJ5)   

exo5.o: exo5.cpp
	$(CC) $(CFLAGS) -c exo5.cpp -o exo5.o


exo6: $(OBJ6)
	$(CC) $(CFLAGS) -o exo6 $(OBJ6)   

exo6.o: exo6.cpp
	$(CC) $(CFLAGS) -c exo6.cpp -o exo6.o

clean: 
	rm -f exo1 exo2 exo3 exo4 exo5 exo6 $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4) $(OBJ5) $(OBJ6)
# Sur Windows
#	del /F /Q exo1.exe exo2.exe exo3.exe exo4.exe exo5.exe exo6.exe *.o 2> NUL


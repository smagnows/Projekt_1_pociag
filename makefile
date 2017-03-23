CC = g++ -Wall -std=c++11 -g

all: main.o mein.o klasy.o
	$(CC) main.o mein.o klasy.o -o jestemPolakiem

main.o: main.cpp 
	$(CC) main.cpp -c -o main.o

mein.o: mein.cpp mein.h
	$(CC) mein.cpp -c -o mein.o

klasy.o: klasy.cpp klasy.h
	$(CC) klasy.cpp -c -o klasy.o

clean:
	rm -f *.o jestemPolakiem

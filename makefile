CC = g++ -Wall -std=c++11 -g

all: main.o mein.o
	$(CC) main.o mein.o -o jestemPolakiem

main.o: main.cpp 
	$(CC) main.cpp -c -o main.o

mein.o: mein.cpp mein.h
	$(CC) mein.cpp -c -o mein.o

#funkcje.o: funkcje.cpp overloads.h
#	$(CC) funkcje.cpp -c -o funkcje.o

clean:
	rm -f *.o jestemPolakiem

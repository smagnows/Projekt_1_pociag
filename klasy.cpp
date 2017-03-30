#include <iostream>
#include "klasy.h"
#include <cstring>
void wyciek1(){
        std::cout << "Zatem zajmiemy sie tak." << std::endl;
        struct liczby {
                int *liczba;
                struct liczby *next;
        };
        //typedef struct liczby liczby;
        struct liczby *pierwszy, *aktualny;
        pierwszy = new struct liczby;
        pierwszy->next=NULL;
        aktualny=pierwszy;
        int *l = new int;
        /*for(int i=0; i<10000; i++) {
		for (int j=0; j<9999; j++){
                aktualny = new struct liczby;
                *l = i;
                aktualny->liczba=new int;
                aktualny->liczba = l;
                aktualny->next=new liczby;
                aktualny=aktualny->next;
		std::cout<<"j= " << j << "\ni=" << i << "\n";
	}*/
        }


}

int dodajPasazera(struct pasazer *po, struct pasazer *next){
	std::string imie, nazwisko;
	puts("Podaj imie pasazera:");
	std::cin >> imie;
	puts("Podaj nazwisko pasazera");
	std::cin >> nazwisko;
	//strcpy (imie, temp->imie);
	//strcpy (nazwisko, temp->nazwisko);
	next->imie = imie;
	next->nazwisko=nazwisko;
	next->poprz = po;
	next->nast = NULL;
	po->nast = next;
	return 0;
}//dodajPasazera()
int wypiszPasazerow(struct pasazer *pierwszy)
{
	struct pasazer *temp = pierwszy;
	int i=1;
	while(temp!=NULL)
	{
		std::cout << i << ".\t" << temp->imie << " " << temp->nazwisko << '\n';
		temp = temp->nast;
		i++;
	}
	return i;


}//wypiszPasazerow()
int obslugaPasazerow(void){
	struct pasazer *pierwszy = new(struct pasazer), *ostatni;
	//strcpy("Jan", pierwszy->imie);
	//strcpy("Kowalski", pierwszy->nazwisko);
	pierwszy->imie = "Jan";
	pierwszy->nazwisko = "Kowalski";
	pierwszy->poprz=NULL;
	pierwszy->nast=NULL;
	ostatni=pierwszy;
	int wybor;
	while(1) {
		puts("Menu");
		puts("1. Dodaj pasazera");
		puts("2. Wypisz pasazerow");
		puts("0. Zakoncz");
		std::cin >> wybor;
		switch (wybor)
		{
			case 0: return -1;
			break;
			case 1: {
				struct pasazer *nowy = new(struct pasazer);
				dodajPasazera(ostatni,nowy);
				ostatni = nowy;
			}
			break;
			case 2: wypiszPasazerow(pierwszy);
			break;
			default: wyciek1();
			break;
		}//switch 
	}//while
	return 0;

}//obslugaPasazerow()


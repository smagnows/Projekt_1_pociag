#include <iostream>
#include <fstream>
#include "mein.h"
//#include "klasy.h"

//using namespace std;
int obslugaPasazerow(void);
void welcome(void){
	puts("Witamy w pociagu Alstom Pendolino!\n");
}
void wypiszMenu() {
	std::ifstream menu;
	menu.open("menu.txt");
	std::string napis;
	while (!menu.eof()) {
		std::getline(menu, napis);
		std::cout << napis << std::endl;
	}
}
void wstepPasazerow(void){
	obslugaPasazerow();

}
int dzialaj(void){
	jedziePociag* muj = new jedziePociag;
	int opcja;
	puts("Pantograf podniesiony");
	while(1) {
		puts("\n");
		wypiszMenu();
		std::cin >> opcja;
		puts("STAN: \t");
		switch (opcja){
			case -1: {
				if(muj->czyDziala()==0) return 0;
				else
				{
					puts("Najpierw wylacz pociag!!");
				}
			}
			break;
			case 0: muj->Wylacz();
			break;
			case 1: muj->niechDziala();
			break;
			case 2: muj->Jedz();
			break;
			case 3: muj->Stuj();
			break;
			case 4: wstepPasazerow();
			break;
		}
	//opcja=(int)NULL;

	}
	

	return 0;
}

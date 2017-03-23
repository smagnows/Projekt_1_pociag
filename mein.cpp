#include <iostream>
#include <fstream>
#include "mein.h"

//using namespace std;

void welcome(void){
	puts("Witamy w pociagu Alstom Pendolino!\n");
}
/*void wypiszMenu() {
	ifstream menu;
	menu.open("menu.txt");
	string napis;
	while (!menu.eof()) {
		getline(menu, napis);
		cout << napis << endl;
	}
}*/
int dzialaj(void){
	jedziePociag* muj = new jedziePociag;
	int opcja;
	puts("Pantograf podniesiony");
	while(1) {
//		wypiszMenu();
		std::cin >> opcja;
		switch (opcja){
			case 0: muj->Wylacz();
			break;
			case 1: muj->niechDziala();
			break;
			case 2: muj->Jedz();
			break;
			case 3: muj->Stuj();
			break;
		}
	opcja=NULL;

	}
	

	return 0;
}

#ifndef KLASY_H_
#define KLASY_H_
int dodajPasazera(void);

struct pasazer {
	std::string imie, nazwisko;
	struct pasazer *poprz, *nast;
};
enum model {pendolino, pesa, inny};
//A CZEMU TO BEZ DZIEDZICZENIA?? :'( :'(
//I BEZ STRUCTÓW JEDYNIE ZAMIAST KLAS? :'( :'( :'(

class pociag {
private:
	//enum model {pendolino, pesa};
	int iloscMiejsc;
	
public:
	pociag(model typ)
	{
		if(typ==pendolino) iloscMiejsc=3;
		else if(typ==pesa) iloscMiejsc=4;
	}
};//pociag

class pasarzer{
private:
	string imie, nazwisko;

public:
	pasarzer(){
		std::cout << "Wprowadz imie i nazwisko po spacji pana pasazera\n";
		std::cin >> imie >> nazwisko;
		//no i tu wieccej kodu do wstawienia;
		//ojej, 
	

	}




#endif

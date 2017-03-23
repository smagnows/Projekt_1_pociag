#ifndef KLASY_H_
#define KLASY_H_
int dodajPasazera(void);

struct pasazer {
	std::string imie, nazwisko;
	struct pasazer *poprz, *nast;
};




#endif

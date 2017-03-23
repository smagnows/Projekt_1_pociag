#ifndef MEIN_H_
#define MEIN_H_
void welcome(void);
int dzialaj(void);

class jedziePociag{
	enum Stan {stoi,jedzie};
	Stan pociag=stoi;
	int dziala=0;
	public:
	jedziePociag() {dziala=1;}
	//~jedziePociag() { dziala=0;}
	void niechDziala() { if(!dziala)dziala=1; }
	void Jedz(){
		if(!dziala) return;
		else {
			if(pociag==stoi) {
				puts("Pociag jedzie");
				pociag=jedzie;
			}
			else puts("Juz jedzie");
		}
	}
	void Stuj(){
		if(!dziala) return;
		else {
			if(pociag==jedzie) {
				puts("Pociag stoi");
				pociag=stoi;
			}
			else puts("juz stoi");
		}
	}
	void Wylacz() {~jedziePociag(); }

};

#endif

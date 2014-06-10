#ifndef UK�AD_H
#define UK�AD_H
#include"Figura.h"
#include"Prostok�t.h"
#include"Kwadrat.h"
#include"Trapez.h"
#include"Tr�jk�t.h"
#include"Ko�o.h"


class Uk�ad
{
public:
	Uk�ad()
	{
		id=0;
	}
	friend class Prostok�t;
	friend class Trapez;
	friend class Kwadrat;
	friend class Tr�jk�tR�wnoboczny;
	
	void Dodaj_Tr�jk�t(float,float,float,float);
	void Dodaj_Prostok�t(float arg1,float arg2,float arg3,float arg4);
	void Dodaj_Kwadrat(float arg1,float arg2,float arg3);
	void Dodaj_Trapez(float arg1,float arg2,float arg3,float arg4,float arg5);
	void Dodaj_Ko�o(float arg1,float arg2,float arg3);
	void Increase_ID();
	int Get_ID();
	void Wypisz();	
	void Wypisz_wszystko();
	void Wektor(int,int);
	void Obr��(float);
	char Flag(int);
	void wypiszID(int pozycja);
	void Modifikuj_Wybrany();
	void Szukaj_po_fladze();
	void Wy�wietl_wybrany();
	void dodawanie(int, int);
	void odejmowanie(int,int);
	bool por�wnaj(int,int);
	bool Check(int,int,Uk�ad);
	bool por�wnajMniejszy(int i,int j);
	bool por�wnajWi�kszy(int i,int j);
	int Tempi,Tempj;
private:
	Figura *tablica[100];
	int id;
 



};




#endif
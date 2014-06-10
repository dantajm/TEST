#ifndef UK£AD_H
#define UK£AD_H
#include"Figura.h"
#include"Prostok¹t.h"
#include"Kwadrat.h"
#include"Trapez.h"
#include"Trójk¹t.h"
#include"Ko³o.h"


class Uk³ad
{
public:
	Uk³ad()
	{
		id=0;
	}
	friend class Prostok¹t;
	friend class Trapez;
	friend class Kwadrat;
	friend class Trójk¹tRównoboczny;
	
	void Dodaj_Trójk¹t(float,float,float,float);
	void Dodaj_Prostok¹t(float arg1,float arg2,float arg3,float arg4);
	void Dodaj_Kwadrat(float arg1,float arg2,float arg3);
	void Dodaj_Trapez(float arg1,float arg2,float arg3,float arg4,float arg5);
	void Dodaj_Ko³o(float arg1,float arg2,float arg3);
	void Increase_ID();
	int Get_ID();
	void Wypisz();	
	void Wypisz_wszystko();
	void Wektor(int,int);
	void Obróæ(float);
	char Flag(int);
	void wypiszID(int pozycja);
	void Modifikuj_Wybrany();
	void Szukaj_po_fladze();
	void Wyœwietl_wybrany();
	void dodawanie(int, int);
	void odejmowanie(int,int);
	bool porównaj(int,int);
	bool Check(int,int,Uk³ad);
	bool porównajMniejszy(int i,int j);
	bool porównajWiêkszy(int i,int j);
	int Tempi,Tempj;
private:
	Figura *tablica[100];
	int id;
 



};




#endif
#ifndef TRÓJK¥T_H
#define TRÓJK¥T_H
#include"Figura.h"

class Trójk¹tRównoboczny:public Figura
{
public:
	char Get_Flag();
	Trójk¹tRównoboczny(float,float,float,float);
	void Wypisz();
	void Przesuñ_o_wektor(int,int);
	void Obrót(float);
	Figura*operator-(Figura&wsk);
	Figura*operator+(Figura&wsk);
	Trójk¹tRównoboczny operator+(Trójk¹tRównoboczny &wsk);
	Trójk¹tRównoboczny operator-(Trójk¹tRównoboczny &wsk);
	float Pole();
	float Obwód();
	bool operator==(Figura &wsk);
	bool operator >(Figura &wsk);
	bool operator <(Figura &wsk);
	bool operator <(Trójk¹tRównoboczny &wsk);
	bool  operator==(Trójk¹tRównoboczny &wsk);	
	bool operator >(Trójk¹tRównoboczny &wsk);
private:
	float x1,x2,x3,y1,y2,y3;
	float h;
	float a;
	char flag;
};





#endif
#ifndef TR�JK�T_H
#define TR�JK�T_H
#include"Figura.h"

class Tr�jk�tR�wnoboczny:public Figura
{
public:
	char Get_Flag();
	Tr�jk�tR�wnoboczny(float,float,float,float);
	void Wypisz();
	void Przesu�_o_wektor(int,int);
	void Obr�t(float);
	Figura*operator-(Figura&wsk);
	Figura*operator+(Figura&wsk);
	Tr�jk�tR�wnoboczny operator+(Tr�jk�tR�wnoboczny &wsk);
	Tr�jk�tR�wnoboczny operator-(Tr�jk�tR�wnoboczny &wsk);
	float Pole();
	float Obw�d();
	bool operator==(Figura &wsk);
	bool operator >(Figura &wsk);
	bool operator <(Figura &wsk);
	bool operator <(Tr�jk�tR�wnoboczny &wsk);
	bool  operator==(Tr�jk�tR�wnoboczny &wsk);	
	bool operator >(Tr�jk�tR�wnoboczny &wsk);
private:
	float x1,x2,x3,y1,y2,y3;
	float h;
	float a;
	char flag;
};





#endif
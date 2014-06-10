#ifndef FIGURA_H
#define FIGURA_H
#include"Exception.h"
#include<cmath>

class Figura
{

public:
	
	virtual float Pole()=0;
	virtual float Obw�d()=0;
	virtual void Przesu�_o_wektor(int X,int Y)=0;
	virtual void Obr�t(float radnian)=0;
	virtual void Wypisz()=0;
	virtual char Get_Flag()=0;
	virtual Figura* operator+(Figura &wsk)=0;
	virtual Figura* operator-(Figura &wsk)=0;
	virtual bool operator ==(Figura &wsk)=0;
	virtual bool operator >(Figura &wsk)=0;
	
};












#endif
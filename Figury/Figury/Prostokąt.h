#ifndef PROSTOK�T_H
#define PROSTOK�T_H
#include"Figura.h"
class Prostok�t:public Figura
{

public:
	Prostok�t(float x,float y,float a,float b);	
	Prostok�t(){}
    float Pole();
	float Obw�d();
	 void Przesu�_o_wektor(int X,int Y);
	 void Obr�t(float radian);
	void Wypisz();
	char Get_Flag();
	Figura* operator+(Figura&wsk);
	Prostok�t operator+(Prostok�t &wsk);
	Prostok�t operator-(Prostok�t &wsk);
	Figura* operator-(Figura &wsk);
	bool operator==(Figura &wsk);
	bool operator >(Figura &wsk);
	bool operator <(Figura &wsk);
	bool operator <(Prostok�t &wsk);
	bool  operator==(Prostok�t &wsk);	
	bool operator >(Prostok�t &wsk);
	 float readA();
	 float readB();
	 int xi,xj;


protected:
	char flag;
	float x1,x2,x3,x4;
	float y1,y2,y3,y4;
	float bokA,bokB;	
	
};















#endif
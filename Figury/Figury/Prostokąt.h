#ifndef PROSTOK¥T_H
#define PROSTOK¥T_H
#include"Figura.h"
class Prostok¹t:public Figura
{

public:
	Prostok¹t(float x,float y,float a,float b);	
	Prostok¹t(){}
    float Pole();
	float Obwód();
	 void Przesuñ_o_wektor(int X,int Y);
	 void Obrót(float radian);
	void Wypisz();
	char Get_Flag();
	Figura* operator+(Figura&wsk);
	Prostok¹t operator+(Prostok¹t &wsk);
	Prostok¹t operator-(Prostok¹t &wsk);
	Figura* operator-(Figura &wsk);
	bool operator==(Figura &wsk);
	bool operator >(Figura &wsk);
	bool operator <(Figura &wsk);
	bool operator <(Prostok¹t &wsk);
	bool  operator==(Prostok¹t &wsk);	
	bool operator >(Prostok¹t &wsk);
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
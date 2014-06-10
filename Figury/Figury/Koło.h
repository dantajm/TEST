#ifndef KO�O_H
#define KO�O_H
#include"Figura.h"
#define PI 3.14159265
class Ko�o:public Figura
{
public:
	Ko�o(float,float,float);
	void Przesu�_o_wektor(int X,int Y);
	void Obr�t(float angle);
	float Pole();
	float Obw�d();
	void Wypisz();
	char Get_Flag();
	float Get_R();
	Figura* operator+(Figura&wsk);
	Ko�o operator+(Ko�o &wsk);
	Ko�o operator-(Ko�o &wsk);
	Figura* operator-(Figura &wsk);
	bool operator==(Figura &wsk);
	bool operator >(Figura &wsk);
	bool operator <(Figura &wsk);
	bool operator <(Ko�o &wsk);
	bool  operator==(Ko�o &wsk);	
	bool operator >(Ko�o &wsk);
private:
	char flag;
	float x1,x2,x3,x4,x5;
	float y1,y2,y3,y4,y5;
	float R;
};



#endif
#ifndef KOΜ_H
#define KOΜ_H
#include"Figura.h"
#define PI 3.14159265
class Ko這:public Figura
{
public:
	Ko這(float,float,float);
	void Przesu鎕o_wektor(int X,int Y);
	void Obr鏒(float angle);
	float Pole();
	float Obw鏚();
	void Wypisz();
	char Get_Flag();
	float Get_R();
	Figura* operator+(Figura&wsk);
	Ko這 operator+(Ko這 &wsk);
	Ko這 operator-(Ko這 &wsk);
	Figura* operator-(Figura &wsk);
	bool operator==(Figura &wsk);
	bool operator >(Figura &wsk);
	bool operator <(Figura &wsk);
	bool operator <(Ko這 &wsk);
	bool  operator==(Ko這 &wsk);	
	bool operator >(Ko這 &wsk);
private:
	char flag;
	float x1,x2,x3,x4,x5;
	float y1,y2,y3,y4,y5;
	float R;
};



#endif
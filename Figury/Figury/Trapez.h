#ifndef TRAPEZ_H
#define TRAPEZ_H
#include"Prostok¹t.h"

class Trapez : public Prostok¹t
{


public:
	Trapez(float x,float y,float a,float b,float h);	
	float Pole();
	float Obwód();
	char Get_Flag();
	Figura* operator+(Figura&wsk);
	Trapez operator+(Trapez &wsk);
	Figura* operator-(Figura &wsk);
	Trapez operator-(Trapez &wsk);
	bool operator==(Figura &wsk);
	bool operator >(Figura &wsk);
	bool operator <(Figura &wsk);
	bool operator <(Trapez &wsk);
	bool  operator==(Trapez &wsk);	
	bool operator >(Trapez &wsk);
	float h();
private:

	char flag;
	float height;


};





#endif
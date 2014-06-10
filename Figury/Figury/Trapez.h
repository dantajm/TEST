#ifndef TRAPEZ_H
#define TRAPEZ_H
#include"Prostok�t.h"

class Trapez : public Prostok�t
{


public:
	Trapez(float x,float y,float a,float b,float h);	
	float Pole();
	float Obw�d();
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
#ifndef KWADRAT_H
#define KWADRAT_H
#include"Prostok¹t.h"



class Kwadrat : public Prostok¹t
{

public:
	Kwadrat(float x,float y,float a);
	char Get_Flag();
	Figura* operator+(Figura&wsk);
	Kwadrat operator+(Kwadrat &wsk);
	Figura* operator-(Figura &wsk);
	Kwadrat operator-(Kwadrat &wsk);
	bool  operator==(Figura &wsk);	
	bool operator >(Figura &wsk);
	bool operator <(Figura &wsk);
	bool operator <(Kwadrat &wsk);
	bool  operator==(Kwadrat &wsk);	
	bool operator >(Kwadrat &wsk);
	float BOKA();
private:
char flag;



};




#endif
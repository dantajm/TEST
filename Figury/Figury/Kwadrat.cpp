#include"Kwadrat.h"
#include"Prostok¹t.h"
#include<iostream>
using namespace std;




Kwadrat::Kwadrat(float x,float y,float a)
{
	flag='K';
	bokA=a;
	bokB=a;
	x1=x;
	x2=x+a;
	x3=x+a;
	x4=x;
	y1=y;
	y2=y;
	y3=y+a;
	y4=y+a;    
}
float Kwadrat::BOKA()
{
	return bokA;
}
char Kwadrat::Get_Flag()
{
	return flag;
}
Figura* Kwadrat::operator-(Figura&wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Figura *nowy;
	Kwadrat *wsk1;
	wsk1=reinterpret_cast<Kwadrat*>(&wsk);
	nowy=new Kwadrat(x1,y1,bokA-wsk1->BOKA());
	return nowy;	
}
Figura* Kwadrat::operator+(Figura&wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Figura *nowy;	
	Kwadrat *wsk1;
	wsk1=reinterpret_cast<Kwadrat*>(&wsk);
	nowy=new Kwadrat(x1,y1,bokA+wsk1->BOKA());
	return nowy;	
}
Kwadrat Kwadrat::operator+(Kwadrat &wsk)
{
	Kwadrat *nowy;
	nowy=new Kwadrat(wsk.x1+x1,wsk.y1+y1,wsk.bokA+bokA);
	return *nowy;

}
Kwadrat Kwadrat::operator-(Kwadrat &wsk)
{
	Kwadrat *nowy;
	nowy=new Kwadrat(x1-wsk.x1,y1-wsk.y1,bokA-wsk.bokA);
	return *nowy;


}
bool Kwadrat::operator==(Figura &wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Kwadrat *wsk1;
	wsk1=reinterpret_cast<Kwadrat*>(&wsk);
	if(this->bokA==wsk1->bokA)
	{
		delete wsk1;
		return true;
	}
	else
	{
		delete wsk1;
		return false;
	}
}

bool Kwadrat::operator >(Figura &wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Kwadrat *wsk1;
	wsk1=reinterpret_cast<Kwadrat*>(&wsk);
	if(this->bokA>wsk1->bokA&&this->Pole()>wsk1->Pole())
	{
		delete wsk1;
		return true;
	}
	else
	{
		delete wsk1;
		return false;
	}
}
bool Kwadrat::operator <(Figura &wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Kwadrat *wsk1;
	wsk1=reinterpret_cast<Kwadrat*>(&wsk);
	if(this->bokA<wsk1->bokA&&this->Pole()<wsk1->Pole())
	{
		delete wsk1;
		return true;
	}
	else
	{
		delete wsk1;
		return false;
	}
}
bool Kwadrat::operator==(Kwadrat &wsk)
{
	
	
	if(this->bokA==wsk.bokA)
	{
		
		return true;
	}
	else
	{
		
		return false;
	}
}

bool Kwadrat::operator >(Kwadrat &wsk)
{
	
	
	if(this->bokA>wsk.bokA&&this->Pole()>wsk.Pole())
	{
		
		return true;
	}
	else
	{
		
		return false;
	}
}
bool Kwadrat::operator <(Kwadrat &wsk)
{
	
	
	
	if(this->bokA<wsk.bokA&&this->Pole()<wsk.Pole())
	{
		
		return true;
	}
	else
	{
		
		return false;
	}
}
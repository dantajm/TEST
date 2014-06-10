#include"Trapez.h"
#include<iostream>
using namespace std;


Trapez::Trapez(float x,float y, float a,float b,float h)
{
	flag='T';
	height=h;
	bokA=a;
	bokB=b;
	x1=x;
    y1=y;
	x2=x;
	y2=y+h;
	x3=x+a;
	y3=y+h;
	x4=x+b;
	y4=y;
}
float Trapez::Pole()
{
	return ((bokA+bokB)/2)*height;
}
float Trapez::Obwód()
{
	float temp,temp2;
	temp=bokA+bokB+height;
	temp2=((bokA-bokB)*(bokA+bokB))+(height*height);
	return temp+sqrt(temp2);
}
char Trapez::Get_Flag()
{
	return flag;

}
float Trapez::h()
{
	return height;
}

Figura* Trapez::operator+(Figura&wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Figura *nowy;
	Trapez *wsk1;
	wsk1=reinterpret_cast<Trapez*>(&wsk);
	nowy=new Trapez(x1,y1,bokA+wsk1->readA(),bokB+wsk1->readB(),wsk1->h()+height);
	return nowy;

}
Figura* Trapez::operator-(Figura&wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Figura *nowy;
	Trapez *wsk1;
	wsk1=reinterpret_cast<Trapez*>(&wsk);
	nowy = new Trapez(x1, y1, abs(bokA - wsk1->readA()), abs(bokB - wsk1->readB()), abs(wsk1->h() - height));
	return nowy;	
}
Trapez Trapez::operator-(Trapez &wsk)
{

	Trapez *nowy;	
	nowy = new Trapez(x1, y1, abs(bokA - wsk.bokA), abs(bokB - wsk.bokB), abs(height - wsk.h()));
	return *nowy;
}
Trapez Trapez::operator+(Trapez &wsk)
{
	Trapez *nowy;
	nowy=new Trapez(wsk.x1+x1,wsk.y1+y1,wsk.bokA+bokA,wsk.bokB+bokB,wsk.height+height);
	return *nowy;
}
bool Trapez::operator==(Figura &wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Trapez *wsk1;
	wsk1=reinterpret_cast<Trapez*>(&wsk);
	if(this->bokA==wsk1->bokA&&this->bokB==wsk1->bokB&&this->height==wsk1->height)
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
bool Trapez::operator >(Figura &wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Trapez *wsk1;
	wsk1=reinterpret_cast<Trapez*>(&wsk);
	if(this->bokA>wsk1->bokA&&this->bokB>wsk1->bokB&&this->Pole()>wsk1->Pole()&&this->height>wsk1->height)
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
bool Trapez::operator <(Figura &wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Trapez *wsk1;
	wsk1=reinterpret_cast<Trapez*>(&wsk);
	if(this->bokA<wsk1->bokA&&this->bokB<wsk1->bokB&&this->Pole()<wsk1->Pole()&&this->height<wsk1->height)
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
bool Trapez::operator==(Trapez &wsk)
{
	
	
	if(this->bokA==wsk.bokA&&this->bokB==wsk.bokB&&this->height==wsk.height)
	{
		
		return true;
	}
	else
	{
		
		return false;
	}
}
bool Trapez::operator >(Trapez &wsk)
{
	
	
	if(this->bokA>wsk.bokA&&this->bokB>wsk.bokB&&this->Pole()>wsk.Pole()&&this->height>wsk.height)
	{
		
		return true;
	}
	else
	{
		
		return false;
	}
}
bool Trapez::operator <(Trapez &wsk)
{
	
	
	if(this->bokA<wsk.bokA&&this->bokB<wsk.bokB&&this->Pole()<wsk.Pole()&&this->height<wsk.height)
	{
		
		return true;
	}
	else
	{
		
		return false;
	}
}
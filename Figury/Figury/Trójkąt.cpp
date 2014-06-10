#include"Tr�jk�t.h"
#include<iostream>
using namespace std;


void Tr�jk�tR�wnoboczny::Wypisz()
{
	cout << "W1<" << x1 << "," << y1 << ">; ";
	cout << "W2<" << x2 << "," << y2 << ">; ";
	cout << "W3<" << x3 << "," << y3 << ">; ";
	cout<<"Pole="<<Pole();
	cout << "; Obwod=" << Obw�d() << endl;

}
void Tr�jk�tR�wnoboczny::Przesu�_o_wektor(int X,int Y)
{
	
	x1+=X;
	y1+=Y;
	x2+=X;
	x3+=X;
	y2+=Y;
	y3+=Y;
	
}
void Tr�jk�tR�wnoboczny::Obr�t(float radian)
{
	x1 = x1 * cos(radian) - y1 * sin(radian);
	y1 = x1 * sin(radian) + y1 * cos(radian);

	x2 = x2 * cos(radian) - y2  * sin(radian); //x2
	y2 = x2 * sin(radian) + y2  * cos(radian); // y2

	x3 = x3  * cos(radian) - y3  * sin(radian); // x3
	y3 = x3  * sin(radian) + y3  * cos(radian); // y3

	

	
}
Tr�jk�tR�wnoboczny::Tr�jk�tR�wnoboczny(float x,float y,float a,float h)
{
	this->a=a;
	x1=x;
	y1=y;
	x2=x+a;
	y2=y;
	x3=(1/2*x);
	y3=y+h;
	flag='R';
	this->h=h;
	
}
Figura* Tr�jk�tR�wnoboczny::operator-(Figura&wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Figura *nowy;
	Tr�jk�tR�wnoboczny *wsk1;
	wsk1=reinterpret_cast<Tr�jk�tR�wnoboczny*>(&wsk);
	nowy = new Tr�jk�tR�wnoboczny(x1 - wsk1->x1, y1 - wsk1->y1, abs(a - wsk1->a), abs(h - wsk1->h));
	return nowy;
}
Figura* Tr�jk�tR�wnoboczny::operator+(Figura&wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Figura *nowy;
	Tr�jk�tR�wnoboczny *wsk1;
	wsk1=reinterpret_cast<Tr�jk�tR�wnoboczny*>(&wsk);
	nowy=new Tr�jk�tR�wnoboczny(x1+wsk1->x1,y1+wsk1->y1,a+wsk1->a,h+wsk1->h);
	return nowy;
}
Tr�jk�tR�wnoboczny Tr�jk�tR�wnoboczny::operator+(Tr�jk�tR�wnoboczny &wsk)
{
	Tr�jk�tR�wnoboczny *nowy;
	nowy=new Tr�jk�tR�wnoboczny(x1+wsk.x1,y1+wsk.y1,a+wsk.a,h+wsk.h);
	return *nowy;
}
Tr�jk�tR�wnoboczny Tr�jk�tR�wnoboczny::operator-(Tr�jk�tR�wnoboczny &wsk)
{
	Tr�jk�tR�wnoboczny *nowy;
	nowy = new Tr�jk�tR�wnoboczny(x1 - wsk.x1, y1 - wsk.y1, abs(a - wsk.a), abs(h - wsk.h));
	return *nowy;
}
float Tr�jk�tR�wnoboczny::Pole()
{
	return ((a*a)*sqrt(3))/4;
}
float Tr�jk�tR�wnoboczny::Obw�d()
{
	return (a*sqrt(3))/2;
}
char Tr�jk�tR�wnoboczny::Get_Flag()
{
	return flag;
}
bool Tr�jk�tR�wnoboczny ::operator==(Figura &wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Tr�jk�tR�wnoboczny *wsk1;
	wsk1=reinterpret_cast<Tr�jk�tR�wnoboczny*>(&wsk);
	if(this->a==wsk1->a&&this->h==wsk1->h&&this->Pole()==wsk1->Pole())
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
bool Tr�jk�tR�wnoboczny::operator >(Figura &wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Tr�jk�tR�wnoboczny *wsk1;
	wsk1=reinterpret_cast<Tr�jk�tR�wnoboczny*>(&wsk);
	if(this->a>wsk1->a&&this->h>wsk1->h&&this->Pole()>wsk1->Pole())
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
bool Tr�jk�tR�wnoboczny::operator <(Figura &wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Tr�jk�tR�wnoboczny *wsk1;
	wsk1=reinterpret_cast<Tr�jk�tR�wnoboczny*>(&wsk);
	if(this->a<wsk1->a&&this->h<wsk1->h&&this->Pole()<wsk1->Pole())
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

bool Tr�jk�tR�wnoboczny ::operator==(Tr�jk�tR�wnoboczny &wsk)
{
	

	if(this->a==wsk.a&&this->h==wsk.h&&this->Pole()==wsk.Pole())
	{
		
		return true;
	}
	else
	{
		
		return false;
	}
}
bool Tr�jk�tR�wnoboczny::operator >(Tr�jk�tR�wnoboczny &wsk)
{
	
	
	if(this->a>wsk.a&&this->h>wsk.h&&this->Pole()>wsk.Pole())
	{
		
		return true;
	}
	else
	{
		
		return false;
	}
}
bool Tr�jk�tR�wnoboczny::operator <(Tr�jk�tR�wnoboczny &wsk)
{
	
	
	if(this->a<wsk.a&&this->h<wsk.h&&this->Pole()<wsk.Pole())
	{
		
		return true;
	}
	else
	{
		
		return false;
	}
}
#include<iostream>
#include"Prostok¹t.h"
using namespace std;


Prostok¹t::Prostok¹t(float x,float y,float a,float b)
{
	flag='P';
	x1=x;
	y1=y;
	x2=x+a;
	y2=y;
	x3=x+a;
	y3=y+b;
	x4=x;
	y4=y+b;
	bokA=a;
	bokB=b;
}
float Prostok¹t::Obwód()
{
	return (2*bokA + 2*bokB);
}
float Prostok¹t::Pole()
{
	return bokA*bokB;
}
void Prostok¹t::Przesuñ_o_wektor(int X,int Y)
{
	x1+=X;
	y1+=Y;
	x2+=X;
	x3+=X;
	x4+=X;
	y2+=Y;
	y3+=Y;
	y4+=Y;
}
void Prostok¹t::Obrót(float radian)
{
	x1 = x1 * cos(radian) - y1 * sin(radian);
	y1 = x1 * sin(radian) + y1 * cos(radian);

	x2 = x2 * cos(radian) - y2  * sin(radian); //x2
	y2 = x2 * sin(radian) + y2  * cos(radian); // y2

	x3 = x3  * cos(radian) - y3  * sin(radian); // x3
	y3 = x3  * sin(radian) + y3  * cos(radian); // y3

	x4 = x4  * cos(radian) - y4 * sin(radian); //x4
	y4 = x4  * sin(radian) + y4 * cos(radian); //y4

	
}
void Prostok¹t::Wypisz()
{
	cout<<"W1<"<<x1<<","<<y1<<">"<<endl;
	cout<<"W2<"<<x2<<","<<y2<<">"<<endl;
	cout<<"W3<"<<x3<<","<<y3<<">"<<endl;
	cout<<"W4<"<<x4<<","<<y4<<">"<<endl;
	cout<<"Pole="<<Pole()<<endl;
	cout<<"Obwód="<<Obwód()<<endl;



}
char Prostok¹t::Get_Flag()
{
	return flag;
}
Figura* Prostok¹t::operator+(Figura&wsk)
{
	Figura *nowy;
	Prostok¹t *wsk1;
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	wsk1=reinterpret_cast<Prostok¹t*>(&wsk);
	nowy=new Prostok¹t(x1,y1,bokA+wsk1->readA(),bokB+wsk1->readB());
	return nowy;

}


Prostok¹t Prostok¹t::operator+(Prostok¹t &wsk)
{
	
	Prostok¹t *nowy;
	nowy=new Prostok¹t(wsk.x1+x1,wsk.y1+y1,wsk.bokA+bokA,wsk.bokB+bokB);
	return *nowy;


}
Prostok¹t Prostok¹t::operator-(Prostok¹t &wsk)
{
	
	Prostok¹t *nowy;
	nowy=new Prostok¹t(x1-wsk.x1,y1-wsk.y1,bokA-wsk.bokA,bokB-wsk.bokB);
	return *nowy;


}
Figura*Prostok¹t::operator-(Figura&wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Figura *nowy;
	Prostok¹t *wsk1;
	wsk1=reinterpret_cast<Prostok¹t*>(&wsk);
	nowy=new Prostok¹t(x1,y1,bokA-wsk1->readA(),bokB-wsk1->readB());
	return nowy;
}
bool Prostok¹t::operator==(Figura &wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Prostok¹t *wsk1;
	wsk1=reinterpret_cast<Prostok¹t*>(&wsk);
	if(this->bokA==wsk1->bokA&&this->bokB==wsk1->bokB)
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
bool Prostok¹t::operator >(Figura &wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Prostok¹t *wsk1;
	wsk1=reinterpret_cast<Prostok¹t*>(&wsk);
	if(this->bokA>wsk1->bokA&&this->bokB>wsk1->bokB&&this->Pole()>wsk1->Pole())
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


bool Prostok¹t::operator <(Figura &wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Prostok¹t *wsk1;
	wsk1=reinterpret_cast<Prostok¹t*>(&wsk);
	if(this->bokA<wsk1->bokA&&this->bokB<wsk1->bokB&&this->Pole()<wsk1->Pole())
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
float Prostok¹t::readA()
{
	return bokA;
}
float Prostok¹t::readB()
{
	return bokB;
}
bool Prostok¹t::operator==(Prostok¹t &wsk)
{
	
	
	if(this->bokA==wsk.bokA&&this->bokB==wsk.bokB)
	{
		
		return true;
	}
	else
	{
		
		return false;
	}
}
bool Prostok¹t::operator >(Prostok¹t &wsk)
{
	
	
	if(this->bokA>wsk.bokA&&this->bokB>wsk.bokB&&this->Pole()>wsk.Pole())
	{
		
		return true;
	}
	else
	{
		
		return false;
	}
}
bool Prostok¹t::operator <(Prostok¹t &wsk)
{
	
	
	if(this->bokA<wsk.bokA&&this->bokB<wsk.bokB&&this->Pole()<wsk.Pole())
	{
	
		return true;
	}
	else
	{
		
		return false;
	}
}
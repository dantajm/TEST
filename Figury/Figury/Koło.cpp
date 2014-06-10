#include"Ko³o.h"



Ko³o::Ko³o(float X,float Y,float promieñ)
{
	flag='C';
	x1=X;
	y1=Y;
	R=promieñ;
	x2=x1+R;
	y2=Y;
	x3=X;
	y3=Y+R;
	x4=X-R;
	y4=Y;
	x5=X;
	y5=Y-R;

}
void Ko³o::Przesuñ_o_wektor(int X,int Y)
{
	x1+=X;
	y1+=Y;
	x2+=X;
	x3+=X;
	x4+=X;
	y2+=Y;
	y3+=Y;
	y4+=Y;
	x5+=X;
	y5+=Y;
}
void Ko³o::Obrót(float radian)
{
	x1 = x1 * cos(radian) - y1 * sin(radian);
	y1 = x1 * sin(radian) + y1 * cos(radian);

	x2 = x2 * cos(radian) - y2  * sin(radian); //x2
	y2 = x2 * sin(radian) + y2  * cos(radian); // y2

	x3 = x3  * cos(radian) - y3  * sin(radian); // x3
	y3 = x3  * sin(radian) + y3  * cos(radian); // y3

	x4 = x4  * cos(radian) - y4 * sin(radian); //x4
	y4 = x4  * sin(radian) + y4 * cos(radian); //y4

	x5 = x5  * cos(radian) - y5 * sin(radian); //x4
	y5 = x5  * sin(radian) + y5 * cos(radian); //y4
}
float Ko³o::Pole()
{
	return PI*(R*R);
}
float Ko³o::Obwód()
{
	return 2*PI*R;
}
void Ko³o::Wypisz()
{
	cout<<"S<"<<x1<<","<<y1<<">"<<endl;
	cout<<"W2<"<<x2<<","<<y2<<">"<<endl;
	cout<<"W3<"<<x3<<","<<y3<<">"<<endl;
	cout<<"W4<"<<x4<<","<<y4<<">"<<endl;
	cout<<"W4<"<<x4<<","<<y4<<">"<<endl;
	cout<<"Pole="<<Pole()<<endl;
	cout<<"Obwód="<<Obwód()<<endl;
}
char Ko³o::Get_Flag()
{
	return flag;
}
float Ko³o::Get_R()
{
	return R;
}
Figura* Ko³o::operator+(Figura&wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Figura *nowy;
	Ko³o *wsk1;	
	wsk1=reinterpret_cast<Ko³o*>(&wsk);
	nowy=new Ko³o(x1,y1,R+wsk1->Get_R());
	return nowy;

}
Ko³o Ko³o::operator+(Ko³o &wsk)
{
	Ko³o *nowy;
	nowy=new Ko³o(x1,y1,R+wsk.Get_R());
	return *nowy;


}
Ko³o Ko³o::operator-(Ko³o &wsk)
{
	Ko³o *nowy;
	nowy=new Ko³o(x1,y1,R-wsk.Get_R());
	return *nowy;


}
Figura*Ko³o::operator-(Figura&wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Figura *nowy;
	Ko³o *wsk1;
	wsk1=reinterpret_cast<Ko³o*>(&wsk);
	nowy=new Ko³o(x1,y1,R-wsk1->Get_R());
	return nowy;
}
bool Ko³o::operator==(Figura &wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Ko³o *wsk1;
	wsk1=reinterpret_cast<Ko³o*>(&wsk);
	if(this->R==wsk1->R)
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
bool Ko³o::operator >(Figura &wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Ko³o *wsk1;
	wsk1=reinterpret_cast<Ko³o*>(&wsk);
	if(this->R>wsk1->Get_R())
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
bool Ko³o::operator <(Figura &wsk)
{
	if((Var.flag1!=Var.flag2)||((Var.i<0||Var.i>=100)||(Var.j<0||Var.j>=100)))
	{
		throw DiffrentFlags;
	}
	Ko³o *wsk1;
	wsk1=reinterpret_cast<Ko³o*>(&wsk);
	if(this->R<wsk1->Get_R())
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
bool Ko³o::operator==(Ko³o &wsk)
{
	
	
	if(this->R==wsk.R)
	{
		
		return true;
	}
	else
	{
		
		return false;
	}
}
bool Ko³o::operator >(Ko³o &wsk)
{
	
	
	if(this->R>wsk.R)
	{
		
		return true;
	}
	else
	{
		
		return false;
	}
}
bool Ko³o::operator <(Ko³o &wsk)
{
	
	
	if(this->R<wsk.R)
	{
	
		return true;
	}
	else
	{
		
		return false;
	}
}
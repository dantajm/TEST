#include"Uk�ad.h"
#include"Exception.h"
#include<iostream>
using namespace std;



void Uk�ad::Dodaj_Tr�jk�t(float arg1,float arg2,float arg3,float arg4)
{
	if(id<100&&id>=0)
	{
	tablica[id]=new Tr�jk�tR�wnoboczny(arg1,arg2,arg3,arg4);
	}
	else
	{
		throw Place;
	}
}
void Uk�ad::Dodaj_Prostok�t(float arg1,float arg2,float arg3,float arg4)
{
	if(id>=100&&id>=0)
	{
		throw Place;
		
	}
	tablica[id]=new Prostok�t(arg1,arg2,arg3,arg4);
}
void Uk�ad::Dodaj_Kwadrat(float arg1,float arg2,float arg3)
{
	if(id>=100&&id>=0)
	{
		throw Place;
		
	}
	tablica[id]=new Kwadrat(arg1,arg2,arg3);
}
void Uk�ad::Dodaj_Trapez(float arg1,float arg2,float arg3,float arg4,float arg5)
{
	if(id>=100&&id>=0)
	{
		throw Place;
		
	}
	tablica[id]=new Trapez(arg1,arg2,arg3,arg4,arg5);
}
void Uk�ad::Dodaj_Ko�o(float arg1,float arg2,float arg3)
{
	if(id>=100&&id>=0)
	{
		throw Place;
		
	}
	tablica[id]=new Ko�o(arg1,arg2,arg3);
}
void Uk�ad::Wektor(int X,int Y)
{
	if(tablica[id]==NULL)throw Nic;
	tablica[id]->Przesu�_o_wektor(X,Y);
}
void Uk�ad::Obr��(float radian)
{
	if(tablica[id]==NULL)throw Nic;
	tablica[id]->Obr�t(radian);
}
void Uk�ad::Wypisz()
{
	if(tablica[id]==NULL)throw Nic;
	tablica[id]->Wypisz();
}
void Uk�ad::Wypisz_wszystko()
{
	system("cls");

	for(int pozycja=0;pozycja<99;pozycja++)
	{
		
		if(tablica[pozycja]==NULL)
		{
			throw Fin;
			
		}
		if(tablica[pozycja]->Get_Flag()=='K')
		{
			wypiszID(pozycja);
			tablica[pozycja]->Wypisz();
		}
		if(tablica[pozycja]->Get_Flag()=='T')
		{
			wypiszID(pozycja);
			tablica[pozycja]->Wypisz();
		}
		if(tablica[pozycja]->Get_Flag()=='P')
		{
			wypiszID(pozycja);
			tablica[pozycja]->Wypisz();
		}
		if(tablica[pozycja]->Get_Flag()=='R')
		{
			wypiszID(pozycja);
			tablica[pozycja]->Wypisz();
		}
		if(tablica[pozycja]->Get_Flag()=='C')
		{
			wypiszID(pozycja);
			tablica[pozycja]->Wypisz();
		}
		if(tablica[pozycja]->Get_Flag() != 'P'&& tablica[pozycja]->Get_Flag() != 'K'&& tablica[pozycja]->Get_Flag() != 'T'&& tablica[pozycja]->Get_Flag() != 'R'&&tablica[pozycja]->Get_Flag() != 'C')
		{
			throw Fin;
			
		}
	}
}
void Uk�ad::wypiszID(int pozycja)
	 {
		 
	cout << "ID " << pozycja << "; ";
	if (tablica[pozycja]->Get_Flag() == 'K')cout << "TYP:KWADRAT; " ;
	if (tablica[pozycja]->Get_Flag() == 'P')cout << "TYP:PROSTOK�T; " ;
	if (tablica[pozycja]->Get_Flag() == 'T')cout << "TYP:TRAPEZ; " ;
	if (tablica[pozycja]->Get_Flag() == 'R')cout << "TYP:TROJKAT; " ;
	if (tablica[pozycja]->Get_Flag() == 'C')cout << "TYP:KOLO; " ;
	 }
void Uk�ad::Modifikuj_Wybrany()
 {
	 cout<<"Podaj ID Figury do modifikacji"<<endl;
	 int ID;
	 cin>>ID;
	 if(tablica[ID]==NULL)throw Nic;
	 while(1)
	 {
		 int param1;
		 bool ASK=false;
		 cout<<"Menu Modifikacji"<<endl;
		 cout<<"1.Przesun O Wektor"<<endl;
		 cout<<"2.Obruc"<<endl;
		 cout<<"3.Zakoncz"<<endl;
		 cin>>param1;
		 switch(param1)
		 {
		 case 1:
			 cout<<"Podaj Wektor"<<endl;
			 int A,B;
			 cin>>A;
		     cin>>B;
			 tablica[ID]->Przesu�_o_wektor(A,B);
			 break;
		 case 2:
			 cout<<"Podaj k�t"<<endl;
			 float angle;
			 cin>>angle;
			 tablica[ID]->Obr�t(angle);
			 break;
		 case 3:
			 ASK=true;
			 break;
		 }
		 if(ASK==true)
		 {
			 break;
		 }
	 }
 }
void Uk�ad::Szukaj_po_fladze()
{
	cout<<"Podaj Flage"<<endl;
	char flag;
	cin>>flag;
	for(int pozycja=0;pozycja<99;pozycja++)
	{
		if(tablica[pozycja]==NULL)
		{
			throw Nothing;
			return;
		}
		if(tablica[pozycja]->Get_Flag()=='K'&&flag=='K')
		{
			wypiszID(pozycja);
			tablica[pozycja]->Wypisz();
		}
		if(tablica[pozycja]->Get_Flag()=='P'&&flag=='P')
		{
			wypiszID(pozycja);
			tablica[pozycja]->Wypisz();
		}
		if(tablica[pozycja]->Get_Flag()=='T'&&flag=='T')
		{
			wypiszID(pozycja);
			tablica[pozycja]->Wypisz();
		}
		if(tablica[pozycja]->Get_Flag()=='C'&&flag=='C')
		{
			wypiszID(pozycja);
			tablica[pozycja]->Wypisz();
		}
		if(tablica[pozycja]->Get_Flag()=='R'&&flag=='R')
		{
			wypiszID(pozycja);
			tablica[pozycja]->Wypisz();
		}
		
	}

}
void Uk�ad::Wy�wietl_wybrany()
{
	cout<<"Podaj ID do wyswietlenia"<<endl;
	int ID;
	cin>>ID;
	if(ID>100&&ID<0)throw RangeBreach;
	if(tablica[ID]==NULL)
	{
		throw Nic;		
	}
	if(tablica[ID]!=NULL)
	{
		tablica[ID]->Wypisz();
	}
}
int Uk�ad::Get_ID()
{
	return id;
}
void Uk�ad::Increase_ID()
{
	id++;
}
char Uk�ad::Flag(int ID)
{
	if(tablica[ID]==NULL)throw Nothing;
	return tablica[ID]->Get_Flag();
}
void Uk�ad::dodawanie(int i,int j)
{
	tablica[id]=*tablica[i]+*tablica[j];	
}
bool Uk�ad::por�wnaj(int i,int j)
{
	bool equal;
	
	equal=(*tablica[i])==(*tablica[j]);	
	if(equal!=false)
	{
		cout<<"Prownanie Prawdziwe"<<endl;
		return true;
	}	
	else
	{
		cout<<"Prownanie Nieprawdziwe"<<endl;
		return false;
	}
}
bool Uk�ad::por�wnajWi�kszy(int i,int j)
{
	bool high;
	high=tablica[i]>tablica[j];	
	if(high!=false)
	{
		cout<<"Prownanie Prawdziwe"<<endl;
		return true;
	}	
	else
	{
		cout<<"Prownanie Nieprawdziwe"<<endl;
		return false;
	}
}
bool Uk�ad::por�wnajMniejszy(int i,int j)
{
	bool smaller;
	smaller=tablica[i]<tablica[j];	
	if(smaller!=false)
	{
		cout<<"Prownanie Prawdziwe"<<endl;
		return true;
	}	
	else
	{
		cout<<"Prownanie Nieprawdziwe"<<endl;
		return false;
	}
}
void Uk�ad::odejmowanie(int i,int j)
{
	tablica[id]=*tablica[i]-*tablica[j];
}
bool Uk�ad::Check(int i,int j,Uk�ad obiekt)
{
	
	char a,b;

	
	if((i<0||i>=100)||(j<0||j>=100))
	{
		
		throw RangeBreach;		
		
		
	}
	a=obiekt.Flag(i);
	b=obiekt.Flag(j);
	Var.i=i;
	Var.j=j;
	Var.flag1=a;
	Var.flag2=b;
	if(a !=b)
	{
		throw DiffrentFlags;	
		
	}
	else
	{
		/*cout<<"BLAD"<<endl;*/
		return true;
	}
	
		
	
}

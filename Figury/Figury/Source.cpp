#include<iostream>
#include"Figura.h"
#include"Uk³ad.h"
#include"Prostok¹t.h"

using namespace std;



void Internal_Switch_Trapez();
void Internal_Switch_Ko³o();
void Internal_Switch_Kwadrat();
void Internal_Switch_prostok¹t();
void Internal_Switch_Trójk¹tRównoboczny();
void OperatorDodaj();
void OperatorOdejmij();
void Mniejszy();
void Wiêkszy();
void Porównaj();
Uk³ad kontener;
IndexRange RangeBreach;
End Fin;
FlagMatch DiffrentFlags;
Exit Ex;
NoMemory Place;
Empty Nothing;
EmptyElement Nic;
Verify Var;

bool running=true;
void TEST()
{
	Prostok¹t T1(1,1,1,2),T2(2,2,3,4);
	Prostok¹t T3=T1+T2;
}
void Menu()
{
	while(1)
	{
		cout<<"UK£AD WSPOLRZEDNYCH MENU"<<endl;
	    cout<<"Wybierz operacje"<<endl;
		cout<<"0.Dodaj Kolo"<<endl;
	    cout<<"1.Dodaj Prostokat"<<endl;
	    cout<<"2.Dodaj Kwadrat"<<endl;
	    cout<<"3.Dodaj Trapez"<<endl;
	    cout<<"4.Dodaj TrojkatRownoboczny"<<endl;
	    cout<<"5.Wypisz Wszystko"<<endl;
	    cout<<"6.Szukaj Po Fladze"<<endl;
	    cout<<"7.Modyfikuj Wybrany(ID)"<<endl;
		cout<<"8.Wyswietl Wybrany(ID)"<<endl;
	    cout<<"PRZECIAZANIE OPERATOROW:"<<endl;
	    cout<<"9.Dodaj figury"<<endl;
	    cout<<"10.Odejmij Figury"<<endl;
		cout<<"11.Porownaj"<<endl;
		cout<<"12.Wiekszy"<<endl;
		cout<<"13.Mniejszy"<<endl;
		cout<<"14.Zakoncz Program"<<endl;
	    int op=-1;
	    cin>>op;
	    switch(op)
		{
		case 0:
			Internal_Switch_Ko³o();
			break;
		case 1:
			Internal_Switch_prostok¹t();
			break;
		case 2:
			Internal_Switch_Kwadrat();
			break;
		case 3:
			Internal_Switch_Trapez();
			break;
		case 4:
			Internal_Switch_Trójk¹tRównoboczny();
			break;
		case 5:
			kontener.Wypisz_wszystko();
			break;
		case 6:
			kontener.Szukaj_po_fladze();
			break;
		case 7:
			kontener.Modifikuj_Wybrany();
			break;
		case 8:
			kontener.Wyœwietl_wybrany();
			break;
		case 9:
			OperatorDodaj();
			break;
		case 10:
			OperatorOdejmij();
			break;
		case 11:
			Porównaj();
			break;
		case 12:
			Wiêkszy();
			break;
		case 13:
			Mniejszy();
			break;
		case 14:
			throw Ex;
			break;
		default:			
			break;
		}
	
	}

}
void OperatorDodaj()
{
	bool temp;
	cout<<"Podaj Figury O TAKICH samych typach ktore chcesz dodac"<<endl;
	int Wparam1,Wparam2;
	cin>>Wparam1;
	cin>>Wparam2;	
	temp=kontener.Check(Wparam1,Wparam2,kontener);
	kontener.dodawanie(Wparam1,Wparam2);
	kontener.Increase_ID();
}
void OperatorOdejmij()
{   
	bool temp2;
	cout<<"Podaj Figury O TAKICH samych typach ktore chcesz dodac"<<endl;
	int Oparam1,Oparam2;
	cin>>Oparam1;
	cin>>Oparam2;	
	temp2=kontener.Check(Oparam1,Oparam2,kontener);	
	kontener.odejmowanie(Oparam1,Oparam2);
	kontener.Increase_ID();

}
void Porównaj()
{
	bool temp3;
	cout<<"Podaj Figury O TAKICH samych typach ktore chcesz dodac"<<endl;
	int PPparam1,PPparam2;
	cin>>PPparam1;
	cin>>PPparam2;
	temp3=kontener.Check(PPparam1,PPparam2,kontener);	
	kontener.porównaj(PPparam1,PPparam2);
}
void Wiêkszy()
{
	bool temp4;
	cout<<"Podaj Figury O TAKICH samych typach ktore chcesz dodac"<<endl;
	int WWparam1,WWparam2;
	cin>>WWparam1;
	cin>>WWparam2;
	temp4=kontener.Check(WWparam1,WWparam2,kontener);

	kontener.porównajWiêkszy(WWparam1,WWparam2);
}
void Mniejszy()
{
	bool temp5;
	cout<<"Podaj Figury O TAKICH samych typach ktore chcesz dodac"<<endl;
	int Xparam1,Xparam2;
	cin>>Xparam1;
	cin>>Xparam2;
	temp5=kontener.Check(Xparam1,Xparam2,kontener);
	
	kontener.porównajMniejszy(Xparam1,Xparam2);
}
void Internal_Switch_Trapez()
{   	
	cout<<"Podaj dane Trapezu(x0,y0,bokA,bokB,Wysokoœæ)"<<endl;
	float TParam1,TParam2,TParam3,TParam4,TParam5;
	cin>>TParam1;
	cin>>TParam2;
	cin>>TParam3;
	cin>>TParam4;
	cin>>TParam5;
	kontener.Dodaj_Trapez(TParam1,TParam2,TParam3,TParam4,TParam5);
	bool menu1=false;
	while(1)
	{
		cout<<"Wybierz Akcje"<<endl;
	    cout<<"1.wypisz"<<endl;
	    cout<<"2.przesun o wektor"<<endl;
	    cout<<"3.obróc"<<endl;
	    cout<<"4.powrot"<<endl;
		int g1;
		cin>>g1;
		switch(g1)
		{
		case 1:
			kontener.Wypisz();
			break;
		case 2:
			cout<<"Podaj Wektor(X,Y)"<<endl;
			int x2,y2;
			cin>>x2;
			cin>>y2;
			kontener.Wektor(x2,y2);
			break;
		case 3:
			cout<<"Podaj K¹t"<<endl;
			float angle2;
			cin>>angle2;
			kontener.Obróæ(angle2);
			break;
		case 4:
			menu1=true;
			break;
		default:
			break;

		}
		if(menu1==true)
		{
			break;
		}

	}
	kontener.Increase_ID();
	return ;
}
void Internal_Switch_Kwadrat()
{   	
	cout<<"Podaj dane Kwadratu(x0,y0,bokA)"<<endl;
	float LParam1,LParam2,LParam3;
	cin>>LParam1;
	cin>>LParam2;
	cin>>LParam3;		
	kontener.Dodaj_Kwadrat(LParam1,LParam2,LParam3);
	bool menu1=false;
	while(1)
	{
		cout<<"Wybierz Akcje"<<endl;
	    cout<<"1.wypisz"<<endl;
	    cout<<"2.przesun o wektor"<<endl;
	    cout<<"3.obróc"<<endl;
	    cout<<"4.powrot"<<endl;
		int g1;
		cin>>g1;
		switch(g1)
		{
		case 1:
			kontener.Wypisz();
			break;
		case 2:
			cout<<"Podaj Wektor(X,Y)"<<endl;
			int x1,y1;
			cin>>x1;
			cin>>y1;	
			kontener.Wektor(x1,y1);
			break;
		case 3:
			cout<<"Podaj K¹t"<<endl;
			float angle1;
			cin>>angle1;
			kontener.Obróæ(angle1);
			break;
		case 4:
			menu1=true;
			break;
		default:
			break;

		}
		if(menu1==true)
		{
			break;
		}

	}
	kontener.Increase_ID();
	return ;
}
void Internal_Switch_Ko³o()
{
	cout<<"Podaj dane Ko³a(x0,y0,Promien)"<<endl;
	float CParam1,CParam2,CParam3;
	cin>>CParam1;
	cin>>CParam2;
	cin>>CParam3;		
	kontener.Dodaj_Ko³o(CParam1,CParam2,CParam3);
	bool menuC=false;
	while(1)
	{
		cout<<"Wybierz Akcje"<<endl;
	    cout<<"1.wypisz"<<endl;
	    cout<<"2.przesun o wektor"<<endl;
	    cout<<"3.obróc"<<endl;
	    cout<<"4.powrot"<<endl;
		int C1;
		cin>>C1;
		switch(C1)
		{
		case 1:
			kontener.Wypisz();
			break;
		case 2:
			cout<<"Podaj Wektor(X,Y)"<<endl;
			int xC1,yC1;
			cin>>xC1;
			cin>>yC1;	
			kontener.Wektor(xC1,yC1);
			break;
		case 3:
			cout<<"Podaj K¹t"<<endl;
			float angle1C;
			cin>>angle1C;
			kontener.Obróæ(angle1C);
			break;
		case 4:
			menuC=true;
			break;
		default:
			break;

		}
		if(menuC==true)
		{
			break;
		}

	}
	kontener.Increase_ID();
	return ;
}
void Internal_Switch_prostok¹t()
{   	
	cout<<"Podaj dane Prostok¹tu(x0,y0,bokA,bokB)"<<endl;
	float Param1,Param2,Param3,Param4;
	cin>>Param1;
	cin>>Param2;
	cin>>Param3;
	cin>>Param4;	
	kontener.Dodaj_Prostok¹t(Param1,Param2,Param3,Param4);
	bool menu=false;
	while(1)
	{
		cout<<"Wybierz Akcje"<<endl;
	    cout<<"1.wypisz"<<endl;
	    cout<<"2.przesun o wektor"<<endl;
	    cout<<"3.obróc"<<endl;
	    cout<<"4.powrot"<<endl;
		int g;
		cin>>g;
		switch(g)
		{
		case 2:
			cout<<"Podaj Wektor(X,Y)"<<endl;
			int x,y;
			cin>>x;
			cin>>y;
			kontener.Wektor(x,y);
			break;
		case 1:
			kontener.Wypisz();
			break;
		case 3:
			cout<<"Podaj K¹t"<<endl;
			float angle;
			cin>>angle;
			kontener.Obróæ(angle);
			break;
		case 4:
			menu=true;
			break;
		default:
			break;

		}
		if(menu==true)
		{
			break;
		}

	}
	kontener.Increase_ID();
	return ;
}
void Internal_Switch_Trójk¹tRównoboczny()
{   	
	cout<<"Podaj dane Prostok¹tu(x0,y0,bokA,bokB)"<<endl;
	float FParam1,FParam2,FParam3,FParam4;
	cin>>FParam1;
	cin>>FParam2;
	cin>>FParam3;
	cin>>FParam4;	
	kontener.Dodaj_Trójk¹t(FParam1,FParam2,FParam3,FParam4);
	bool menu=false;
	while(1)
	{
		cout<<"Wybierz Akcje"<<endl;
	    cout<<"1.wypisz"<<endl;
	    cout<<"2.przesun o wektor"<<endl;
	    cout<<"3.obróc"<<endl;
	    cout<<"4.powrot"<<endl;
		int g1;
		cin>>g1;
		switch(g1)
		{
		case 2:
			cout<<"Podaj Wektor(X,Y)"<<endl;
			int x,y;
			cin>>x;
			cin>>y;
			kontener.Wektor(x,y);
			break;
		case 1:
			kontener.Wypisz();
			break;
		case 3:
			cout<<"Podaj K¹t"<<endl;
			float angle;
			cin>>angle;
			kontener.Obróæ(angle);
			break;
		case 4:
			menu=true;
			break;
		default:
			break;

		}
		if(menu==true)
		{
			break;
		}

	}
	kontener.Increase_ID();
	return ;
}
int main()
{
	while(running==true)
	{
		try
		{
		Menu();
		}
		catch(IndexRange ob)
		{
			ob.Error();
		}
		catch(FlagMatch ob1)
		{
			ob1.Error();
		}
		catch(Empty ob)
		{
			ob.Error();
		}
		catch(EmptyElement ob)
		{
			ob.Error();
		}
		catch(End ob)
		{
			ob.Error();
		}
		catch(bad_alloc)
		{
			cout<<"Blad Przydzielania Pamieci"<<endl;
		}
		catch(Exit)
		{
			running=false;
		}
		catch(...)
		{
			running=true;
		}

	}

	return 0;
}
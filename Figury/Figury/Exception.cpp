#include"Exception.h"



void IndexRange::Error()
{
	cout<<"Przekroczono Index"<<endl;
	return;
}
void Empty::Error()
{
	cout<<"<Uklad pusty>"<<endl;
}
void FlagMatch::Error()
{
	cout<<"Typy Figur nie sa zgodne"<<endl;
}
void EmptyElement::Error()
{
	cout<<"<Element pusty>"<<endl;
}
void End::Error()
{
	cout<<"Wypisano wszystkie figury"<<endl;
}
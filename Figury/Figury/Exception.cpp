#include"Exception.h"



void IndexRange::Error()
{
	cout<<"Przekroczono Index"<<endl;
	return;
}
void Empty::Error()
{
	cout<<"********************UK£AD JEST PUSTY*****************************"<<endl;
}
void FlagMatch::Error()
{
	cout<<"Nieodpowiednie Flagi"<<endl;
}
void EmptyElement::Error()
{
	cout<<"Element jest pusty"<<endl;
}
void End::Error()
{
	cout<<"********************KONIEC FIGUR*****************************"<<endl;
}
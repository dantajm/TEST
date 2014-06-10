#ifndef EXCEPTION_H
#define EXCEPTION_H
#include<iostream>
using namespace std;

class IndexRange
{
public:
	void Error();

	
};
class FlagMatch
{
public:
	void Error();
};
class Exit
{

};
class NoMemory
{
};
class Empty
{
public:
	void Error();
};
class EmptyElement
{
public:
	void Error();
};
class End
{
public:
	void Error();
};
struct Verify
{
	char flag1;
	char flag2;
	int i,j;
};

extern IndexRange RangeBreach;
extern FlagMatch DiffrentFlags;
extern Exit Ex;
extern NoMemory Place;
extern Empty Nothing;
extern EmptyElement Nic;
extern End Fin;
extern Verify Var;
#endif
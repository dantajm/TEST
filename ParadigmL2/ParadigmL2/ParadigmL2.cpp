// ParadigmL2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <stdio.h>
#include<math.h>
int _tmain(int argc, _TCHAR* argv[])
{
	



	//od 6min
		//Zmienne globalne
	int a=13, 
		b=8, 
		c=70;
	float x1r=0, 
		x1u=0, 
		x2r=0, 
		x2u=0, 
		d=0;
	//if else printf sqrt
		//axx + bx + c = 0
	//	1xx>xx
	//	+ -> -
	//	0xx>
	//	if 0p0p0 = 0>0 = 0

	printf("a=%d b=%d c=%d\n", a,b,c);
	if (a == 0)
	{
	}
	if (a == 1)
	{
		printf("xx");
	}
	if (a == -1)
	{
		printf("-xx");
	}

	if (a > 1 || a < -1)
	{
		printf("%dxx",a);
	}


	if (b > 0)
	{
		printf("+");
	}
	

	if (b == 0)
	{
	}
	if (b == 1)
	{
		printf("x");
	}
	if (b == -1)
	{
		printf("-x");
	}
	if (b > 1 || b < -1)
	{
		printf("%dx", b);
	}





	if (c > 0)
	{
		printf("+");
	}
	

	/*if (c == 0)
	{
	}
	*/
	if (c > 0 || c < 0)
	{
		printf("%d", c);
	}


	printf("=0\n\n");


	//OBLICZENIA



	if (a != 0)
	{
		//printf("a!=0\n");
		d = ((float)b*b) - (4 * a*(float)c);
		printf("d=%g\n", d);
		if (d>0)
		{    
			

			x1r = ((float)-b - sqrt(d)) / (2 * a);
			x2r = ((float)-b + sqrt(d)) / (2 * a);
			
			/*if (x1r == 0)
			{
			}
			if (x1r != 0)*/
			{
				printf("x1=%g", x1r);
			}


			/*if (x2r == 0)
			{
			}
			if (x2r != 0)*/
			{
				printf(", x2=%g", x2r);
			}


		}
		if (d == 0)
		{    
			x1r = (float)-b / (2 * a);

			if (x1r == 0)
			{
			}
			if (x1r != 0)
			{
				printf("x1=%g", x1r);
			}



		}
		if (d<0)
		{
			x1r = (float)-b / (2 * a);//-1/2*1
			x2r = x1r;
			//printf("a!=0\n");
			//printf("fdgdgre %g ",x2r);

			/*if (d < 0)*/
			{
				//printf("a!=0\n");
				d = -d;
			}

			x1u = -sqrt(d) / (2 * (float)a);

			x2u = -x1u; //?

			printf("x1= ");
			if (x1r == 0)
			{
				//printf("a!=0\n");
			}
			else
			{
				//printf("a!=0\n");

			 //(x1r != 0)
			
				printf("%g", x1r);
			}


			if (x1u == 0)
			{
			}
			else{
				if (x1u > 0 && x1r != 0)
				{
					printf("+%gi", x1u);
				}
				if (x1u > 0 && x1r == 0)
				{
					printf("%gi", x1u);
				}
				if (x1u < 0 /*&& x1r != 0*/)
				{
					printf("%gi", x1u);
				}
				/*if (x1u < 0 && x1r == 0)
				{
					printf("%g", x1u);
				}*/
			}

			printf("\nx2= ");
			if (x2r == 0)
			{
			}
			else //(x2r != 0)
			{
				printf("%g", x2r);
			}


			if (x2u == 0)
			{
			}
			else{
				/*if (x2u > 0)
				{
					printf("+%g", x2u);
				}
				if (x2u < 0)
				{
					printf("%g", x2u);
				}
*/

				if (x2u > 0 && x2r != 0)
				{
					printf("+%gi", x2u);
				}
				if (x2u > 0 && x2r == 0)
				{
					printf("%gi", x2u);
				}
				if (x2u < 0 /*&& x1r != 0*/)
				{
					printf("%gi", x2u);
				}

			}



			//printf x1r + x1u i x2r + x2u i
			
			//0i>
			//1i>i
		}
	}

	if (a == 0)
	{
		//printf("a=0\n");
		if (d != 0)
		{
			x1r = (float)-c / b;
			//{ printf }
			if (b == 0 && c != 0)
			{
				printf ("sprzeczne");
			}
			if( b == 0 && c == 0)
			{
				printf("rownanie tozsamosciowe");
			}
		}
	}





	//printf("\n");
	////x2r = 3,2;
	//x2r = (float) 1 / 2;
	//x1r = (float)-b / (2 * a);
	/*float test = ((float)1 / 2);
	printf("\n\n\nx1r %g\nx1u %g\nx2r %g\nx2u %g\ntest %g\n", x1r, x1u, x2r, x2u, test);
	
*/
	printf("\n");
	system("pause");
	
	return 0;
}


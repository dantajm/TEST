// ParadigmL2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <stdio.h>
#include<math.h>

//9.49
int podaj_a()
{
	int a;
	printf("\nPodaj a: ");
	scanf_s("%d", &a);
	return a;
}

int podaj_b()
{
	int a;
	printf("\nPodaj b: ");
	scanf_s("%d", &a);
	return a;
}

int podaj_c()
{
	int a;
	printf("\nPodaj b: ");
	scanf_s("%d", &a);
	return a;
}

void formatuj_rownanie(int a, int b, int c)
{
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
		printf("%dxx", a);
	}


	if (b > 0 && a != 0)
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





	if (c > 0 && (b != 0 || a != 0))
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
	if ((a == 0 && b == 0 && c == 0))
	{

		printf("0=0");
		
	}
	else
	{
		printf("=0");

	}
	printf("\n\n");
}

float oblicz_d(int a, int b, int c)
{
	float d = ((float)b*b) - (4 * a*(float)c);
	return d;
}

void oblicz_pierwiastki(int a, int b, int c, float *x1r, float *x2r, float *x1u, float *x2u)
{
	//float x1rS, x2rS, x1uS, x2uS;

	float d = oblicz_d(a, b, c);
	printf("d = %g\n",d);
	//x1r = &d;
	//x1r = &((float)-b - sqrt(d)) / (2 * a);//TEST
	////*x1r = x1rs;
	if (a != 0)
	{

		//printf("a!=0\n");
		//DELTA PLACEHOLDER
		////////////////////////		printf("d=%g\n", d);
		if (d > 0)
		{
			/**x1r = ((float)-b - sqrt(d)) / (2 * a);
			*x2r = ((float)-b + sqrt(d)) / (2 * a);
*/
			*x1r = ((float)-b - sqrt(d)) / (2 * a);
			*x2r = ((float)-b + sqrt(d)) / (2 * a);
			/**x1r = x1rS;
			x2r = &x2rS;
*/


			/*if (x1r == 0)
			{
			}
			if (x1r != 0)*/
			//{
			//	////////////////			printf("x1=%g", x1r);
			//}

			/*if (x2r == 0)
			{
			}
			if (x2r != 0)*/
			//{
			//	///////////////		printf(", x2=%g", x2r);
			//}
		}
		
		if (d == 0)
		{
			*x1r = (float)-b / (2 * a);
			//x1r = &x1rS;
			//if (*x1r == 0)
			//{
			//}
			//if (*x1r != 0)
			//{
			//	//////////		printf("x1=%g", *x1r);
			//}
		}
		
		if (d < 0)
		{
			*x1r = (float)-b / (2 * a);//-1/2*1
			*x2r = *x1r;
			/*x1r = &x1rS;
			x2r = &x2rS;
			*///printf("ssssssssssss%g %gssssssssssss", x1rS, *x1r);

			//printf("a!=0\n");
			//printf("fdgdgre %g ",x2r);

			/*if (d < 0)*/
			{
				//printf("a!=0\n");
				d = -d;
			}

			*x1u = -sqrt(d) / (2 * (float)a);
			//x1u = &x1uS;

			*x2u = -*x1u; //?
			//x2u = &x2uS; //?


			////////////////////printf("x1= ");
			////if (*x1r == 0)
			////{
			////	//printf("a!=0\n");
			////}
			////else
			////{
			////	//printf("a!=0\n");

			////	//(x1r != 0)

			////	/////////////////		printf("%g", x1r);
			////}




			////		if (*x1u == 0)
			////		{
			////		}
			////		else{
			////			if (*x1u > 0 && *x1r != 0)
			////			{
			////				printf("+%gi", *x1u);
			////			}
			////			if (*x1u > 0 && *x1r == 0)
			////			{
			////				printf("%gi", x1u);
			////			}
			////			if (*x1u < 0 /*&& x1r != 0*/)
			////			{
			////				printf("%gi", x1u);
			////			}
			////			/*if (x1u < 0 && x1r == 0)
			////			{
			////			printf("%g", x1u);
			////			}*/
			////		}

			////		printf("\nx2= ");
			////		if (x2r == 0)
			////		{
			////		}
			////		else //(x2r != 0)
			////		{
			////			printf("%g", *x2r);
			////		}


			////		if (*x2u == 0)
			////		{
			////		}
			////		else{
			////			/*if (x2u > 0)
			////			{
			////			printf("+%g", x2u);
			////			}
			////			if (x2u < 0)
			////			{
			////			printf("%g", x2u);
			////			}
			////			*/

			////			if (*x2u > 0 && *x2r != 0)
			////			{
			////				printf("+%gi", *x2u);
			////			}
			////			if (*x2u > 0 && *x2r == 0)
			////			{
			////				printf("%gi", x2u);
			////			}
			////			if (*x2u < 0 /*&& x1r != 0*/)
			////			{
			////				printf("%gi", *x2u);
			////			}

			////		}



			////		//printf x1r + x1u i x2r + x2u i

			////		//0i>
			////		//1i>i
			////	}
			////}

			////if (a == 0)
			////{
			////	//printf("a=0\n");
			////	if (d != 0)
			////	{
			////		*x1r = (float)-c / b;
			////		//{ printf }
			////		if (b == 0 && c != 0)
			////		{
			////			printf("sprzeczne");
			////		}
			////		if (b == 0 && c == 0)
			////		{
			////			printf("rownanie tozsamosciowe");
			////		}
			////	}
			////}



		}
	}
	if (a == 0)
	{

		//printf("a=0\n");
		if (d != 0)
		{
			*x1r = (float)-c / b;
			//{ printf }
			//printf("dgsdg");
			
		//	*x2r = 0;
		//	*x2u = 0;
			
		}
		if (b == 0 && c != 0)
		{
			printf("rownanie sprzeczne");
		}
		if (b == 0 && c == 0)
		{
			printf("rownanie tozsamosciowe");
		}
	}

}
void dodaj(float d, float *x1r, float *x2r, float *x1u, float *x2u, float *sr, float *su)
{
	//printf("ssssssssssss%gssssssssssss", d);

	//float srS, suS, &x1rS=x1r, x1uS=*x1u, x2rS=*x2r, x2uS=*x2u;
	if (d > 0)
	{
		*sr = *x1r + *x2r;
		//sr = &srS;
	}
	if (d < 0)
	{
		//printf("ssssssssssss%g %g %gssssssssssss", &sr, &x1r);

		*sr = *x1r + *x2r;
		//*sr = srS;
		*su = *x1u + *x2u;
		//su = &suS;
	}
}

void odejmij(float d, float *x1r, float *x2r, float *x1u, float *x2u, float *rr, float *ru)
{
	//float rrS, ruS;
	if (d > 0)
	{
		*rr = *x1r - *x2r;
		//rr = &rrS;
	}
	if (d < 0)
	{
		*rr = *x1r - *x2r;
		//rr = &rrS;
		*ru = *x1u - *x2u;
		//ru = &ruS;
	}

}

void pomnoz(float d, float *x1r, float *x2r, float *x1u, float *x2u, float *ilr, float *ilu)
{
	//float ilrS, iluS;
	if (d > 0)
	{
		*ilr = *x1r * *x2r;
		//ilr = &ilrS;
	}
	if (d < 0)
	{
		*ilr = (*x1r * *x2r) - (*x1u * *x2u);
		//ilr = &ilrS;
		*ilu = (*x1u * *x2r) + (*x1r * *x2u);
		//ilu = &iluS;
		//printf("ssssssssssss%g %gssssssssssss", &ilr, &ilu);
	}

}

void podziel(float d, float *x1r, float *x2r, float *x1u, float *x2u, float *irr, float *iru)
{
	//float irrS, iruS;
	if (d > 0 && x2r != 0)
	{
		*irr = *x1r / *x2r;
		//irr = &irrS;
	}
	if (d < 0)
	{
		*irr = (*x1r * *x2r + *x1u * *x2u) / ((*x2r**x2r) + (*x2u**x2u));
		//irr = &irrS;
		*iru = ((*x1u * *x2r) - (*x1r * *x2u)) / ((*x2r**x2r) + (*x2u**x2u));
		//iru = &iruS;
	}

}

void formatuj_l_zsp(float x1r, float x1u)
{
	if (x1r != 0)
	{
			printf("%g", x1r);
	}

	if (x1u != 0)
	{
		if (x1u>0)
		{
			printf("+%gi", x1u);
		}
		if (x1u<0)
		{
			printf("%gi", x1u);
		}
	}
}

void wyswietl_wynik(float d, float *x1r, float *x2r, float *x1u, float *x2u, float *sr, float *su, float *rr, float *ru, float *ilr, float *ilu, float *irr, float *iru)
{
	/*if (true)
	{*/
	if (*x1r != false && *x2r != false)
	{

		printf("\nx1=");
		formatuj_l_zsp(*x1r, *x1u);
	}
		if (*irr != false && *iru != false)
		{

			if (*x2r != false && *x2u != false)
			{
				printf("\nx2=");
				formatuj_l_zsp(*x2r, *x2u);
				printf("\nx1+x2=");
				formatuj_l_zsp(*sr, *su);

				//printf("\nx1+x2=dsg%g",*su);

				printf("\nx1-x2=");
				formatuj_l_zsp(*rr, *ru);
				printf("\nx1*x2=");
				formatuj_l_zsp(*ilr, *ilu);
				printf("\nx1/x2=");
				formatuj_l_zsp(*irr, *iru);
			}
			else
			{
				//printf("\nx2=");
				//formatuj_l_zsp(*x2r, *x2u);
				printf("\nx1+x1=");
				formatuj_l_zsp(*sr, *su);

				//printf("\nx1+x2=dsg%g",*su);

				printf("\nx1-x1=0");
				//formatuj_l_zsp(*rr, *ru);
				printf("\nx1*x2=");
				formatuj_l_zsp(*ilr, *ilu);
				printf("\nx1/x2=");
				formatuj_l_zsp(*irr, *iru);
			}
		}
	/*}
	
	if (d > 0)
	{

	}*/


}
	int _tmain(int argc, _TCHAR* argv[])
	{

	


	//od 6min
	//Zmienne globalne
	int a = 13,
		b = 8,
		c = -1;
	float x1r = 0,
		x1u = 0,
		x2r = 0,
		x2u = 0,
		d = 0,
		sr = 0, su = 0, rr = 0, ru = 0, ilr = 0, ilu = 0, irr = 0, iru = 0;

	a = podaj_a();
	b = podaj_b();
	c = podaj_c();
	
	formatuj_rownanie(a,b,c);
	//d=oblicz_d(a,b,c);
	d=oblicz_d(a, b, c);
	oblicz_pierwiastki(a, b, c, &x1r, &x2r, &x1u, &x2u);
	if (a != 0 && b != 0 && c != 0)
	{
		if (x2r == false && x2u == false)
		{
			dodaj(d, &x1r, &x1r, &x1u, &x1u, &sr, &su);
			odejmij(d, &x1r, &x1r, &x1u, &x1u, &rr, &ru);
			pomnoz(d, &x1r, &x1r, &x1u, &x1u, &ilr, &ilu);
			podziel(d, &x1r, &x1r, &x1u, &x1u, &irr, &iru);
		}
		else
		{
			dodaj(d, &x1r, &x2r, &x1u, &x2u, &sr, &su);
			odejmij(d, &x1r, &x2r, &x1u, &x2u, &rr, &ru);
			pomnoz(d, &x1r, &x2r, &x1u, &x2u, &ilr, &ilu);
			podziel(d, &x1r, &x2r, &x1u, &x2u, &irr, &iru);
		}
	}
	wyswietl_wynik(d, &x1r, &x2r, &x1u, &x2u, &sr, &su, &rr, &ru, &ilr, &ilu, &irr, &iru);
	
	
	//oblicz_pierwiastki(a, b, c, &x1r, &x2r, &x1u, &x2u);
	//if else printf sqrt
	//axx + bx + c = 0
	//	1xx>xx
	//	+ -> -
	//	0xx>
	//	if 0p0p0 = 0>0 = 0














	//printf("a=%d b=%d c=%d\n", a, b, c);
	


	//OBLICZENIA




	//printf("\n");
	////x2r = 3,2;
	//x2r = (float) 1 / 2;
	//x1r = (float)-b / (2 * a);
	/*float test = ((float)1 / 2);
	
	*/
	//printf("\n\n\nx1r %g\nx1u %g\nx2r %g\nx2u %g\nsr %g\nsu %g\nrr %g\nru %g\nilr %g\nilu %g\nirr %g\niru %g\n", x1r, x1u, x2r, x2u, sr, su, rr, ru, ilr, ilu, irr, iru);

	printf("\n");
	system("pause");

	return 0;
}


// ParadL4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <stdio.h>
#include<math.h>
#define finit 2147483647 // max+ int val
#define false2 2147483647
#define PI 3.14159265

//9.49

struct rownanie
{
	int *wsk;
	float d, x1r, x2r, sr, rr, ilr, irr, m1, m2, fi1, fi2;
	struct urojona *u;
};

struct urojona
{
	float x1u, x2u, su, ru, ilu, iru;
};

void podaj_a(struct rownanie *R)
{
	printf("\nPodaj a: ");
	scanf_s("%i", &R->wsk[0]);
}

void podaj_b(struct rownanie *R)
{
	printf("\nPodaj b: "); 
	scanf_s("%i", &R->wsk[1]);
}

void podaj_c(struct rownanie *R)
{
	printf("\nPodaj c: ");
	scanf_s("%i", &R->wsk[2]);
}

void formatuj_rownanie(struct rownanie *R)
{
	int a = R->wsk[0];
	int b = R->wsk[1];
	int c = R->wsk[2];

	printf("\n\n");
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

void oblicz_d(struct rownanie *R)
{
	R->d = (float)R->wsk[1] * R->wsk[1] - 4 * R->wsk[0] * R->wsk[2];
}

void oblicz_pierwiastki(struct rownanie *R)
{
	//float x1rS, x2rS, x1uS, x2uS;

	//float d = oblicz_d(a, b, c);
	
	//printf("d = %g\n",d);
	//x1r = &d;
	//x1r = &((float)-b - sqrt(d)) / (2 * a);//TEST
	////*x1r = x1rs;
	float d = R->d;
	int a = R->wsk[0];
	int b = R->wsk[1];
	int c = R->wsk[2];




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
			R->x1r = ((float)-b - sqrt(d)) / (2 * a);
			R->x2r = ((float)-b + sqrt(d)) / (2 * a);
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
			R->x1r = (float)-b / (2 * a);
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
			R->x1r = (float)-b / (2 * a);//-1/2*1
			R->x2r = R->x1r;
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

			R->u->x1u = -sqrt(d) / (2 * (float)a);
			//x1u = &x1uS;

			R->u->x2u = -R->u->x1u;
			//?
			//x2u = &x2uS; //?
			//
			//
			////////////////////printf("x1= ");
			////if (*x1r == 0)
			////{
			////	//printf("a!=0\n");
			////}
			////else
			////{
			////	//printf("a!=0\n");
			//
			////	//(x1r != 0)
			//
			////	/////////////////		printf("%g", x1r);
			////}
			//
			//
			//
			//
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
			//
			////		printf("\nx2= ");
			////		if (x2r == 0)
			////		{
			////		}
			////		else //(x2r != 0)
			////		{
			////			printf("%g", *x2r);
			////		}
			//
			//
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
			//
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
			//
			////		}
			//
			//
			//
			////		//printf x1r + x1u i x2r + x2u i
			//
			////		//0i>
			////		//1i>i
			////	}
			////}
			//
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
		/*if (c == 0)
		{
		printf("aaaaaaa=%d\n", c);
		}*/
		//printf("a=0\n");
		if (d != 0 && b != 0)
		{
			R->x1r = (float)-c / (float)b;
			/*if (c == 0)
			{
			*x1r = 0;
			}*/
			//*x1r = -1/1;
			//{ printf }
			//printf("dgsdg");

			//	*x2r = 0;
			//	*x2u = 0;
			//*x1r = 0;
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
void dodaj(struct rownanie *R)
{
	//printf("ssssssssssss%gssssssssssss", d);

	//float srS, suS, &x1rS=x1r, x1uS=*x1u, x2rS=*x2r, x2uS=*x2u;
	if (R->d >= 0)
	{
		R->sr = R->x1r + R->x2r;
		//sr = &srS;
	}
	if (R->d < 0)
	{
		//printf("ssssssssssss%g %g %gssssssssssss", &sr, &x1r);

		R->sr = R->x1r + R->x2r;
		//*sr = srS;
		R->u->su = R->u->x1u + R->u->x2u;
		//su = &suS;
	}
}

void odejmij(struct rownanie *R)
{
	//float rrS, ruS;
	if (R->d >= 0)
	{
		R->rr = R->x1r - R->x2r;
		//rr = &rrS;
	}
	if (R->d < 0)
	{
		R->rr = R->x1r - R->x2r;
		//rr = &rrS;
		R->u->ru = R->u->x1u - R->u->x2u;
		//ru = &ruS;
	}

}

void pomnoz(struct rownanie *R)
{
	//float ilrS, iluS;
	if (R->d >= 0)
	{
		R->ilr = R->x1r * R->x2r;
		//ilr = &ilrS;
	}
	if (R->d < 0)
	{
		R->ilr = (R->x1r * R->x2r) - (R->u->x1u * R->u->x2u);
		//ilr = &ilrS;
		R->u->ilu = (R->u->x1u * R->x2r) + (R->x1r * R->u->x2u);
		//ilu = &iluS;
		//printf("ssssssssssss%g %gssssssssssss", &ilr, &ilu);
	}

}

void podziel(struct rownanie *R)
{
	//float irrS, iruS;
	if (R->d >= 0 && R->x2r != 0)
	{
		R->irr = R->x1r / R->x2r;
		//irr = &irrS;
	}
	if (R->d < 0)
	{
		R->irr = (R->x1r * R->x2r + R->u->x1u * R->u->x2u) / ((R->x2r*R->x2r) + (R->u->x2u*R->u->x2u));
		//irr = &irrS;
		R->u->iru = ((R->u->x1u * R->x2r) - (R->x1r * R->u->x2u)) / ((R->x2r*R->x2r) + (R->u->x2u*R->u->x2u));
		//iru = &iruS;
	}

}

//void formatuj_l_zsp(struct rownanie *R)
//	//float x1r, float x1u)
//{
//	//printf("\n%geeeeeeee", x1r);
//	//printf("\n%geeeeeeeeee", x1r);
//	//x1r = 243;
//
//	if (R->x1r != false2)
//	{
//		//printf("\n%geeeeeeeeee", x1r);
//		if (R->x1r != 0)
//		{
//			printf("%g", R->x1r);
//		}
//	}
//	if (R->u->x1u != false2)
//	{
//		if (R->u->x1u != 0)
//		{
//			if (R->u->x1u > 0 && (R->x1r != false2 && R->x1r != 0))
//			{
//				printf("+%gi", R->u->x1u);
//			}
//			if (R->u->x1u > 0 && (R->x1r == false2 || R->x1r == 0))
//			{
//				printf("%gi", R->u->x1u);
//			}
//
//			if (R->u->x1u < 0)
//			{
//				printf("%gi", R->u->x1u);
//			}
//
//		}
//	}
//	if ((R->u->x1u == 0 && R->x1r == 0) || (R->x1r == 0 && R->u->x1u == false2))
//	{
//		printf("0");
//	}
//}
//

void formatuj_l_zsp(struct rownanie *R, int mode)
//float x1r, float x1u)
{
	//printf("\n%geeeeeeee", x1r);
	//printf("\n%geeeeeeeeee", x1r);
	//x1r = 243;
	float xr, xu;

	if (mode == 1)
	{
		xr = R->x1r;
		xu = R->u->x1u;
	}
	if (mode == 2)
	{
		xr = R->x2r;
		xu = R->u->x2u;
	}
	if (mode == 3)
	{
		xr = R->sr;
		xu = R->u->su;
	}
	if (mode == 4)
	{
		xr = R->rr;
		xu = R->u->ru;
	}
	if (mode == 5)
	{
		xr = R->ilr;
		xu = R->u->ilu;
	}
	if (mode == 6)
	{
		xr = R->irr;
		xu = R->u->iru;
	}

	//switch (mode)
	//{
	//case 1://X1
	//	xr = R->x1r;
	//	xu = R->u->x1u;
	//case 2://X2
	//	xr = R->x2r;
	//	xu = R->u->x2u;
	//case 3://Suma
	//	xr = R->sr;
	//	xu = R->u->su;
	//case 4://Ró¿nica
	//	xr = R->rr;
	//	xu = R->u->ru;
	//case 5://iloczyn
	//	xr = R->ilr;
	//	xu = R->u->ilu;
	//case 6://iloraz
	//	xr = R->irr;
	//	xu = R->u->iru;
	//default:
	//	break;
	//}


	if (xr != false2)
	{
		//printf("\n%geeeeeeeeee", x1r);
		if (xr != 0)
		{
			printf("%g", xr);
		}
	}
	if (xu != false2)
	{
		if (xu != 0)
		{
			if (xu > 0 && (xr != false2 && xr != 0))
			{
				printf("+%gi", xu);
			}
			if (xu > 0 && (xr == false2 || xr == 0))
			{
				printf("%gi", xu);
			}

			if (xu < 0)
			{
				printf("%gi", xu);
			}

		}
	}
	if ((xu == 0 && xr == 0) || (xr == 0 && xu == false2))
	{
		printf("0");
	}
}



void wyswietl_wynik(struct rownanie *R)
	//float d, float *x1r, float *x2r, float *x1u, float *x2u, float *sr, float *su, float *rr, float *ru, float *ilr, float *ilu, float *irr, float *iru)
{
	/*if (true)
	{*/
	//if (*x1r != false && *x2r != false)
	{
		if (R->x1r != false2 || R->u->x1u != false2)
		{

			printf("\nx1=");
			formatuj_l_zsp(R,1);//problem
		}
		if (R->x2r != false2 || R->u->x2u != false2)
		{

			printf("\nx2=");
			formatuj_l_zsp(R,2);
		}
	}

	//
	//if (a == 0)
	//{
	//	/*if (c == 0)
	//	{
	//	printf("aaaaaaa=%d\n", c);
	//	}*/
	//	//printf("a=0\n");
	//	if (d != 0 && b != 0)
	//	{
	//		*x1r = (float)-c / (float)b;
	//		/*if (c == 0)
	//		{
	//		*x1r = 0;
	//		}*/
	//		//*x1r = -1/1;
	//		//{ printf }
	//		//printf("dgsdg");
	//
	//		//	*x2r = 0;
	//		//	*x2u = 0;
	//		//*x1r = 0;
	//	}
	//	if (b == 0 && c != 0)
	//	{
	//		printf("rownanie sprzeczne");
	//	}
	//	if (b == 0 && c == 0)
	//	{
	//		printf("rownanie tozsamosciowe");
	//	}
	//}



	if (R->x1r != false2)
	{

		if (R->x2r != false2 || R->u->x2u != false2)
		{
			//if (*sr==false2)
			if (R->sr != false2 || R->u->su != false2)
			{
				printf("\nx1+x2=");
				
				formatuj_l_zsp(R, 3);
			}
			//printf("\nx1+x2=dsg%g",*su);
			if (R->rr != false2 || R->u->ru != false2)
			{
				printf("\nx1-x2=");
				formatuj_l_zsp(R, 4);
			}
			if (R->ilr != false2 || R->u->ilu != false2)
			{
				printf("\nx1*x2=");
				formatuj_l_zsp(R, 5);
			}
			if ((R->irr != false2 || R->u->iru != false2))
			{
				printf("\nx1/x2=");
				formatuj_l_zsp(R, 6);
			}
		}
		else
		{

			if (R->sr != false2 || R->u->su != false2)
			{
				//printf("\nx2=");
				//formatuj_l_zsp(*x2r, *x2u);
				printf("\nx1+x1=");
				//formatuj_l_zsp(R->sr, *su);
			}
			//printf("\nx1+x2=dsg%g",*su);

			if (R->rr != false2 || R->u->ru != false2)
			{
				printf("\nx1-x1=");
				//formatuj_l_zsp(*rr, *ru);
			}
			if (R->ilr != false2 || R->u->ilu != false2)
			{
				printf("\nx1*x1=");
				//formatuj_l_zsp(*ilr, *ilu);
			}
			if ((R->irr != false2 || R->u->iru != false2))
			{
				printf("\nx1/x1=");
				//formatuj_l_zsp(R->irr, R->u->iru);
			}
		}
	}
	/*}

	if (d > 0)
	{

	}*/
	printf("\n\nz1=%g(cos(%g)+isin(%g))",
		R->m1, R->fi1, R->fi1);
	printf("\n\nz2=%g(cos(%g)+isin(%g))",
		R->m2, R->fi2, R->fi2);
	
}

// void test

////void test(int a, int b, int c,      float x1rO, float x2rO, float x1uO, float x2uO, float srO, float suO, float rrO, float ruO, float ilrO, float iluO, float irrO, float iruO)
//void test(int a, int b, int c, float x1rO, float x2rO, float x1uO, float x2uO)
//{
//
//	float x1r = finit,
//		x1u = finit,
//		x2r = finit,
//		x2u = finit,
//		d = finit,
//		sr = finit, su = finit, rr = finit, ru = finit, ilr = finit, ilu = finit, irr = finit, iru = finit;
//
//	/*x1rO = finit,
//	x1uO = finit,
//	x2rO = finit,
//	x2uO = finit,*/
//
//	//	srO = finit, suO = finit, rrO = finit, ruO = finit, ilrO = finit, iluO = finit, irrO = finit, iruO = finit;
//
//	/*float x1r ,
//	x1u ,
//	x2r ,
//	x2u ,
//	d ,
//	sr, su , rr , ru, ilr , ilu , irr , iru ;
//	*/
//
//
//	/*a = podaj_a();
//	b = podaj_b();
//	c = podaj_c();*/
//
//	formatuj_rownanie(a, b, c);
//	//d=oblicz_d(a,b,c);
//	d = oblicz_d(a, b, c);
//	oblicz_pierwiastki(a, b, c, &x1r, &x2r, &x1u, &x2u);
//	//if (a != 0 && b != 0 && c != 0)
//	if (false)
//	{
//		if (x2r == false2 || x2u == false2)
//		{
//			//printf("no x2\n");
//			dodaj(d, &x1r, &x1r, &x1u, &x1u, &sr, &su);
//			odejmij(d, &x1r, &x1r, &x1u, &x1u, &rr, &ru);
//			pomnoz(d, &x1r, &x1r, &x1u, &x1u, &ilr, &ilu);
//			podziel(d, &x1r, &x1r, &x1u, &x1u, &irr, &iru);
//		}
//		else
//		{
//			dodaj(d, &x1r, &x2r, &x1u, &x2u, &sr, &su);
//			odejmij(d, &x1r, &x2r, &x1u, &x2u, &rr, &ru);
//			pomnoz(d, &x1r, &x2r, &x1u, &x2u, &ilr, &ilu);
//			podziel(d, &x1r, &x2r, &x1u, &x2u, &irr, &iru);
//		}
//	}
//
//	//if ()
//	//	printf("x1rO = %g, x1uO = %g, x2rO =%g , x2uO = %g, srO = %g, suO = %g, rrO = %g, ruO = %g, ilrO = %g, iluO = %g, irrO = %g, iruO = %g",
//	//		x1rO     , x1uO     , x2rO     , x2uO     , srO     , suO     , rrO     , ruO     , ilrO     , iluO     , irrO     , iruO);
//
//
//	wyswietl_wynik(d, &x1r, &x2r, &x1u, &x2u, &sr, &su, &rr, &ru, &ilr, &ilu, &irr, &iru);
//	printf("\n\nx1rO = %g, x1uO = %g, x2rO =%g , x2uO = %g\n\n****************************************************",
//		x1rO, x1uO, x2rO, x2uO);
//
//}
//

void postac_trygonometryczna(struct rownanie *R)
{
	R->m1 = sqrt((R->x1r*R->x1r) + (R->u->x1u*R->u->x1u));
	R->m2 = sqrt((R->x2r*R->x2r) + (R->u->x2u*R->u->x2u));
	//x1r<0 i x1u<0
	//x1r==0 i x1u>0
	//x1r==0 i x1u<0
	if (R->x1r > 0)
	{
		//atan (param) * 180 / PI;
		R->fi1 = atan(R->u->x1u / R->x1r) * 180 / PI;
	}
	if (R->x1r < 0 && R->u->x1u > 0)
	{
		R->fi1 = (atan(R->u->x1u / R->x1r) * 180 / PI) + 180;
	}
	if (R->x1r < 0 && R->u->x1u < 0)
	{
		R->fi1 = (atan(R->u->x1u / R->x1r) * 180 / PI) - 180;
	}
	if (R->x1r == 0 && R->u->x1u > 0)
	{
		R->fi1 = 90;
	}
	if (R->x1r == 0 && R->u->x1u < 0)
	{
		R->fi1 = -90;
	}

	if (R->x2r > 0)
	{
		//atan (param) * 180 / PI;
		R->fi2 = atan(R->u->x2u / R->x2r) * 180 / PI;
	}
	if (R->x2r < 0 && R->u->x2u > 0)
	{
		R->fi2 = (atan(R->u->x2u / R->x2r) * 180 / PI) + 180;
	}
	if (R->x2r < 0 && R->u->x2u < 0)
	{
		R->fi2 = (atan(R->u->x2u / R->x2r) * 180 / PI) - 180;
	}
	if (R->x2r == 0 && R->u->x2u > 0)
	{
		R->fi2 = 90;
	}
	if (R->x2r == 0 && R->u->x2u < 0)
	{
		R->fi2 = -90;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{

	//void test(int a, int b, int c, float x1rO, float x2rO, float x1uO, float x2uO)

/*
	test(0, 0, 0, false2, false2, false2, false2);
	printf("\nprawda");

	test(0, 0, 1, false2, false2, false2, false2);
	printf("\nfalsz");
	test(0, 2, 3, -1.5000, false2, false2, false2);
	test(1, -2, 1, 1, false2, false2, false2);
	test(-1, 1, 2, -1, 2, false2, false2);
	test(1, 1, 1, -0.5, -0.5, -0.86603, 0.86603);
*/
	//root = (struct node *) malloc(sizeof (struct node));
	struct rownanie *R;
	R = (struct rownanie *) malloc(sizeof(struct rownanie));

	struct urojona *u;
	u = (struct urojona *) malloc(sizeof(struct rownanie));

	R->wsk = (int *) malloc(sizeof(int)* 3);

	R->u = u;

	printf("Struct Rownanie: Adres - %p", R);
	printf(", Rozmiar - %i\n", sizeof(*R));
	printf("Struct Urojona: Adres - %p", u);
	printf(", Rozmiar - %i\n", sizeof(*u));
	printf("int wsk size %i\n", sizeof(R->wsk));
	printf("R->u Adr. %p\n", R->u);




	//od 6min
	//Zmienne globalne
	int a = 13,
		b = 8,
		c = -1;
	R->x1r = finit,
		R->u->x1u = finit,
		R->x2r = finit,
		R->u->x2u = finit,
		R->d = finit,
		R->sr = finit, R->u->su = finit, R->rr = finit, R->u->ru = finit, R->ilr = finit, R->u->ilu = finit, R->irr = finit, R->u->iru = finit;

	R->m1 = finit;
	R->m2 = finit;
	R->fi1 = finit;
	R->fi2 = finit;

	/*float x1r ,
	x1u ,
	x2r ,
	x2u ,
	d ,
	sr, su , rr , ru, ilr , ilu , irr , iru ;
	*/


	podaj_a(R);
	podaj_b(R);
	podaj_c(R);

	formatuj_rownanie(R);
	//d=oblicz_d(a,b,c);
	oblicz_d(R);
	oblicz_pierwiastki(R);
	//if (a != 0 && b != 0 && c != 0)
	{
		if (R->x2r == false2 || R->u->x2u == false2)
		{
			//printf("no x2\n");
			dodaj(R);
			odejmij(R);
			pomnoz(R);
			podziel(R);
		}
		else
		{
			dodaj(R);
			odejmij(R);
			pomnoz(R);
			podziel(R);
		}
	}

	postac_trygonometryczna(R);

	wyswietl_wynik(R);


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

	//printf("\n\n\n x1r %g\nx1u %g\nx2r %g\nx2u %g\nsr %g\nsu %g\nrr %g\nru %g\nilr %g\nilu %g\nirr %g\niru %g\nd %g\n",
	//			   x1r,    x1u,    x2r,    x2u,    sr,    su,    rr,    ru,    ilr,    ilu,    irr,    iru,     d);

	printf("\n");
	system("pause");

	return 0;
}


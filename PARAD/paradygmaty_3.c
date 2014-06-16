#include <stdio.h>
#include <math.h>
// funkcja atan2, zwraca wartosc w radianach, trzeba zamieni na stopnie
// wsp tablica 3-elementowa (na a, b i c)

struct rownanie
{
int *wsk;
float d, x1r, x2r, sr, rr, ir, irr, m1, m2, fi1, fi2;
struct urojona *u;
};

struct urojona
{
  float x1u, x2u, su, ru, iu, iru;           
};
////////////////////////////////////////////////////////////////////
int main ()
{

struct rownanie *R;
R=malloc(sizeof(struct rownanie));

struct urojona *u;
u=malloc(sizeof(struct rownanie));

R->wsk=malloc(sizeof(int)*3);

R->u=u;

printf("%p\n",R);
printf("%i\n",sizeof(*R));
printf("%p\n",u);
printf("%i\n",sizeof(*u));
printf("%i\n",sizeof(R->wsk));
printf("%p\n",R->u);

void podaj_a(struct rownanie *R)
{
    printf("wprowadz a\n");
    scanf("%i",&R->wsk[0]);
    }


void podaj_b(struct rownanie *R)
{
    printf("wprowadz b\n");
    scanf("%i",&R->wsk[1]);
}
void podaj_c(struct rownanie *R)
{
    printf("wprowadz c\n");
    scanf("%i",&R->wsk[2]);
}

void oblicz_d (struct rownanie *R)
{   
if (R->wsk[0]!=0)
{
    R->d=(float)R->wsk[1]*R->wsk[1]-4*R->wsk[0]*R->wsk[2];
}  
} 

void formatuj_rownanie(struct rownanie *R)
{
//////////////    1. punkt    
    int a=R->wsk[0];
    int b=R->wsk[1];
    int c=R->wsk[2];
    
    if ((a==0) && (b==0) && (c==0))
    {
    printf("0=0\n");
    }
    else
    {
// blok a
        if (a==1)
        printf("xx");
        else if (a==-1)
        printf("-xx");
        else if (a==0)
        printf("");
        else
        printf("%ixx",a);
// blok b
        if (b!=0)
        {
         if (a==0)
           {
           if (b==-1)
           printf("-x");
           else if (b==1)
           printf("x");
           else
           printf("%ix",b);
           }
         else
            {
           if (b==-1)
           printf("-x");
           else if (b==1)
           printf("+x");
           else if (b>0)
           printf("+%ix",b);
           else if (b<0)
           printf("%ix",b);
            }
        }
// blok c        
        if ((a!=0) || (b!=0))
        {
           if (c>0)
           printf("+%i",c);
           else if (c<0)
           printf("%i",c);
        }
        else
        printf("%i",c);        
//
        printf("=0\n");
    }
}    
  
void oblicz_pierwiastki(struct rownanie *R)

{   float d=R->d;
    int a=R->wsk[0];
    int b=R->wsk[1];
    int c=R->wsk[2];
    
    if (d>0)
    {
        R->x1r=(float)(-b-sqrt(d))/(2*a);
        R->x2r=(float)(-b+sqrt(d))/(2*a);
      
    }
    else if (d==0)
    {
        R->x1r=(float)(-b)/(2*a);      
    }
   else if (d<0)
    {
        d=d*(float)(-1); 
        R->x1r=(float)(-b)/(2*a); 
        R->x2r=R->x1r; 
        R->u->x1u=-sqrt(d)/(2*a); 
        R->u->x2u=-R->u->x1u; 
        //d=d*(float)(-1);      
    }
}   

void dodaj(struct rownanie *R)
{     
if ((R->d)>0)
R->sr=(R->x1r)+(R->x2r);
else if ((R->d)<0);
{
R->sr=R->x1r+R->x2r;
R->u->su=R->u->x1u+R->u->x2u;
}
}

void odejmij(struct rownanie *R)
{     
if ((R->d)>0)
R->rr=R->x1r-R->x2r;
else if ((R->d)<0);
{
R->rr=R->x1r-R->x2r;
R->u->ru=R->u->x1u-R->u->x2u;
}
}

/*void pomnoz(struct rownanie *R)
{
if (R->>0)
{
R->ir=R->x1r*R->x2r;
}

else if (d<0)
{
*ir=(*x1r)*(*x2r)-(*x1u)*(*x2u);
*iu=(*x1r)*(*x2u)+(*x2r)*(*x2u);
//*ir=(*x1r)*(*x2r)-(*x1u)*(*x2u);
//*iu=(*x1r)*(*x2u)+(*x2r)*(*x2u);
}
}
*/



podaj_a(R);
podaj_b(R);
podaj_c(R);
oblicz_d(R);
formatuj_rownanie(R); 
oblicz_pierwiastki(R);
dodaj(R);
odejmij(R);
printf("%f\n",R->x1r);
printf("%f\n",R->x2r);
printf("%f\n",R->u->x1u);
printf("%f\n\nsuma",R->u->x2u);

printf("%f\n",R->sr);
printf("%f\n",R->rr);




/*

void odejmij(float d, float *x1r, float *x2r, float *x1u, float *x2u, float*ru, float*rr)
{
if (d>0)
{
*rr=(*x1r)-(*x2r);
}
else if (d<0)
{
*rr=(*x1r)-(*x2r);
*ru=(*x1u)-(*x2u);
}
}

void pomnoz(float d, float *x1r, float *x2r, float *x1u, float *x2u, float *iu, float *ir)
{
if (d>0)
{
*ir=(*x1r)*(*x2r);
}
else if (d<0)
{
*ir=(*x1r)*(*x2r)-(*x1u)*(*x2u);
*iu=(*x1r)*(*x2u)+(*x2r)*(*x2u);
//*ir=(*x1r)*(*x2r)-(*x1u)*(*x2u);
//*iu=(*x1r)*(*x2u)+(*x2r)*(*x2u);
}
}

void podziel(float d, float *x1r, float *x2r, float *x1u, float *x2u, float *iru, float *irr)
{
if ((*x2r)!=0)
{     

if (d>0)
{        
*irr=(*x1r)/(*x2r);
}

else if (d<0)
{


*irr=((*x1r)*(*x2r)+(*x1u)*(*x2u))/((*x2r)*(*x2r)+(*x2u)*(*x2u));
*iru=((*x2r)*(*x1u)-(*x1u)*(*x2u))/((*x2r)*(*x2r)+(*x2u)*(*x2u));
//*irr=((*x1r)*(*x2r)+(*x1u)*(*x2u)) / ( pow((*x2r),2)+ pow((*x2u),2)  );
//*iru=((*x2r)*(*x1u)-(*x1r)*(*x2u)) / ( pow((*x2r),2)+ pow((*x2u),2)  );

}

}//koniec glownego if
}
       
       
void formatuj_l_zesp(float x1r, float x1u)
{
 if (x1r!=0)
        {
        printf("%f",x1r);
        
        if (x1u>0)
        printf("+%.2f*i\n",x1u);
        else if (x1u==0)
        printf("\n");
        else if (x1u<0)
        printf("%.2f*i\n",x1u);
        } 
        else
        {
        if (x1u>0)
        printf("%.2f*i\n",x1u);
        else if (x1u==0)
        printf("\n");
        else if (x1u<0)
        printf("%.2f*i\n",x1u);    
        }    
     
}       
       
       
void wyswietl_wynik(float d, float x1r, float x2r, float x1u, float x2u, float sr, float su, float rr, float ru, float ir, float iu, float irr, float iru)
{
if (a!=0)
{
    
    if (d>0)
    {
       printf("Pierwiastki rownania: \n");
       printf("%.2f\n%.2f\n",x1r,x2r);
       
       dodaj(d, &x1r, &x2r, &x1u, &x2u, &su, &sr);
       odejmij(d, &x1r, &x2r, &x1u, &x2u, &ru, &rr);
       pomnoz(d, &x1r, &x2r, &x1u, &x2u, &iu, &ir);
       podziel(d, &x1r, &x2r, &x1u, &x2u, &iru, &irr);
       
       printf("suma %.2f\n",sr);
       printf("roznica %.2f\n",rr);
       printf("iloczyn %.2f\n",ir);
       printf("iloraz %.2f\n",irr);
      
    }
    else if (d==0)
    {
        printf("Pierwiastek rownania: \n");
        printf("%.2f\n",x1r);      
    }
    else if (d<0)
    {
         
         dodaj(d, &x1r, &x2r, &x1u, &x2u, &su, &sr);
       odejmij(d, &x1r, &x2r, &x1u, &x2u, &ru, &rr);
       pomnoz(d, &x1r, &x2r, &x1u, &x2u, &iu, &ir);
       podziel(d, &x1r, &x2r, &x1u, &x2u, &iru, &irr);
       
        printf("Pierwiastki rownania: \n");
        
        formatuj_l_zesp(x1r,x1u);
        formatuj_l_zesp(x2r,x2u);
        printf("suma: ");
        formatuj_l_zesp(sr,su);
        printf("roznica: ");
        formatuj_l_zesp(rr,ru);
        printf("iloczyn: ");
        formatuj_l_zesp(ir,iu);
        printf("iloraz: ");
        formatuj_l_zesp(irr,iru);
      
    }
    
}
}


podaj_a();
podaj_b();
podaj_c();
//oblicz_d(a,b,c);
formatuj_rownanie(a,b,c);
oblicz_pierwiastki(a,b,c,&x1r,&x2r,&x1u,&x2u);
//printf("%f",x1r);
wyswietl_wynik(d,x1r,x2r,x1u,x2u,sr,su,rr,ru,ir,iu,irr,iru);    
 */  
 system("pause");
 return 0;   
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{

int a;
int b;
int c;

scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);


if(c>a>b || b>a>c){printf ("%d",a);}
if(c>b>a || a>b>c){printf ("%d",b);}
if(a>c>b || b>c>a){printf ("%d",c);}



return 0;
}

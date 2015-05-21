#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int diametro(int a,int b){
return sqrt((a*a)+(b*b));
}

int main (){


int l,a,p,r;
scanf("%d %d %d %d",&l,&a,&p,&r);

int resp=0;
if(diametro(l,a)<(r+r) && diametro(l,p)<(r+r) && diametro(a,p)<(r+r) )printf("S");
else printf("N");




return 0;
}

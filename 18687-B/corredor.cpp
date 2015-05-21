#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mochila=0,melhor=0;
int vetor[600000];
int main (){

int n;
scanf("%d",&n);

for(int i=1;i<=n;i++)scanf("%d",&vetor[i]);

for(int i=1;i<=n;i++){
    if(mochila<0)mochila=0;
    mochila+=vetor[i];
    if(mochila>melhor)melhor=mochila;
}
printf("%d",melhor);

return 0;
}

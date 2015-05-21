#include <stdio.h>
#include <stdlib.h>
int matriz[100][100];
int coluna=0,linha=0;
int somal[100];
int somac[100];
int erro;
int main (){
int n;
scanf("%d",&n);

for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++)scanf("%d",&matriz[i][j]);

for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++)somac[i]+=matriz[i][j];

for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++)somal[i]+=matriz[j][i];

if(somac[1]!=somac[2] && somac[1]!=somac[3])coluna=1;
if(somal[1]!=somal[2] && somal[1]!=somal[3])linha=1;

for(int i=1;i<=n;i++){
    if(coluna!=0)break;
    if(somac[i]!=somac[1])coluna=i;
}

for(int i=1;i<=n;i++){
    if(linha!=0)break;
    if(somal[i]!=somal[1])linha=i;
}

if(coluna==1)erro=(somac[2]-somac[1]);
else erro=somac[1]-somac[coluna];



printf("%d ",matriz[coluna][linha]+erro);
printf("%d",matriz[coluna][linha]);

return 0;
}

#include <stdlib.h>
#include <stdio.h>
int vetor[50000];
int min(int a,int b){
if(a>=b)return b;
return a;

}
int max(int a,int b){
if(a>=b)return a;
return b;

}
int pontos=0;



int tabela[5000][5000];

int main () {
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++)scanf("%d",&vetor[i]);


int a,b;
for(int i=1;i<n;i++){
    scanf("%d %d",&a,&b);
    tabela[a][b]=1;
    tabela[b][a]=1;
}

for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++)
for(int k=1;k<=n;k++){if(tabela[i][k]!=0 && tabela[k][j]!=0)tabela[i][j]=min(tabela[i][j],tabela[i][k]+tabela[k][j]);
}
for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++){if(tabela[i][j]>tabela[j][i])tabela[j][i]=tabela[i][j];if(tabela[j][i]>tabela[i][j])tabela[i][j]=tabela[j][i];}


for(int i=1;i<=n;i++)
for(int j=i+1;j<=n;j++)if(vetor[i]==vetor[j])pontos+=max(tabela[i][j],tabela[j][i]);


printf("%d",pontos);

return 0;
}

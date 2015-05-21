#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char vetor[100000];
char frase[100000];
int main (){

for(int i=1;i<=26;i++){
    scanf("%c",&vetor[i]);
}

scanf("%s",&frase);
int x=strlen(frase);
for(int i=0;i<x;i++){
    int h=(frase[i]-'a'+1);
    printf("%c",vetor[h]);
}

return 0;
}

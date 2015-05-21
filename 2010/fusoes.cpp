#include <stdio.h>
#include <stdlib.h>
int pai[1000010];
int find(int a){

if(pai[a]==a)return a;
return find(pai[a]);
}

int juntar(int a,int b){
find(pai[b])=find(pai[a]);
}



int main () {


int n,k;
scanf("%d %d",&n,&k);

int banco[n+5];
int a,b;
char c;
for(int i=1;i<=k,i++){
    scanf("%c %d %d",&c,&a,&b);
    if(c=='C'){
        if(find(pai[a])==find(pai[b])printf('S');
        else printf('N');
    }
    if(c=='F') pai(b)=find(pai[a]);
}






return 0;
}

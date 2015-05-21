#include <stdio.h>
#include <stdlib.h>

int main ()
{
int n;
scanf("%d",&n);

int v[n+10];

for(int i=1;i<=n;i++){scanf("%d",&v[i]);}
int p[n+10];
int z=1;
int x=1;
do{
	if(v[x]=v[x+1]){if(p[z]==0){p[z]++;}p[z]=p[z]+1;}else{z++;}
	
	x++;
	
	}while(x<n);
	
	
	
	
	do{if(p[z]>p[z-1]){p[z-1]=p[z];}
		
		
		
		
		z--;
		
		
		}while(z>1);



printf("%d",p[1]);



return 0;
}

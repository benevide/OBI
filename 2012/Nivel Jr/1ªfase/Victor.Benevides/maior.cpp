#include <stdio.h>
#include <stdlib.h>

int main ()
{
    
    
int n[110];

int i=1;

do{scanf("%d",&n[i]);
                    i++;
}while(n[i-1]>0);
 
 
do{ if(n[i-1]>n[i-2])
    {n[i-2]=n[i-1];}
                 
                 
               i--;  
                 
                 
                 
                 }while(i>2);


printf("%d",n[1]);





 return 0;   
}

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=1;
    int n;
    scanf ("%d",&n);
    int v[n+10];
    do{scanf("%d",&v[i]);i++;}while(i<=n);
    int f=1;
    int z=0;
    do{ if(v[i]>v[i+1]){
        v[i]=z;
        v[i+1]=v[i];
        z=v[i+1];}
          }while(i<=n);
          
        
        int q=0;
        do{if(v[n]>v[n+1])
        {v[n-1]=q;
        v[n]=v[n-1];
        q=v[n];
        n--;
               }}while(n<=1);
    
printf("%d",&v[1]);
    
    
    
    
    
    
    
    system ("pause");
 return 0;   
}

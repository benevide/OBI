#include <stdio.h>
#include <stdlib.h>
int main ()
{
 int C[101];
 int L[101];
 int n;
 int V[101];
 int i=1;
 int q=0;
    scanf ("%d",&n);
    
    do{scanf ("%d %d ",&L[i],&C[i]);
          
          if(L[i]>C[i])
          {
                 q=q+C[i];
           }
          
          
          
          
          
          
          i++;
          }while (i<n) ;
    
    
    
    
    printf ("%d",q);
    
    
    
    system ("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int l[110];
    int c[110];
    int n;
    int i=1;
    int q=0;//quebrou
    //l>c =derruba    
    scanf ("%d",&n);
    
    
        do{scanf("%d %d",&l[i],&c[i]);
        
        
          if(l[i]>c[i]) {
                        q=q+c[i];
                        }
          
          i++;
          }while(i<=n);
    
    
    
    
     printf("%d",q);
    
    system ("pause");
     return 0;   
}

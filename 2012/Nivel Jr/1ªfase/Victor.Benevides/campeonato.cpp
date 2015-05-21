#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int i=0;
   int cv,ce,cs,fv,fe,fs; 
    
    scanf("%d %d %d %d %d %d",&cv,&ce,&cs,&fv,&fe,&fs);
    
    
    if(((cv*3)+ce)>((fv*3)+fe)){printf("C");i++;return 0;}
    else{if(((fv*3)+fe)>((cv*3)+ce)){printf("F");i++;return 0;}}
      
    if(cs>fs && i==0){printf("C");i++;return 0;}
    else{if(fs>cs){printf("F");i++;return 0;}}
    if(i==0){printf("=");return 0;}
    

 return 0;   
}

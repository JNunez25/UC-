#include<stdio.h>

int main()
{
    int n=5,i=0,j=0,r=0,s;
    for(i=0;i<=n;i++){
     printf ("\n número %i",i);
    }while(j<=n){
      printf("\n valor de j: %i",j);
      j++;
     }do{
       printf("\n\nPulse un número diferente a 1 para : ",s);
       scanf("%i",&s);
      }while(s==1);
     
    return 0;
}
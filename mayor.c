#include<stdio.h>

int main()
{
    int n1,n2,n3;
    
    printf("Ingrese 3 números:\n ");
    scanf("%i %i %i",&n1,&n2,&n3);
    
    if((n1>n2)&&(n1>n3)){
      printf("El mayor es: %i",n1);
    }else if((n2>n1)&&(n2>n3)){
       printf("El mayor es: %i",n2);
     }else if((n3>n2)&&(n3>n1)){
        printf("El número mayor es: %i",n3);
      }else{
         printf("Son iguales");
       }
       
     return 0;
}
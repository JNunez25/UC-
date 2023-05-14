#include<stdio.h>

int main()
{
    int numero;
    printf("Ingrese un numero: ");
    scanf("%i",&numero);
    if(numero % 2 == 0){
      printf("El número es par");
    }else{
      printf("El número es impar");
    }
    
    return 0;
}
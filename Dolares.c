#include<stdio.h>

int main()
{
    int dolares;
    float resultado;
    printf("Ingrese una cantidad de dolares: ");
    scanf("%i",&dolares);
    resultado=(dolares/166.386);
    printf("La cantidad en euros es: %f", resultado);
    return 0;
}
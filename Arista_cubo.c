#include<stdio.h>
int main()
{
    float arista,volumen;
    int potencia;
    printf("Ingrese la arista del cubo:\n ");
    scanf("%f", &arista);
    volumen= ((arista*arista)*arista);
    printf("El volumen del cubo es del cubo es:\n %f metros cubicos",volumen);
    return 0;
}
#include<stdio.h>

int main(){
 float euros, cuenta, azucar, cafe, resto;
 printf("Ingrese la cantidad de euros que desea gastar:\n ");
 scanf("%f",&euros);
 cuenta=(euros/2);
 azucar=(cuenta/3);
 cuenta=(cuenta/3);
 cafe=(cuenta/0.72);
 cuenta=((euros/2)-cuenta);
 printf("Kilos de azúcar: %f Kilo de Cafe: %f Resto: %f", azucar, cafe, cuenta);
 return 0;

}

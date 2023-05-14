#include<stdio.h>

int main()
{
    int horas,minutos,segundos,c_horas,c_minutos,total; 
    printf("Ingrese una hora en formato Horas:Minutos:Segundos :\n ");
    printf("Ingrese la hora: ");
    scanf("%i",&horas);
    printf("Ingrese los minutos: ");
    scanf("%i",&minutos);
    printf("Ingrese los segúndos: ");
    scanf("%i",&segundos);
    c_horas=(horas*3600);
    c_minutos=(minutos*60);
    total=(c_horas+c_minutos+segundos);
    printf("El total de segundos es %i",total);
    return 0;
}
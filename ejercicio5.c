#include<stdio.h>

int main()
{
    int clientes,cantidad,i,etiqueta;
    do{
      printf("Ingrese la cantidad de clientes: ");
      scanf("%i",&clientes);
    }while(clientes<=0);
    for(i=0;i<=clientes;i++){
       do{
        printf("Ingrese la cantidad de productos comprados: ");
        scanf("%i",&cantidad);
       }while(cantidad<=0);
       do{
        printf("\nIngresea la etiqueta del producto 1 (morado) 2 (amarillo): ");
        scanf("%i",&etiqueta);
       }while((etiqueta!=1)||(etiqueta!=2));
    }
    printf("");
     return 0;
}
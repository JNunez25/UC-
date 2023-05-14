#include<stdio.h>

 int main()
{ 
  float nota_1, nota_2, nota_3,suma, nota_media;
  printf("Ingrese la nota de 3 examene:\n ");
  scanf("%f %f %f",&nota_1, &nota_2, &nota_3);
  suma=(nota_1+nota_2+nota_3);
  nota_media=(suma/3);
  printf("La nota media es:\n %f", nota_media);
  return 0;
}
#include<stdio.h>
int suma(int a, int b){
     int suma;
     suma=(a+b);
    return suma;
}
int resta(int a, int b){
     int resta;
     resta=(a-b);
    return resta;
    
}
int multi(int a, int b){
    int multi;
    multi=(a*b);
    return multi;
}
int divi(int a, int b){
   float divi;
    divi=(a/b);
    return divi;
}

int main()
{
    int a, b, c;
    do{
     printf("ingrese dos valores: ");
     scanf("%i %i",&a,&b);
    }while((a==0)||(b==0));
    do{
     printf("Ingrese: \n1 para la suma\n 2 para la resta\n 3 para la multiplicacion\n4 para la división\n: ");
     scanf("%i",&c);
    }while((c<1)||(c>4));
    switch(c){
     case 1: 
      printf("La suma es: %i",suma(a,b));
     break;
     case 2: 
      printf("La resta es: %i",resta(a,b));
     break;
     case 3: 
      printf("La multiplicacion es: %i",multi(a,b));
     break;
     case 4: 
      printf("La división es: %i",divi(a,b));
     break;


    } 
   return 0;
}
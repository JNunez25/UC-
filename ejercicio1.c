#include<stdio.h>
#include<stdbool.h>

int main()
{
   int num_1,num_2,des_1,des_2,cont_1,cont_2,i,j,num_3,num_4,salida;
   bool primo_1=true,primo_2=true;
   do{
    do{
     printf("Ingrese dos Números Enteros: ");
     scanf("%i %i",&num_1,&num_2);
     num_3=num_1;
     num_4=num_2;
    }while((num_1<=0)||(num_2<=0));
    if(num_1%2==0){
      printf("\n %i es par",num_1);
    }else{
      printf("\n %i es impar",num_1);
     }
    if(num_2%2==0){
      printf("\n %i es par",num_2);
    }else{
      printf("\n %i es impar",num_2);
     }
     cont_1=0;
     while(num_1!=0){
        des_1=(num_1%10);
         if(des_1==0){
           cont_1=cont_1+1;         
         }
        num_1=(num_1/10);
     }
     if(cont_1>0){
       printf("\n cantidad de ceros del primer numero %i",cont_1);
     }
    cont_2=0;
     while(num_2!=0){
        des_2=(num_2%10);
         if(des_2==0){
           cont_2=cont_2+1;         
         }
        num_2=(num_2/10);
     }
     if(cont_2>0){
       printf("\n cantidad de ceros del segundo numero %i",cont_2);
     }
     for(i=2;i<num_3;i++){
        if(num_3%i==0){
          primo_1=false;
        }
     }
     if(primo_1==true){
       printf("\n %i es primo",num_3);
     }else{
        printf("\n %i no es primo",num_3);
      }
     for(j=2;j<num_4;j++){
        if(num_4%j==0){
          primo_2=false;
        }
     }
     if(primo_2==true){
       printf("\n %i es primo",num_4);
     }else{
        printf("\n %i no es primo",num_4);
      }

     printf("\nIngrese el número 1 para salir: ");
     scanf("%i",&salida);
   }while(salida!=1);
    return 0;
}
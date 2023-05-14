#include<stdio.h>

int main()
{
    int num_1,aux_1,num_2,aux_2,mod,des,inv,cont_1,cont_2;
    do{
    printf("Ingrese dos números: ");
    scanf("%i %i",&num_1,&num_2);
    }while((num_1<=0)||(num_2<=0));
    aux_1=num_1;
    aux_2=num_2;
    if(num_1>99){
      inv=0;
      while(num_1!=0){
           mod=(num_1%10);
           num_1=(num_1/10);
           inv=((inv*10)+mod);
      }
      printf("\n %i",inv);
    }
    if(num_2>99){
      inv=0;
      while(num_2!=0){
           mod=(num_2%10);
           num_2=(num_2/10);
           inv=((inv*10)+mod);
      }
      printf("\n %i",inv);
    }
    cont_1=0;
    cont_2=0;
    while(((aux_1)&&(aux_2))!=0){
         mod=(aux_1%10);
         aux_1=(aux_1/10);
         des=(aux_2%10);
         aux_2=(aux_2/10);
         if((mod==3)||(des==3)){
           cont_1++;
         }
         if((mod==5)||(des==5)){
           cont_2++;
         }
    }
    
    printf("\n Cantidad de 3: %i",cont_1);
    printf("\n Cantidad de 5: %i",cont_2);
    return 0;
}
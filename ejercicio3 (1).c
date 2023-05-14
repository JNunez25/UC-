#include<stdio.h>

int main()
{
    int num_1,num_2,i,des,cont;
    do{
      printf("Ingrese dos números: ");
      scanf("%i %i",&num_1,&num_2);
    }while((num_1<=0)||(num_2<=0));
    cont=0;
    for(i=1;i<num_1;i++){
       des=(num_1%i);
       if(des==0){
         cont=(cont+i);
       }
    }
    if(cont==num_2){
      printf("\n %i es amigo",num_1);
    }else{
         printf("\n %i no es amigo",num_1);
     }
    cont=0;
    for(i=1;i<num_2;i++){
       des=(num_2%i);
       if(des==0){
         cont=(cont+i);
       }
    }
    if(cont==num_1){
      printf("\n %i es amigo",num_2);
    }else{
         printf("\n %i no es amigo",num_2);
     }

     return 0;
}
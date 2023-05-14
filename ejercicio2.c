#include<stdio.h>
#define lcedula 1000000
int main()
{
   int c_pacientes,i=1,f=1,m=1,e=1,sexo,femenino,masculino,dia,mes,año,dian,mesn,añon,edad,edad2,cedula,op1,descuento1,descuento2,salida; 
   do{
    do{
     printf("Ingrese la cantidad de pacientes: ");
     scanf ("%i",&c_pacientes);
    }while(c_pacientes<=0);
      do{
         printf("Ingrese el día actúal: ");
         scanf("%i",&dia);
      }while((dia<=0)||(dia>31));
        do{
          printf("Ingrese el mes actúal: ");
          scanf("%i",&mes);
        }while((mes<=0)||(mes>12));
          do{
           printf("Ingrese el año actúal: ");
           scanf("%i",&año);
          }while((año<1910)||(año>2023));
    for(i=1;i<=(c_pacientes);i++){
      do{
       printf("\nIngrese 1 para femenino 2 m para masculino: ");
       scanf ("%i",&sexo);
      
       if(sexo==1){
         femenino=(f++);
       }else if(sexo==2){
         masculino=(m++);
        }
      }while((sexo!=1)&&(sexo!=2));
        do{
          printf("Ingrese el día de nacimiento: ");
          scanf("%i",&dian);
        }while((dian<=0)||(dian>31));
          do{
           printf("Ingrese el mes de nacimiento: ");
           scanf("%i",&mesn);
          }while((mesn<=0)||(mesn>12));
            do{
             printf("Ingrese el año de nacimiento: ");
             scanf("%i",&añon);
            }while((añon<1910)||(añon>2023));
              edad=(año-añon-1);
              if(mes>mesn){
               edad=(edad+1);
              }else if(mes=mesn){
                if(dia>=dian){
                  edad=(edad+1);
                }
              }
              if(edad>60){
               edad2=(e++);
              }
              do{
               printf("Ingrese el número de cédula: ");
               scanf("%i",&cedula);
              }while(cedula<=lcedula);
              do{
                op1=(cedula%10);
                cedula=(cedula/10);
              }while(op1>10);
                if((op1%2==0)&&(sexo==1)){
                  printf("Paciente tiene 15 porciento de descuento");      
                }
                if((sexo==2)&&(edad>60)){
                  printf("Paciente: tiene 30 porciento de descuento");
                } 
       }
       printf("\nFemenino: %i Masculino: %i",femenino,masculino);
       printf("\nCantidad de pacientes mayores de edad: %i",edad2);
       printf("\n Ingrese 1 para salir: ");
       scanf("%i",&salida);
    }while(salida!=1);     
    return 0;
}
#include<stdio.h>

int main()
{
    int v1,v2,n;
    printf("Ingrese dos números:\n ");
    scanf("%i %i",&v1,&v2);
    n=v1;
    v1=v2;
    printf("%i %i",v1,n);
    return 0;
}
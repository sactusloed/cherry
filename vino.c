#include <stdio.h>
int main(void)
{
    float kg,b,c,co,cg;
    char l;

    printf("TAMAÑOS [1]NORMAL,[2]GRANDE\n");
    printf("TIPO [a]A,[b]B\n");
    printf("SELECCIONE EL TAMAÑO Y TIPO\n");
    scanf("%f %c",&b,&l);

    printf("digite el precio del kilo de uva\n");
    scanf("%f",&kg);

    printf("digite la cantidad de kilos comprada\n");
    scanf("%f",&c);

    if (b==1 && c=='a')
    {
        cg=kg+.4;
        co=(kg*c)+cg;
        printf("costo total:%f \n",co);


    }else if (b==1 && c=='b')
    {
        cg=kg+.30;
        co=(kg*c)+cg;
        printf("costo total:%f \n",co);

    }else if (b==2 && c=='a')
    {
        cg=kg-.30;
        co=(kg*c)+cg;
        printf("costo total:%f \n",co);
    }
    else{
        cg=kg-.50;
        co=(kg*c)+cg;
        printf("costo total:%f \n",co);   
    }
     return 0;
}
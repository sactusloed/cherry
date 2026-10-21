#include <stdio.h>
int main(void)
{
    int p,b;
    float k,ct,pc;
    
    printf("digite la  cantidad de personas\n");
    scanf("%d",&p);
    
    if (p>20)
    {
        printf("elija la clase de autobus para abordar\n"); 
        printf("[1]BUS  A\n");
        printf("[2]BUS B\n" );
        printf("[3]BUS C\n");
        scanf("%d",&b);
        printf("digite el kilometraje a viajar");
        scanf("%f",&k);

    switch (b)
    {
    case 1:
        //$2
        pc=p*2;
        ct=pc*k;
        printf("el costo de persona es:%f \n",pc);
        printf("el costo total es:%f \n",ct);
        break;

    case 2:
        //$2.50
        pc=p*2.50;
        ct=pc*k;
        printf("el costo por persona es:%f \n",pc);
        printf("el costo total es:%f \n",ct);
        break;

    default:
        //$3
        pc=p*3;
        ct=pc*k;
        printf("el costo por persona es:%f \n",pc);
        printf("el costo total es:%f \n",ct);
        break;

    }
    printf("GRACIAS POR PREFERIR NUESTROS SERVICIOS");

    }
    else
    {
        printf("MINIMO DE PERSONAS NO ALCANZADO");
    }
    
    return 0;
}

#include <stdio.h>
int main(void)
{
    int p;
    float c;

    printf("digite la cantidad de persona\n");
    scanf("%d",&p);

    if (p<=200)
    {
        printf("el costo por platillo es de $95\n");
        c=p*95;
        printf("el costo total es:%f",c);
    }
    else 
    if (p>200 && p<=300)
    {
        printf("el costo por platillo es de $85\n");
        c=p*85;
        printf("el costo total es:%f",c);
    }
    else
    {
        printf("el costo por platillo es de $75\n");
        c=p*75;
        printf("el costo total es:%f",c);
    }
    
    
    return 0;
}

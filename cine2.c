#include<stdio.h>
int main(void)
{
    int ed;
    int edm;
    
    printf("digite su edad\n");
    scanf("%i",&ed);
    printf("digite la edad minima\n");
    scanf("%i",&edm);

    if (ed>=edm)
    {
        printf("puedes acceder a la pelicula 8v\n");
    }else
    {
        printf("no puedes acceder a la pelicula >8V\n");
    }
    
    return 0;
}
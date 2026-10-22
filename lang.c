#include <stdio.h>
int main (void){

    int personas;
    float costo,total;

    printf("ingrese el numero de personas\n");
    scanf("%d",&personas);

    if(personas<0){
        printf("numero de personas no valido\n");
    }
    else if(personas<=200){
        costo =95;
        printf("el costo por persona es de: $%.2f\n", costo);
        total = personas * costo;
        printf("costo total: $%.2f\n", total);
    }
    else if(personas>200&&personas<300){
        costo =85;
        printf("el costo por persona es de: $%.2f\n",costo);
        total = personas * costo;
        printf("costo total: $%.2f\n", total);
    }
    else{
        costo =75;
        printf("el costo por persona es: $%.2f\n", costo);
        total = personas * costo;
        printf("costo total: $%.2f", total);
    }
    return 0;

}
/* una persona abona el 15% de sus salario 
semanal el 20% a servicios y rpoductos 50% a comidas y el 15% a diversion 
*/


#include <stdio.h>

int main(void) {
    float ss, sm;
    float ps, c, d, aa;

    printf("Ingrese salario semanal: ");
    scanf("%f", &ss);

    sm = ss * 4;
    aa = sm * 0.15;
    ps = sm * 0.20;
    c  = sm * 0.50;
    d  = sm * 0.15;

    printf("Total mes: %.2f\n", sm);
    printf("Abono: %.2f\n", aa);
    printf("Servicios: %.2f\n", ps);
    printf("Comida: %.2f\n", c);
    printf("Diversion: %.2f\n", d);

    return 0;
}
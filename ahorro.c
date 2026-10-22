/*una persona ahorr el %15 de su salario semanal,
el %20 de sus pagos y servicios el %50 a comidas y el %15 
para diversion
*/ 
#include <stdio.h>
int main(void)
{
    float s,ss,ps,c,div;
    printf("digite su salario semanal\n");
    scanf("%f", &s);
    ss=s*0.15*4;
    ps=s*0.20*4;
    c=s*0.50*4;
    div=s*0.15*4;
    printf("salario%f\n",ss);
    printf("productos y servicios%f\n",ps);
    printf("comida%f\n",c);
    printf("diversion%f\n",div);
    
    return 0;
}

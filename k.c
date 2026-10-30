/* un sistema electrico de medicion de temperatura proporciona incrementos de 100 minoivolts por cada grado centigrado para indicar la temperatura
el rango de medicion va de -3 volts hasta 10 volts. 
tome en cuenta que las medidas de 3v a 1v son concideradas frias
las medidas de 1v a 4v son consideradas templadas y de 4v a 10v calientes. 
haga un programa en c que dada la entrada en volts  indique cual es la temperatura censada*/
#include <stdio.h>
int main(void)
{
    float v,c,t;
    
    printf("Digite la cantidad de incremento por cada grado centigrado\n");
    scanf("%f",&c);

    t=(c/100);

    if (t >= -3 && t<=1 )
    {
        printf("Temperatura fria\n");
        printf("Volts:%f \n",t);
    }else if (t>1 && t<=4)
    {
        printf("temperatura templada\n");
        printf("Volts:%f \n",t);
    }else
    {
        printf("temperatura caliente\n");
        printf("Volts:%f\n",t);
    }
    
    return 0;
}
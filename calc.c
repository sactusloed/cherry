#include <stdio.h>
int main(void)
{
    float a,b,s,r,mu,div;

    printf("digite el primer numero\n");
    scanf("%f",&a);
    printf("digite el segundo numero\n");
    scanf("%f",&b);

    s=a+b;
    r=a-b;
    mu=a*b;
    div=a/b;
    printf("la suma es:%f\n",s);
    printf("la resta es:%f\n",r);
    printf("la multiplicacion es:%f\n",mu);
    printf("la division  es:%f\n",div);


    return 0;
}

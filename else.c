#include<stdio.h>
int main(void)
{
    float ni;

    printf("digita un numero\n");
    scanf("%f",&ni);

    if (ni<=20)
    {
        printf("estas en la zona 1");
    }
     else if(ni>=21 && ni<=40)
    {
        printf("estas en la zona 2");
    }
    else
    {
        printf("estas en la zona 3");
    }
    
    
    return 0;
}

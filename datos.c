#include <stdio.h>
int main(void)
{
    int edd;
    char dt;
    float est;

    printf("escribe tu edad\n");
    scanf("%d", &edd);
    printf("escribe un caracter\n");
    scanf("%c", dt);
    printf("escribe tu estatura\n");
    scanf("%f", &est);
    printf("tu edad es %d\n", edd);
    printf("tu edad es %c\n", dt);
    printf("tu edad es %.2f\n", est);



    return 0;
}

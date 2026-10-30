#include<stdio.h>
int main(void)
{
    int d,s,ts;
    float p,cos;

    printf("Digite el tipo de servicio\n");
    printf("[1]ESTANDAR  [2]EXPRES\n");
    scanf("%d",&ts);

    switch (ts)
    {
    case 1:
        printf("Digite el peso del paquete\n");
        scanf("%f",&p);
        if (p>0 && p<=1)
        {
            printf("Digite el destino\n");
            printf("[1]LOCAL [2]NACIONAL [3]INTERNACIONAL\n");
            scanf("%d",&d);
            if (d==1)
            {
                cos=80;
                printf("El costo por envio es:%f\n",cos);
            }else if (d==2)
            {
                cos=80+(80*0.25);
                printf("El costo por envio es:%f\n",cos);
            }else if (d==3)
            {
                cos=80+(80*0.60);
                printf("El costo por envio es:%f\n",cos);
            }else
            {
                printf("DATO ERRONEO\n");
            }
            //fin 1k
        }else if (p>1 && p<=5)
        {
            printf("Digite el destino\n");
            printf("[1]LOCAL [2]NACIONAL [3]INTERNACIONAL\n");
            scanf("%d",&d);
            if (d==1)
            {
                cos=120;
                printf("El costo por envio es:%f\n",cos);
            }else if (d==2)
            {
                cos=120+(120*0.25);
                printf("El costo por envio es:%f\n",cos);
            }else if (d==3)
            {
                cos=120+(120*0.60);
                printf("El costo por envio es:%f\n",cos);
            }else
            {
                printf("DATO ERRONEO\n");
            }
        }else if (p>5 && p<=10)
        {
            printf("Digite el destino\n");
            printf("[1]LOCAL [2]NACIONAL [3]INTERNACIONAL\n");
            scanf("%d",&d);
            if (d==1)
            {
                cos=200;
                printf("El costo por envio es:%f\n",cos);
            }else if (d==2)
            {
                cos=200+(200*0.25);
                printf("El costo por envio es:%f\n",cos);
            }else if (d==3)
            {
                cos=200+(200*0.60);
                printf("El costo por envio es:%f\n",cos);
            }else
            {
                printf("DATO ERRONEO\n");
            }
        }else if (p>10)
        {
            printf("Digite el destino\n");
            printf("[1]LOCAL [2]NACIONAL [3]INTERNACIONAL\n");
            scanf("%d",&d);
            if (d==1)
            {
                cos=300;
                printf("El costo por envio es:%f\n",cos);
            }else if (d==2)
            {
                cos=300+(300*0.25);
                printf("El costo por envio es:%f\n",cos);
            }else if (d==3)
            {
                cos=300+(300*0.60);
                printf("El costo por envio es:%f\n",cos);
            }else
            {
                printf("DATO ERRONEO\n"); 
        }
        
        break;

        case 2:
        printf("Digite el peso del paquete\n");
        scanf("%f",&p);
        if (p>0 && p<=1)
        {
            printf("Digite el destino\n");
            printf("[1]LOCAL [2]NACIONAL [3]INTERNACIONAL\n");
            scanf("%d",&d);
            if (d==1)
            {
                cos=80-(80*0.05);
                printf("El costo por envio es:%f\n",cos);
            }else if (d==2)
            {
                cos=80+(80*0.25)+(80*0.30);
                printf("El costo por envio es:%f\n",cos);
            }else if (d==3)
            {
                cos=80+(80*0.60)+(80*0.30);
                printf("El costo por envio es:%f\n",cos);
            }else
            {
                printf("DATO ERRONEO\n");
            }
            //fin 1k
        }else if (p>1 && p<=5)
        {
            printf("Digite el destino\n");
            printf("[1]LOCAL [2]NACIONAL [3]INTERNACIONAL\n");
            scanf("%d",&d);
            if (d==1)
            {
                cos=120+(120*0.30);
                printf("El costo por envio es:%f\n",cos);
            }else if (d==2)
            {
                cos=120+(120*0.25)+(120*0.30);
                printf("El costo por envio es:%f\n",cos);
            }else if (d==3)
            {
                cos=120+(120*0.60)+(120*0.30);
                printf("El costo por envio es:%f\n",cos);
            }else
            {
                printf("DATO ERRONEO\n");
            }
        }else if (p>5 && p<=10)
        {
            printf("Digite el destino\n");
            printf("[1]LOCAL [2]NACIONAL [3]INTERNACIONAL\n");
            scanf("%d",&d);
            if (d==1)
            {
                cos=200+(200*0.30);
                printf("El costo por envio es:%f\n",cos);
            }else if (d==2)
            {
                cos=200+(200*0.25)+(200*0.30);
                printf("El costo por envio es:%f\n",cos);
            }else if (d==3)
            {
                cos=200+(200*0.60)+(200*0.30);
                printf("El costo por envio es:%f\n",cos);
            }else
            {
                printf("DATO ERRONEO\n");
            }
        }else if (p>10)
        {
            printf("Digite el destino\n");
            printf("[1]LOCAL [2]NACIONAL [3]INTERNACIONAL\n");
            scanf("%d",&d);
            if (d==1)
            {
                cos=300+(300*0.30);
                printf("El costo por envio es:%f\n",cos);
            }else if (d==2)
            {
                cos=300+(300*0.25)+(300*0.30);
                printf("El costo por envio es:%f\n",cos);
            }else if (d==3)
            {
                cos=300+(300*0.60)+(300*0.30);
                printf("El costo por envio es:%f\n",cos);
            }else
            {
                printf("DATO ERRONEO\n");
            }
        }
    default:
        printf("GRACIAS POR PREFERIR NUESTROS SERVICIOS\n");
        break;
    }
}
    return 0;
}

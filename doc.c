#include <stdio.h>
int main(void)
{
    int c,t,dt,pg;
    int t3="200";
    int t4="150";
    int t5="100";
    int t6="50";

    printf("Digite su numero de cita \n");
    scanf("%d",&c);

    if (c>1 && c<=3)
    {
            printf("Usted recibe tratamiento\n");
            scanf("%d",&t);
        if (t==1)
        {
            printf("Cuantos dias de tratamiento recibira\n");
            scanf("%d",&dt);
            ct=dt*50;
            pg=ct+200;
            printf("Usted pagara por tratamiento %d:",ct);
            printf("Usted pagara en total %d:",pg);
        }else
        {
            printf("Usted pagara en total %d:",t3);
        }
        
    }else if (c>4 && c<=5)
    {
        printf("Usted recibe tratamiento\n");
            scanf("%d",&t);
        if (t==1)
        {
            printf("Cuantos dias de tratamiento recibira\n");
            scanf("%d",&dt);
            ct=dt*50;
            pg=ct+150;
            printf("Usted pagara por tratamiento %d:",ct);
            printf("Usted pagara en total %d:",pg);
        }else
        {
            printf("Usted pagara en total %d:",t4);
        }
    }else if (c>6 && <=8)
    {
        printf("Usted recibe tratamiento\n");
            scanf("%d",&t);
        if (t==1)
        {
            printf("Cuantos dias de tratamiento recibira\n");
            scanf("%d",&dt);
            ct=dt*50;
            pg=ct+100;
            printf("Usted pagara por tratamiento %d:",ct);
            printf("Usted pagara en total %d:",pg);
        }else
        {
            printf("Usted pagara en total %d:",t5);
        }
    }else
    {
         printf("Usted recibe tratamiento\n");
         scanf("%d",&t);
        if (t==1)
        {
            printf("Cuantos dias de tratamiento recibira\n");
            scanf("%d",&dt);
            ct=dt*50;
            pg=ct+50;
            printf("Usted pagara por tratamiento %d:",ct);
            printf("Usted pagara en total %d:",pg);
        }else
        {
            printf("Usted pagara en total %d:",t6);
        }

    }
    
    
    



    return 0;
}
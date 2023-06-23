#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#define DELAY 10000
#define maxsize 100

//promedio
float promedioepico()
{
    int numeron=0;
    float c=0,d=0,e=0,promedio=0;
    printf("ingrese el numero de notas");
    scanf("%i",&numeron);
        for (int i = 0; i < numeron; i++)
        {
           printf("inserte nota");
           scanf("%f",&c);
           e=c+d;
           d=e;
        }
    promedio = d/numeron;

    printf("el promedio es %f", promedio);
    return (promedio);

}
//positivos
int getnumeromas(char label[])
{
    int numero=0;
    char opc[2];
    do{
        printf("%s",label);
        gets(opc);
        sscanf(opc,"%i",&numero);
    } while (numero<=0);
    fflush(stdin);
    fflush(stdout);
    return numero;
}

//loading

void loading()
    {
    int  contadorc=5;
    char c[5] = "\\|/-";
        for (int i = 0; i <= 100; i++)
        {
            printf("\r %c %d %%",c[i%contadorc],i);
            usleep(DELAY);
        }
    }




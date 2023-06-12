#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#define DELAY 10000
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

char getcharx(char *labbel)
{ 
    char palabra[5];
    printf("%s",labbel);
    scanf("%s",&palabra);
    return *palabra;
}

//positivos
int getnumeromas(char *labbel)
{
    int numero=0;
    char opc[2];
    do{
    printf("%s",labbel);
    gets(opc);
    sscanf(opc,"%i",&numero);
    } while (numero<=0);

    return numero;
}

//loading

void loading()
    {
    int  contadorc=5;
    char c[5] = "\\|/- ";
        for (int i = 0; i <= 100; i++)
        {
            printf("\r %c %d %%",c[i%contadorc],i);
            usleep(DELAY);
        }
    }






//int menu()
//{
  ////  int p=0;
    //char b=' ';  /**char letra=" */
////do{
//// printf("Bienvenidos a galletas Angulo :3\n   \tMENU  \n1.pasteles \n2. helados \n3.pastas \n4.galletas");
///printf("\n seleccione un producto\n ");
//scanf("%d",&p);
//} while (p>3 || p<1 );//
#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "iostream"
#include "string"
#include "string.h"
#include "algorithm"
#include <random>
#include "unistd.h"
#include "stdlib.h"
#include <thread>

#define DELAY 10000
#define maxsize 100
using namespace std;

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
int getnumeromas(char* label[])
{
    int numero=0;
    char opc[1000];
    do{
        printf("%s",label);
        gets(opc);
        sscanf(opc,"%i",&numero);
    } while (numero<=0);
    fflush(stdin);
    fflush(stdout);
    return numero;
}

int getnumeromass(char label[])
{
    int numero=0;
    char opc[1000];
    do{
        printf("%s",label);
        gets(opc);
        sscanf(opc,"%i",&numero);
    } while (numero<=0 || numero>3);
    fflush(stdin);
    fflush(stdout);
    return numero;
}

//loading

void loadingp()
    {
    int  contadorc=5;
    char c[5] = "\\|/-";
        for (int i = 0; i <= 100; i++)
        {
            printf("\r %c %d %%",c[i%contadorc],i);
            usleep(DELAY);
        }
        printf("/n");
    }

int calculo(int prd,int prd2)
{
return 0;
}


float sumarNumeros() 
{
    int cantidad;
    float suma = 0,numero=0 ;

    cout << "Ingrese la cantidad de números que desea sumar: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) 
    {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> numero;
        suma += numero;
    }

     cout << "La suma de los números ingresados es: " << suma << endl;
     return 0;
}


float multiplicarNumeros() 
{
    int cantidad;
    double multiplicacion = 0,numero=0 ;

    cout << "Ingrese la cantidad de números que desea sumar: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) 
    {
        cout << "Ingrese el número " << (i + 1) << ": ";
        cin >> numero;
        multiplicacion *= numero;
    }

     cout << "La suma de los números ingresados es: " << multiplicacion << endl;
     return 0;
}

int fibonnacci1()
{
    int a=0,b=0,c=0,i=0,n=0;
   
    printf("cuantos terminos quieres");
    scanf("%d",&n);
while (i<n)
{
    for (int s = 0; s < c; s++)
    {
        printf((i%2==0)?"+":"-");
        
    }
    
    printf("%d",c);
    c=a+b;
    a=b;
    b=c;
    printf("\n");
}

    return 0;
}

void mayoromenor(float a,float b, float c)
{
    if (a>b && a>c)
      {
       printf("el mayor es %f",a);
       exit(0);
      }
        if (b>c && b>a)
      {
       printf("el mayor es %f",b);
       exit(0);
      }
    if (c>b && c>a)
      {
       printf("el mayor es %f",c);
       exit(0);
      }
      
      if (a==b && a==c)
      {
       printf("todos son iguales");
       exit(0);
      }
}

void mayormenorbase()
{
    float a=0,b=0,c=0;

        printf("elija un numero real");
        scanf("%f",&a);
        printf("elija un numero real");
        scanf("%f",&b);
        printf("elija un numero real");
        scanf("%f",&c);

     mayoromenor(a,b,c);
}

void iniciales()
{
    int termino= 0;
        printf("elija numero de termino");
        scanf("%i",&termino);

        for (int  v= 1; v <= termino; v++)
        {
           for (int  h=1; h <= termino; h++)
             {
                 if ((v==1)||
                 (h<termino/2 && v==termino)||
                 (v==termino && h==1)||
                 (v==termino-1 && h==1)||
                 (h==termino/2)
                 )
                printf(" *");
                else
                printf("  ");
             }
              for (int  ha=1; ha <= termino; ha++)
             {
                 if ((v==1)||(ha==1)||
                 (ha==1 && v==termino)||
                 (ha==termino)||
                 (v==termino/2 )
                 )
                 
                printf(" *");
                else
                printf("  ");
             }  
           printf("\n");
}
        }





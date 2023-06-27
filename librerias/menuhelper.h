#include "iostream"
#include "string"
#include "string.h"
#include "algorithm"
#include <random>
#include "unistd.h"
#include "stdlib.h"
#include "../lib/patColor.h"
using namespace std;
#define DELAY 10000
enum items {GAL=1,PAS,TOR,HEL,BEB };
enum items1 {CHI=1,AVE,POL};
enum items2 {MIL=1,ORE,PAT};
enum items3 {CHOC=1,TRE,RED};
enum items4 {CHOCO=1,SAL,FRE};
enum items5 {COCA=1,CAF,LEC};
int getnumeromas00()
{
    int numero=0;
    char opc[1000];
    do{
        printf("\nQue cantidad del producto desea?: ");
        gets(opc);
        sscanf(opc,"%i",&numero);
    } while (numero<=0);
    fflush(stdin);
    fflush(stdout);
    return numero;
}

int getnumeromasp2()
{
    int numero=0;
    char opc[10000];
    printf("\n\telige el producto:");
    do{
        
        gets(opc);
        sscanf(opc,"%i",&numero);
    } while (numero<=0 || numero>=5);
    fflush(stdin);
    fflush(stdout);
    return numero;
}
int getnumeromasp1()
{
    int numero=0;
    char opc[10000];
    setTextColor(textColorGreen);
    printf("=====BIENVENIDO A GALLETAS ANGULO===== \n1.-Galletas                           \n2.-Pastas                             \n3.-Tortas                             \n4.-Helados                             \n5.-Bebidas                            \n\telige el producto: ");
    do{
        
        gets(opc);
        sscanf(opc,"%i",&numero);
    } while (numero<=0 || numero>5);
    fflush(stdin);
    fflush(stdout);
    return numero;
}

int multiplicar(float precio)
{
   float total=0;
   int cantidad=getnumeromas00();

   total=cantidad*precio;

   cout <<"\n el valor a pagar es: "<< total<< "$$" << endl;

return 0;



}


void menuepico()
{
switch (getnumeromasp1())
{
case GAL: cout << " 1.-Chispas   $0.50\n 2.-avena   $0.50\n 3.-polvorosas   $0.75" << endl ;
          switch ( getnumeromasp2())
          {
          case CHI: multiplicar(0.5);
                    break;
          case AVE: multiplicar(0.5);
                    break;
          case POL: multiplicar(0.75);
                    break;
          default:
                    break;
          }
         break;
case PAS: cout <<" 1.-Milhojas   $0.50\n 2.-Orejitas   $0.50\n 3.-Paticas    $0.75" << endl ;
switch ( getnumeromasp2())
          {
          case MIL: multiplicar(0.5);
                    break;
          case ORE: multiplicar(0.5);
                    break;
          case PAT: multiplicar(1.2);
                    break;
          default:
                    break;
          }
            break;
case TOR: cout << " 1.-Chocolate   $0.50\n 2.-Tresleches  $0.50\n 3.-RedVelvet   $0.75" << endl ;
switch ( getnumeromasp2())
          {
          case CHOC: multiplicar(0.5);
                    break;
          case TRE: multiplicar(0.5);
                    break;
          case RED: multiplicar(1.2);
                    break;
          default:
            break;
          }

         break;
case HEL: cout << " 1.-Chocolate   $0.50\n 2.-Salcedo   $0.50\n 3.-Fresa   $0.75" << endl ;
switch ( getnumeromasp2())
          {
          case CHOCO: multiplicar(0.5);
                    break;
          case SAL: multiplicar(0.5);
                    break;
          case FRE: multiplicar(1.2);
                    break;
          default:
                    break;
          }

         break;
case BEB: cout << " 1.-Coca cola   $0.50\n 2.-Cafe        $0.50\n 3.-Leche       $0.75" << endl ;
switch ( getnumeromasp2())
          {
          case COCA: multiplicar(0.5);
                    break;
          case CAF: multiplicar(0.5);
                    break;
          case LEC: multiplicar(1.2);
                    break;
          default:
            break;
          }

         break;
default:
    break;
}

} 
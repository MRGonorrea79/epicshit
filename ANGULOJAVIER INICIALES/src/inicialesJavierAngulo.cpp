#include <iostream>
using namespace std;
#include "../lib/patColor.h"
#include "../lib/patUtility.h"
#include "../lib/utilitario.h"
#define FIL 5
#define COL 5

int getnumeromas1()
{
    int numero=0;
    char opc[10000];
    printf("\n\telige un numero de niveles: ");
    do{
        
        gets(opc);
        sscanf(opc,"%i",&numero);
    } while (numero<=0);
    fflush(stdin);
    fflush(stdout);
    return numero;
}
    
 
void Inicialesjavo(int tam)
{
    char mJ[tam][tam];
    char mA[tam][tam];
    char mV[tam][tam];
    for (int f = 1; f <= tam; f++)
    {
        for (int c = 1; c <= tam; c++)
            if ((f==1)||(c<tam/2 && f==tam)||(f==tam && c==1)||(f==tam-1 && c==1)||(c==tam/2)) 
            mJ[f][c] = '*';
            else
            mJ[f][c] = ' ';
    }
    for (int f = 1; f <= tam; f++)
    {
        for (int c = 1; c <= tam; c++)
            if ((f==1)||(c==1)||(c==1 && f==tam)||(c==tam)||(f==tam/2 )) 
            mA[f][c] = '*';
            else
            mA[f][c] = ' ';
    } 
    for (int f = 1; f <= tam; f++)
    {
        setTextColor(textColorBlue);
        for (int c = 1; c <= tam; c++)
             cout << mJ[f][c];
             cout <<"   ";
        setTextColor(textColorRed);
        for (int c = 1; c <= tam; c++)
             cout << mA[f][c];
             cout <<endl;
    }
 
}
 
int main()
{
    
    int nivel= getnumeromas1();
    Inicialesjavo(nivel);
    return 0;
}
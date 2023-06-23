#include "iostream"
#include "stdlib.h"
#include "unistd.h"
#include "../lib/operacionesbasicas.h"
#include "../lib/Anguloseries.h"
#include "../lib/operacionesextras.h"
#include "strings.h"
#include "../lib/patColor.h"
#include "../lib/patUtility.h"
#include "../lib/utilitario.h"
#include "../lib/menus.h"
using namespace std;

int main()
{
    clearTerminal();
    setColor(47,37);
    setTextColor(textColorYellow);
    cout << "=====BIENVENIDO A GALLETAS ANGULO=====" << endl ;
    setTextColor(textColorBlue);
    cout << "1.-Galletas                           \n2.-Pastas                             \n3.-Tortas                             \n4.-Helados                             \n5.-Bebidas                            " << endl ;
    int prd = getnumeromas1();
    setTextColor(textColorBlue);
    menuepico(prd);
    int prd2 = getnumeromas1();
    //printf("%d %d",prd,prd2);
    setTextColor(textColorWhite);
    //clearTerminal();
    int ctd =getnumeromas2();
    //loadingp();
    int calculo(prd,prd2);

    clearTerminal();
    return 0;
    }
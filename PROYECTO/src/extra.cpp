#include "iostream"
#include <string.h>
#include "../lib/operacionesextras.h"
#include "../lib/operacionesbasicas.h"

int main()
{   
    int niveles  = getnumeromas1();
    string palabras= getpalabra();
    int numero =getnumeromas2();
    
    loading() ;
    printf("\n");

  if (numero==1)
  {
   Anguloseriefigura09(niveles);
  }

   if(numero==2)
   {
   Anguloseriepalabra01(palabras);
   Anguloseriepalabra02(palabras);
   Anguloseriepalabra03(palabras);
   Anguloseriepalabra04(palabras);
   Anguloseriepalabra05(palabras);
   Anguloseriepalabra06(palabras);
   Anguloseriepalabra07(palabras);
   Anguloseriepalabra08(palabras);
   Anguloseriepalabra09(palabras);
   }
}

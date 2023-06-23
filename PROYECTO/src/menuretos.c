#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include "../lib/operacionesbasicas.h"
#include "../lib/series.h"
#include <string.h>
#include "strings.h"



int main()
{
   
    int terminos = getnumeromas("\n\t elija el numero de terminos: ");
    int niveles  = getnumeromas("\n\t elija el numero de niveles: ");
    
    int numero =getnumeromas("\t MENU POLIRETOS\n1.series numericas\n2.series de caracteres\n3.figuras\n4.frase\nelija una opcion");

   
    loading();

if(numero==1)
    {
        Anguloseriefibonacci01(terminos);printf("\n\n");
        Anguloserie02(terminos);printf("\n\n");
        Anguloserie03(terminos);printf("\n\n");
        Anguloserie04(terminos);printf("\n\n");
        Anguloserie05(terminos);printf("\n\n");
        Anguloserie06(terminos);printf("\n\n");
        Anguloserie07(terminos);printf("\n\n");
        Anguloserie08(terminos);printf("\n\n");
        Anguloserie09(terminos);printf("\n\n");
        Anguloserie10(terminos);printf("\n\n");
        Anguloserie11(terminos);printf("\n\n");
    }  

    if(numero==2)
    {

        Anguloseriec01(terminos);printf("\n\n");
        Anguloseriec02(terminos);printf("\n\n");
        Anguloseriec03(terminos);printf("\n\n");
        Anguloseriec04(terminos);printf("\n\n");
        Anguloseriec05(terminos);printf("\n\n");
        Anguloseriec06(terminos);printf("\n\n");
        Anguloseriec07(terminos);printf("\n\n");
        Anguloseriec08(terminos);printf("\n\n");
        Anguloseriec09(terminos);printf("\n\n");
        Anguloseriec10(terminos);printf("\n\n");
        Anguloseriec11(terminos);printf("\n\n");
    }  
       
        if(numero==3)
    {

        Anguloseriefigura01(niveles);printf("\n\n");
        Anguloseriefigura02(niveles);printf("\n\n");
        Anguloseriefigura03(niveles);printf("\n\n");
        Anguloseriefigura04(niveles);printf("\n\n");
        Anguloseriefigura05(niveles);printf("\n\n");
        Anguloseriefigura06(niveles);printf("\n\n");
        Anguloseriefigura07(niveles);printf("\n\n");
        Anguloseriefigura08(niveles);printf("\n\n");
        Anguloseriefigura10(niveles);printf("\n\n");
        Anguloseriefigura11(niveles);printf("\n\n");
        Anguloseriefigura12(niveles);printf("\n\n");
        Anguloseriefigura13(niveles);printf("\n\n");
        Anguloseriefigura14(niveles);printf("\n\n");
        Anguloseriefigura15(niveles);printf("\n\n");
        Anguloseriefigura16(niveles);printf("\n\n");
        Anguloseriefigura17(niveles);printf("\n\n");
        Anguloseriefigura18(niveles);printf("\n\n");
        Anguloseriefigura19(niveles);printf("\n\n");
    }  
       
       
     
    

}
       
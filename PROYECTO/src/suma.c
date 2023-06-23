#include "stdio.h"
void main()
{
    int a=0,b=0,c=0;/*variables enteras*/
    float x= 0,y=0,z=0;/*variables floteanas*/
/* scaneo de la suma de enteros*/
        printf("elija un numero entero");
        scanf("%i",&a);

        printf("elija un  numero entero");
        scanf("%i",&b);
/*escaneo de la suma de floteanos*/
        printf("elija un numero real");
        scanf("%f",&x);

        printf("elija un  numero real");
        scanf("%f",&y);

        c= a+b; z=x+y;
        printf("la suma a+b es %i \n",c);/*resultado de los enteros*/

        printf("la suma x+y es %f",z);/*resultado de los floteanos*/




}
#include "stdio.h"
#include "stdlib.h"
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

void main ()
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




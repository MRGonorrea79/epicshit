#include "stdio.h"
#include "stdlib.h"

void main()
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


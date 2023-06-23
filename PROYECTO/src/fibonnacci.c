#include "stdio.h"
#include "stdlib.h"
int main()
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

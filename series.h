#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#define ABC ="abcdefghijklmnopqrstuvwxyz"
enum serienum { s1 = 1, s2,s3,s4,s5,s6,s7,s8,s9,s10,s11 };
int coeficiente_binomial(int n, int k) {
    if (k == 0 || k == n)
        return 1;
    else
        return coeficiente_binomial(n - 1, k - 1) + coeficiente_binomial(n - 1, k);
}

//series numericas

int Anguloseriefibonacci01(int terminoserie)
{
    int a=1,b=0,c=0;
  for (int i = 0; i < terminoserie; i++)
  {
    printf("%d ",c);
    c=a+b;
    a=b;
    b=c;
    ;
  }
  
   return 0;

}



int Anguloserie02(int terminoserie)
{
    int a=1,b=0;
  for (int i = 0; i < terminoserie; i++)
  {
    printf((a%2==0)?"0":"%d",a);
    a++;
    printf(" ");
  }
   return 0;
}

// 0/1 1/3 1/5 2/7 3/9 5/11 8/13 13/15 

int Anguloserie03(int terminoserie)
{
    int a=1,b=0,c=0,d=1;
  for (int i = 0; i < terminoserie; i++)
  {
   printf("%d/%d",c , d);
    c=a+b;
    a=b;
    b=c;
    d=d+2;
    printf(" ");
  }
   return 0;
}

//0/2 1/4 1/6 2/8 3/10 5/12 8/14 13/16

int Anguloserie04(int terminoserie)
{
    int a=1,b=0,c=0,d=2;
  for (int i = 0; i < terminoserie; i++)
  {
   printf("%d/%d",c , d);
    c=a+b;
    a=b;
    b=c;
    d=d+2;
    printf(" ");
  }
   return 0;
}

// 2 3 5 7 11 13 17 19 23 29 31 ...

int Anguloserie05(int terminoserie)
{
    int a=0;
  for (int i = 0; i < terminoserie+terminoserie; i++)
  {
    printf((a%2==0)?"":"%d ",a);
    
    a++;
  }
   return 0;
}

//1 4 9 16 25 36 49 64 ...

int Anguloserie06(int terminoserie)

{
    int a=1,b=3;
  for (int i = 0; i < terminoserie+1; i++)
  {
    printf("%d ",a);
    a=a+b;
    b=b+2;
  }
   return 0;
}

//1 4 7 10 13 16 19 22 25 ...

int Anguloserie07(int terminoserie)
{
    int a=1,b=3;
  for (int i = 0; i < terminoserie; i++)
  {
    printf("%d ",a);
    a=a+b;
  }
   return 0;
}

//3, 8, 13, 18, 23, 28, 33, 38, ...

int Anguloserie08(int terminoserie)
{
    int a=3,b=5;
  for (int i = 0; i < terminoserie; i++)
  {
    printf("%d, ",a);
    a=a+b;
  }
   return 0;
}

//2, 4, 8, 16, 32, 64, 128, 256, ...

int Anguloserie09(int terminoserie)
{
    int a=2,b=2;
  for (int i = 0; i < terminoserie; i++)
  {
    printf("%d, ",a);
    a=a*b;
  }
   return 0;
}
 
// 3, 9, 27, 81, 243, 729, 2187, ...

int Anguloserie10(int terminoserie)
{
    int a=3,b=3;
  for (int i = 0; i < terminoserie; i++)
  {
    printf("%d, ",a);
    a=a*b;
  }
   return 0;
}

//2 6 12 20 30 42 56 72 ...

int Anguloserie11(int terminoserie)
{
    int a=2,b=4;
  for (int i = 0; i < terminoserie; i++)
  {
    printf("%d, ",a);
    a=a+b;
    b=b+2;
  }
   return 0;
}




//series de caracteres

int Anguloseriec01(int terminoserie)
{
 for (int i = 0; i < terminoserie; i++)
 {
    printf((i%2==0)?"+ ":"- ");
 }
return 0;
}


int Anguloseriec02(int terminoserie)

 {
    int a=0,b=0,c=0;
  for (int i = 1; i <= terminoserie; i++)
  {
    for (int s = 0; s < i; s++)
    {
       printf((i%2==0)?"- " :"+ ");
    }
    
    printf("",c);
    c=a+b;
    a=b;
    b=c;
    ;
  }
  
   return 0;

}


 int Anguloseriec03(int terminoserie)
{
    int a=1,b=0,c=0;
  for (int i = 0; i < terminoserie+1; i++)
  {
        for (int s = 0; s < c; s++)
        {
        printf("+");
        }
    
    printf(" ");
    c=a+b;
    a=b;
    b=c;
    
  }
   return 0;
}


int Anguloseriec04(int terminoserie)
{
    int a=2;
    
  for (int i = 0; i < terminoserie+terminoserie; i++)
  {
    
             for (int s = 0; s < a; s++)
              {
            printf((i%2==0)?" ":"+");
              }
    a++;
  }
   return 0;
}

int Anguloseriec05(int terminoserie)
  {
    int  contadorc=4;
    char c[6] = "+-*/ ";
        for (int i = 0; i < terminoserie; i++)
        {
            printf(" %c ",c[i%contadorc],i);
           
        }
    }


int Anguloseriec06(int terminoserie)
  {
    int  contadorc=4;
    char c[6] = "\\|/- ";
        for (int i = 0; i < terminoserie; i++)
        {
            printf(" %c ",c[i%contadorc],i);
           
        }
    }

int Anguloseriec07(int terminoserie)
  {
    int  contadorc=24;
    char c[26] = "abcdefghijklmnopqrstuvwxyz";
        for (int i = 0; i < terminoserie; i++)
        {
            printf(" %c ",c[i%contadorc],i);
           
        }
    }

    //a + c - e + g - ...

int Anguloseriec08(int terminoserie)
  {
    int  contadorc=24;
    char c[26] = "abcdefghijklmnopqrstuvwxyz";
        for (int i = 0; i < terminoserie; i++)
        {
            if(i%2==0)
           { 
            printf(" %c ",c[i%contadorc]);
            }
            else
            {
              printf((i%4==1)?"+":"-");
            }
            
    }
    }

//aa bbbb cccccc dddddddd ...

int Anguloseriec09(int terminoserie)
{
    int a=0;
    int  contadorc=0;
    char c[27] = " abcdefghijklmnopqrstuvwxyz";
  for (int i = 0; i < terminoserie+1; i++)
  {
        for (int s = 0; s < a; s++)
        {
         printf("%c",c[contadorc]);
        }

    printf(" ");
     a= a+2;
    contadorc++;
  }
   return 0;
}


int Anguloseriec10(int terminoserie)
{
    int a=-2;
    int  contadorc=0;
    char c[27] = " abcdefghijklmnopqrstuvwxyz";
  for (int i = 0; i <= terminoserie; i++)
  {
        for (int s = 0; s <= a; s++)
        {
         printf("%c",c[contadorc]);
        }

    printf(" ");
     a= a+2;
    contadorc++;
  }
   return 0;
}


int Anguloseriec11(int terminoserie)
{
    int a=0,b=1,d=0;
    int  contadorc=0;
    char c[27] = "bcdefghijklmnopqrstuvwxyz";
    printf("a b");
  for (int i = 0; i < terminoserie; i++)
  {
        for (int s = 0; s < d; s++)
        {
         printf("%c",c[contadorc]);
        }
        printf(" ");
            d=a+b;
            a=b;
            b=d;
            contadorc++;
  }
  
   return 0;

   } 

   
 //figuras

 int Anguloseriefigura01(int niveles)
 {
 for (int v = 1; v <= niveles; v++)
 {
  for (int h = 1; h <= niveles; h++)
  {
      if  ((v==1) || (v==niveles) 
          ||  (h==1) ||  (h==niveles))
          
          printf("* ");
          else
          printf("  ");
          
  }
  printf("\n");
 }
 }


 int Anguloseriefigura02(int niveles)
 {
 for (int v = 1; v <= niveles; v++)
 {
  for (int h = 1; h <= niveles; h++)
  {
      if  ((v==1) || (v==niveles) 
          ||  (h==1) ||  (h==niveles))
          
          printf(((h%2==0 || v%2==0))?"+ ":"* " );
          else
          printf("  ");
  }
  printf("\n");
 }
 }


 int Anguloseriefigura03(int niveles)
 {
 for (int v = 1; v <= niveles; v++)
 {
  for (int h = 1; h <= niveles; h++)
  {
      if  (h<=v)
         printf("* ");
  }
  printf("\n");
 }
 }


//         * 
//       * * 
//     * * * 
 //  * * * * 
// * * * * *
 

int Anguloseriefigura04(int niveles)
   {
 for (int v = 0; v < niveles; v++) {
        for (int h = v; h < niveles - 1; h++) {
            printf(" ");
        }
        for (int k = 0; k <= v; k++) {
            printf("*");
        }
        printf("\n");
    }
}
          
          
 int Anguloseriefigura05(int niveles)
 {
 for (int v = 1; v <= niveles; v++)
 {
  for (int h = 1; h <= niveles; h++)
  {
      if  (h<v)
         printf(" ");
         else
         {
          printf("* ");
         }
         
  }
  printf("\n");
 }
 }
    
int Anguloseriefigura06(int niveles)
 {int contador = niveles - 1;
    for (int i = 0; i < niveles; i++) {
        for (int j = 0; j < contador; j++) {
            printf(" ");
        }
        for (int k = 0; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
        contador--;
    }
}


int Anguloseriefigura07(int niveles)
  {
 for (int v = 1; v <= niveles; v++)
 {
  for (int h = 1; h <= niveles; h++)
  {
      if(h==v && v==1)
         printf(" ___ ");
      if(h==v && v!=1)
      printf("|___ ");
       printf("    ");
  }
  printf("\n");
 }
 }


 int Anguloseriefigura08(int niveles)
  {
 for (int v = niveles; v >= 1; v--)
 {
  for (int h = 1; h <= v; h++)
  {
      if  (h==v)
         printf("___|");
         else
         {
          printf("    ");
         }
         
  }
  printf("\n");
 }
 }


 int Anguloseriefigura09(int niveles) //**
  {
 for (int v = niveles; v > 0; v--)
 {
  for (int h = 1; h <= v; h++)
  {
      if  (h==v)
         printf("___|");
         else
         {
          printf("    ");
         }
         
  }
  for (int h = niveles; h >= 1; h--)
  {
      if(h==v && v==1)
         printf(" |___  ");
      if(h==v && v==niveles)
      printf("___ ");
       printf("    ");
  }
  printf("\n");
 }
 }



int Anguloseriefigura10(int niveles)
 
  {
   char b=' ';
 for (int v = 1; v <= niveles; v++)
 {
  for (int h = 1; h <= niveles; h++)
  {
    if (v%2==0)
      b= '+';
    else
    {
      b= '-';
    }
        if(h==v && v==1)
           printf(" _%c_ ",b);
        if(h==v && v!=1)
           printf("|_%c_",b);
            printf("    ");
  }
  printf("\n");
 }
 }


int Anguloseriefigura11(int niveles)
  {
    int a=0;
 for (int v = 1; v <= niveles; v++)
 {
  for (int h = 1; h <= niveles; h++)
  {
      if(h==v)
         printf(" |");
           for (int k = 0; k < v; k++)
           {
            if(h==v)
            printf(" _");
            else
            printf(" ");
           }
     
  }
  printf("\n");

 }
 }


int Anguloseriefigura12(int niveles)
 {
 for (int v = 1; v <= niveles; v++)
 {
  for (int h = 1; h <= niveles; h++)
  {
      if  (h<=v)
         printf("%d",h);
  }
  printf("\n");
 }
 }



int Anguloseriefigura13(int niveles)
   {
 for (int v = niveles; v >= 1; v--)
 {
  for (int h = 1; h <= v; h++)
  {
      printf("%d",h);
  }
  printf("\n");
 }
 }
 

int Anguloseriefigura14(int niveles)
 
 {int contador = niveles - 1;
    for (int v = 0; v < niveles; v++) {
        for (int j = 0; j < contador; j++) {
            printf("  ");
        }
        for (int j = 0; j <= v; j++) {
            printf("%d   ", coeficiente_binomial(v, j));
        }
        printf("\n");
        contador--;
    }
}

 //1
 //1 1
 //1 2 1
 //1 3 3 1
 //1 4 6 4 1
 //1 5 10 10 5 1
 

 



int Anguloseriefigura15(int niveles){
    for (int i = 0; i < niveles; i++) {
        for (int j = 0; j <= i; j++) {
          
            printf("%d ", coeficiente_binomial(i, j));
        }
        printf("\n");
    }
}

int Anguloseriefigura16(int niveles){
 for (int v = 0; v < niveles; v++) {
        for (int h = 0; h < niveles; h++) {
            if (h == v || h == niveles - v - 1)
                printf((v%2==0)?" +":" -");
            else
                printf("  ");
        }
        printf("\n");
    }
}


int Anguloseriefigura17(int niveles){
 for (int v = 0; v < niveles; v++) {
        for (int h = 0; h < niveles; h++) {
            if (h == v || h == niveles - v - 1)
                printf((v%2==0)?" 1":" 0");
            else
                printf("  ");
        }
        printf("\n");
    }
}

int Anguloseriefigura18(int niveles)
  {
    int secuencia[niveles][niveles];
    secuencia[0][0] = 2;

        for (int v = 1; v < niveles; v++)
         {
        secuencia[v][0] = 1;
        secuencia[v][v] = 2;

          for (int h= 1; h < v; h++) 
              {
            secuencia[v][h] = secuencia[v-1][h-1] + secuencia[v-1][h];
              }
          }

        for (int v = 0; v < niveles; v++) 
          {
          for (int h = 0; h <= v; h++)
           {
              if (v==h)
              printf("+");
              else 
              printf("*");          
            printf("%d ", secuencia[v][h]);
          }
        
        printf("\n");
     }
}


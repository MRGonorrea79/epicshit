   
#include "iostream"
#include "string"
#include "string.h"
#include "algorithm"
#include <random>
#include "unistd.h"
#include "stdlib.h"
#include <thread>

using namespace std;
#define DELAY 10000
   

void loadingnombre()
{
    string nombre="Javier Angulo";
    int divisor=100/nombre.length(), barra = 15,contador=0;
    printf("%i",divisor);
        for ( int c = 0; c <= 100; c++)
        {   
            
            printf("\r %i %% ", c);
            

             if (c==divisor)
             {
            printf("%c",nombre[contador]);
             }
             contador++;
             usleep(DELAY);
        }
        
    }
    
int  loadingnombre1()
    {
        char nombre[16]="Javier Angulo";
    int f, c, ctdr, barra = 13;
    for ( f = 0; f <= barra ; f++)
    {
        for ( c = 0; c <= 0; c++)
        {   
            ctdr=f*100/barra;
            printf("\r %i %% ", ctdr);
        }
        for ( c = 0; c <= f; c++)
        {
            
            printf("%c", nombre[c]);
            usleep(6000);
        }
    }
    return 0;
    }   

int colcabralobo()
{
    bool lobo = true;
    bool cabra = true;
    bool col = true;

    // Verificar si el lobo se come a la cabra o la cabra se come la col
    if ((lobo && cabra) || (cabra && col)) {
        cout << "¡La cabra o la col están en peligro!" << endl;
    }

    // Mover al pastor, dejando el lobo
    cabra = false;
    col = false;
    cout << "El pastor lleva al lobo al otro lado del río." << endl;

    // Verificar si la cabra se come la col
    if (cabra && col) {
        cout << "¡La cabra se comió la col!" << endl;
    }

    // Mover al pastor solo
    lobo = false;
    cout << "El pastor regresa solo al otro lado del río." << endl;

    // Mover a la cabra
    cabra = true;
    cout << "El pastor lleva a la cabra al otro lado del río." << endl;

    // Verificar si el lobo se come a la cabra
    if (lobo && cabra) {
        cout << "¡El lobo se comió a la cabra!" << endl;
    }

    // Mover al pastor y dejar la cabra
    lobo = true;
    cout << "El pastor lleva al lobo al otro lado del río y lo deja." << endl;

    // Mover a la col
    col = true;
    cout << "El pastor lleva la col al otro lado del río." << endl;

    // Verificar si el lobo se come a la cabra o la cabra se come la col
    if ((lobo && cabra) || (cabra && col)) {
        cout << "¡La cabra o la col están en peligro!" << endl;
    }

    // Finalizar
    cout << "Todos los elementos han sido llevados al otro lado del río de manera segura." <<endl;

    return 0;
}


void loadingbar1(int total, int progreso)
{
    float porcentaje = (static_cast<float>(progreso) / total) * 100;
    int barraLlena = static_cast<int>(porcentaje / 5);
    int barraVacia = 20 - barraLlena;

    cout << "[";
    for (int i = 0; i < barraVacia; ++i) 
    {
        cout << " ";
    }
    for (int i = 0; i < barraLlena; ++i) 
    { 
        cout << "=";
    }
    cout << "]" << static_cast<int>(porcentaje) << "%\r";
    cout.flush();
}

int loadingbar2() 
{
    int total = 100;
    for (int i = 0; i <= total; ++i) 
    {
       float porcentaje = (static_cast<float>(i) / total) * 100;
        int barraLlena = static_cast<int>(porcentaje / 5);
        int barraVacia = 20 - barraLlena;

        cout << "[";
        for (int i = 0; i < barraLlena; ++i) 
        { 
        cout << "=";
        }
        for (int i = 0; i < barraVacia; ++i) 
        {
        cout << " ";
        }
        cout << "]" << static_cast<int>(porcentaje) << "%\r";
        cout.flush();
        usleep(DELAY);
    }

    return 0;
}


void loadingbar3() 
{
    int porcentaje = 100;
    for (int i = 0; i <= porcentaje; ++i) 
    {
        
    int carritoPosicion = static_cast<int>(static_cast<float>(i) / porcentaje * 20);

    cout << "[";
    for (int i = 0; i < 20; ++i) 
    {
        if (i == carritoPosicion) 
        {
            cout << "-_-";
        }   else 
        {
            cout << "-";
        }
    }
            cout << "] " << static_cast<int>(static_cast<float>(i) / porcentaje * 100) << "%\r";
            cout.flush();

       usleep(DELAY);
    }
  
}

void loadingbar4() 
{
    int porcentaje = 100;
    for (int i = 0; i <= porcentaje; ++i) 
    {
        
    int carritoPosicion = static_cast<int>(static_cast<float>(i) / porcentaje * 20);

    cout << "[";
    for (int i = 0; i < 20; ++i) 
    {
        if (i == carritoPosicion) 
        {
            cout << "-_-";
        }   else 
        {
            cout << " ";
        }
    }
            cout << "]" << static_cast<int>(static_cast<float>(i) / porcentaje * 100) << "%\r";
            cout.flush();

       usleep(DELAY);
    }
  
}


int loading5() 
{
    for (int i = 0; i <= 100; i++) 
    {
         int barLength = 30;
         int filledLength = static_cast<int>(i / 100.0 * barLength);
         int emptyLength = barLength - filledLength;

         char symbolFilled = '#';
         char symbolEmpty = ' ';
         char symbolPrevious = '=';

    string bar(filledLength, symbolFilled);
    bar += string(emptyLength, symbolEmpty);

    if (i > 0) 
    {
        int previousIndex = static_cast<int>((i - 1) / 100.0 * barLength);
        bar[previousIndex] = symbolPrevious;
    }

    cout << "[" << bar << "] " << i << "%" << "\r";     
    usleep(DELAY);
    }

    return 0;
}

void progressBar(int actual, int total) 
   {
    int barLength = 30;
    int filledLength = static_cast<int>(actual / static_cast<double>(total) * barLength);
    int emptyLength = barLength - filledLength;
    char symbolFilled = ' ', symbolEmpty = ' ';
    string bar(filledLength, symbolFilled);
    bar += "+"; 
    bar += string(emptyLength, symbolEmpty);
    cout << "[" << bar << "] " << actual  << "\r";
    cout.flush();
}

int loading6() 
{
    int distancia = 100; 
    int actual = 0;

    
    while (actual <distancia) 
    {
        progressBar(actual,distancia);
        actual++;
        usleep(DELAY);
    }

    while (actual > 0) 
    {
        progressBar(actual,distancia);
        actual--;
        usleep(DELAY);
    }

    cout << "[" << string(30, '#') << endl;
    cout.flush();
    return 0;
}


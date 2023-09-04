#include <iostream> 
#include <fstream>
#include <iomanip>
#include <unistd.h>
#include <cctype>
#include <vector>
using namespace std; 

#define DELAY 2000000
#define textColorBlack 30
#define textColorRed 31
#define textColorGreen 32
#define textColorYellow 33
#define textColorBlue 34
#define textColorMagenta 35
#define textColorCyan 36
#define textColorWhite 37

string const ALFA = "sinoaltr ;";
string pathFileName="C:\\Users\\jaang\\OneDrive\\Desktop\\EXAMEN POLLON\\include\\elpepe.txt";
int const Q = 10, 
          L = 11, 
          TK_ER = -10, 
          TK_SI = -20, 
          TK_SINO = -30,
          TK_SALTAR = -40; 


int const mt[Q][L]= {  {1, TK_ER, TK_ER, TK_ER, TK_ER, TK_ER, TK_ER, TK_ER, TK_ER, TK_ER},  
                       {TK_ER, 2, TK_ER, TK_ER, 3, TK_ER, TK_ER, TK_ER, TK_ER, TK_ER}, 
                       {TK_ER, 2, 8, TK_ER, TK_ER, TK_ER, TK_ER,TK_ER ,TK_SI,TK_SI}, 
                       {TK_ER,TK_ER,TK_ER,TK_ER,TK_ER,4,TK_ER,TK_ER,TK_ER,TK_ER}, 
                       {TK_ER,TK_ER,TK_ER,TK_ER,TK_ER,TK_ER,5,TK_ER,TK_ER,TK_ER},
                       {TK_ER,TK_ER,TK_ER,TK_ER,6,TK_ER,TK_ER,TK_ER,TK_ER,TK_ER},
                       {TK_ER,TK_ER,TK_ER,TK_ER,TK_ER,TK_ER,TK_ER,7,TK_ER,TK_ER},
                       {TK_ER,TK_ER,TK_ER,TK_ER,TK_ER,TK_ER,TK_ER,TK_ER,TK_ER,TK_SALTAR},
                       {TK_ER,TK_ER,TK_ER,9,TK_ER,TK_ER,TK_ER,TK_ER,TK_ER,TK_ER},
                       {TK_ER,TK_ER,TK_ER,9,TK_ER,TK_ER,TK_ER,TK_ER,TK_SINO,TK_SINO} }; 

void setTextColor(int color)
{
        printf("%c[%d;%dm", 0x1B, 1,color);
}
void clearTerminal()
{
    system("cls||clear"); 
    fflush(stdout); 
    
}
void loadingShort()
{
    char c[] ="\\|/- ";
    for (int i = 0; i <= 100; i++)
    {
        //contadorC== (i%5==0) ? i%5 : 0;
        printf("\r%c %3d %% ",c[i%5],i);
        //usleep(TIEMPO);
    }
    printf("\n");
}

int getIndiceALFA(char c) 
{ 
    int index = ALFA.find(c); 
    if(index >= 0) 
        return index; 
    return TK_ER; 
}

void validarW(string w) 
{ 
    int q=0, l=0; 
    for (auto &&c : w ) 
    { 
        l = getIndiceALFA(c); 
        q = mt[q][l]; 

        if(q == TK_SI) 
            {
            setTextColor(textColorMagenta);
            cout  << "si(OK)"<< endl; 
            }
        if(q == TK_SINO) 
            {
            setTextColor(textColorRed);
            cout<< "sino(OK)"<< endl; 
            }

        if(q == TK_SALTAR) 
            {
            setTextColor(textColorMagenta);
            cout<< "saltar(OK)"<< endl; 
            }

        if(q == TK_ER) 
            {
            setTextColor(textColorBlue);
            cout<< "palabra (w) : NO ES VALIDA" << endl;
            exit(0);
            }
    } 
} 

bool LeerArchivo()
{
    fstream f;
    string line;
    int i=0;
   

    cout << "readArchivo:" << pathFileName << endl;
    f.open(pathFileName, ios_base::in);
    if (!f.is_open())
    {
        cout << "Error al abrir archivo..." << endl;
        return false;
    }

    while (!f.eof())
    {
        
        getline(f,line);
        validarW(line);
        usleep(DELAY);
        
    }
        
    f.close();
    return true;

}
int main() 
{ 
    LeerArchivo();
    return 0;
}
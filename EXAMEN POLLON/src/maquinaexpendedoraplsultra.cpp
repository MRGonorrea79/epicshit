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


vector <int> precios ={25,50,75,100};
string const ALFA = "2501346789";
string pathFileName="C:\\Users\\jaang\\OneDrive\\Desktop\\EXAMEN POLLON\\include\\elpepe.txt";
int const Q = 10, 
          L = 11, 
          TK_ER = -10,
          TK_MOI = -3, 
          TK_25 = -20, 
          TK_50 = -30,
          TK_100 = -40; 
int dinero=0,cantidad=1,vuelto;
int const mt[Q][L]= {   {1,2,TK_MOI,3,TK_MOI,TK_MOI,TK_MOI,TK_MOI,TK_MOI},  
                        {TK_MOI,TK_25,TK_MOI,TK_MOI,TK_MOI,TK_MOI,TK_MOI,TK_MOI,TK_MOI}, 
                        {TK_MOI,TK_MOI,TK_50,TK_MOI,TK_MOI,TK_MOI,TK_MOI,TK_MOI,TK_MOI}, 
                        {TK_MOI,TK_MOI,4,TK_MOI,TK_MOI,TK_MOI,TK_MOI,TK_MOI,TK_MOI,TK_MOI}, 
                        {TK_MOI,TK_MOI,TK_100,TK_MOI,TK_MOI,TK_MOI,TK_MOI,TK_MOI,TK_MOI,TK_MOI},}; 

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
int  getnumeromas1M()
{
    int numero=0;
    char opc[10000];
    do{ 
        gets(opc);
        sscanf(opc,"%i",&numero);
    } while (numero<=0 || numero>2);
    fflush(stdin);
    fflush(stdout);
    return numero;
}   
int  getnumeromas2M()
{
    int numero=0;
    char opc[10000];
    do{ 
        gets(opc);
        sscanf(opc,"%i",&numero);
    } while (numero<=0 || numero>5);
    fflush(stdin);
    fflush(stdout);
    return numero;
}   
int getIndiceALFA(char c) 
{ 
    int index = ALFA.find(c); 
    if(index >= 0) 
        return index; 
    return TK_ER; 
}

void multiplicacion()
{
clearTerminal();
setTextColor(textColorMagenta);
cout  << "PUEDES COMPRAR:" << endl;
setTextColor(textColorRed);
cout  <<"1.-"<< dinero/precios.at(0) <<  " GALLETAS  ---->  (change:"  << endl;
cout  <<"2.-"<< dinero/precios.at(1) <<   " COLAS     ---->  (change:" << endl;
cout  <<"3.-"<< dinero/precios.at(2)<<  " DORITOS   ---->  (change:"  << endl;
cout  <<"4.-"<< dinero/precios.at(3)<<  " HELADOS   ---->  (chance:" << endl;
cout  <<"elija una: "<< endl;

switch (getnumeromas2M())
{
    case 1: do
            {
                cout<<"cuantas quieres:"<<endl;
                int cantidad=getnumeromas2M();
            }while (dinero/precios.at(0) < cantidad);

            vuelto = dinero - (cantidad*precios.at(0));
            cout << "su vuelto es de "<< vuelto << "ctvs" <<endl;
            break;
    case 2:do
            {
                cout<<"cuantas quieres:"<<endl;
                int cantidad=getnumeromas2M();
            }while (dinero/precios.at(1) < cantidad);

            vuelto = dinero -(cantidad*precios.at(1));
            cout << "su vuelto es de "<< vuelto << "ctvs" <<endl;
            break;
    case 3:do
            {
                cout<<"cuantas quieres:"<<endl;
                int cantidad=getnumeromas2M();
            }while (dinero/precios.at(2) < cantidad);

            vuelto = dinero-(cantidad*precios.at(2));
            cout << "su vuelto es de "<< vuelto << "ctvs" <<endl;
            break;
    case 4:do
            {
                cout<<"cuantas quieres:"<<endl;
                int cantidad=getnumeromas2M();
            }while (dinero/precios.at(3) < cantidad);

            vuelto = dinero-(cantidad*precios.at(3));
            cout << "su vuelto es de "<< vuelto << "ctvs" <<endl;
             break;
}

}
void validarW(string w) 
{ 
    string pp;
    int q=0, l=0; 
    for (auto &&c : w ) 
    { 
        l = getIndiceALFA(c); 
        q = mt[q][l]; 

        if(q == TK_25) 
            {
            setTextColor(textColorMagenta);
            dinero=dinero+25;
            cout  << dinero<<endl;
            }
        if(q == TK_50) 
            {
            setTextColor(textColorRed);
            dinero=dinero+50;
            cout  << dinero <<endl;
            }

        if(q == TK_100) 
            {
            setTextColor(textColorMagenta);
            dinero=dinero+100;
            cout  << dinero<<endl;
            }

        if(q == TK_MOI) 
            {
            setTextColor(textColorBlue);
            cout<< "NO EXISTE ESA MONEDA: VUELVA A INGRESAR" << endl;
            cin >> pp; 
            validarW(pp);
            }
    } 
} 
void opc()
{
    string ppe;
    cin >> ppe; 
    validarW(ppe);  

    if (dinero >= 100)
    {
       multiplicacion();
       abort();
    }
    
    while (dinero > 0)
    {
            cout  << "===Ingresar otra moneda?=== \nsi\nno"<< endl;
            switch (getnumeromas1M())
            {

            case 1: setTextColor(textColorMagenta);
                    cout<< "INGRESE UNA MONEDA(25CTVS,50CTVS,100CTVS): "; 
                    cin >> ppe; 
                    validarW(ppe);  
                    break;
            case 2: 
                    multiplicacion();
                    abort();
                    break;
            }
    }
clearTerminal();
}
int main() 
{ 
    cout<< "=====BIENVENIDO A LA MAQUINA EXPENDEDORA====="<< endl; 
    cout<< "INGRESE UNA MONEDA(25CTVS,50CTVS,100CTVS): "; 
    opc();
    return 0;

}
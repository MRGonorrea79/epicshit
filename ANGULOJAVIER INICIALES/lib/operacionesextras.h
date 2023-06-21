/**bibliografia utilizada:
 * (30 de enero,2023)."Cómo generar un número aleatorio en el rango en C++".Delft stack.extraido de:https://www.delftstack.com/es/howto/cpp/generate-random-number-in-range-cpp/#:~:text=Usar%20la%20biblioteca%20de%20C%2B%2B11%20%3Crandom%3E%20para%20generar,n%C3%BAmeros%20aleatorios%20en%20un%20intervalo%20de%20n%C3%BAmeros%20especificado.
 * (16 de junio del 2023)."funciones<string>".Microsoft Learn.extraido de:https://learn.microsoft.com/es-es/cpp/standard-library/string-functions?view=msvc-170
*/

#include "iostream"
#include "string"
#include "string.h"
#include "algorithm"
#include <random>
#include "unistd.h"
#include "stdlib.h"
using namespace std;
#define DELAY 10000

int getnumeromas1()
{
    int numero=0;
    char opc[10000];
    printf("\n\telige un numero de niveles: ");
    do{
        
        gets(opc);
        sscanf(opc,"%i",&numero);
    } while (numero<=0);
    fflush(stdin);
    fflush(stdout);
    return numero;
}

int getnumeromas2()
{
    int numero=0;
    char opc[2];
    
    do{
        printf("\t1.figuras\n\t2.frases\n\telija una opcion");
        gets(opc);
        sscanf(opc,"%i",&numero);
    } while (numero<=0 || numero>=3);
    fflush(stdin);
    fflush(stdout);
    return numero;
}

string getpalabra()
 {
    string palabra;

    cout << "\n\tIngrese una frase: ";
    getline(cin, palabra);

   
    palabra = palabra.substr(palabra.find_first_not_of(' '));
    palabra = palabra.substr(0, palabra.find_last_not_of(' ') + 1);

    return palabra;
}

string getespacio(int numeroespacio)
{
 string str=""; 
 for (int i = 0; i < numeroespacio; i++)
    str +="    ";
    return str;
}

string reverseline(string frase2) {
    reverse(frase2.begin(), frase2.end());
    return frase2;
}

string mayuvocal(string frase3) 
{
    for (int i = 0; i < frase3.length(); i++)
    {
        if(frase3[i]=='a' || frase3[i]=='e' || frase3[i]=='i' || frase3[i]=='o' || frase3[i]=='u')
        frase3[i] = toupper(frase3[i]);
    }
    return frase3;
}

string mayuconst(string frase3) 
{
    for (int i = 0; i < frase3.length(); i++)
    {
        if(frase3[i]=='b' || frase3[i]=='c' || frase3[i]=='d' || frase3[i]=='h' || frase3[i]=='j'|| frase3[i]=='f'|| frase3[i]=='g'|| frase3[i]=='k'|| frase3[i]=='l'|| frase3[i]=='m'|| frase3[i]=='n'|| frase3[i]=='p'|| frase3[i]=='q'|| frase3[i]=='r'|| frase3[i]=='s'|| frase3[i]=='t'|| frase3[i]=='v'|| frase3[i]=='w'|| frase3[i]=='x'|| frase3[i]=='y'|| frase3[i]=='z')

        frase3[i] = toupper(frase3[i]);
    }
    return frase3;
}

string mayutotal(string frase3) 
{
    for (int i = 0; i < frase3.length(); i++)
    {
        frase3[i] = toupper(frase3[i]);
    }
    return frase3;
}

int randomnumber()
{
    random_device rd; 
    mt19937 gen(rd()); 
    uniform_int_distribution<int> dis(1, 5); 

    int randomnumber = dis(gen); 
    cout << "Numero aleatorio: " << randomnumber << endl;
    return randomnumber;
}

string anagrama1()
{
   int contador=0;
   string palabra = "japones";
   string anagrama;
   int intento = 0; 
    while (intento < 3 ) 
    {
        cout << "Ingresa anagrama de japones: ";
        cin >> anagrama;

        if (anagrama != "a")
         {
            string p = palabra;
            string a = anagrama;
            transform(p.begin(), p.end(), p.begin(), ::tolower);
            transform(a.begin(), a.end(), a.begin(), ::tolower);
            sort(p.begin(), p.end());
            sort(a.begin(), a.end());
            
            if (p == a)
            {
                cout << "Correcto :3 " << endl;
                exit(EXIT_SUCCESS);
            }
            else 
                cout << "intenta de nuevo\n"<< endl;   
         } 
       intento++;
       }
         cout << "respuesta correcta:\njapones:esponja"<< endl;
    
    return anagrama;
}

string anagrama2()
{
   int contador=0;
   string palabra = "amor";
   string anagrama;
   int intento = 0; 
    while (intento < 3 ) 
    {
        cout << "Ingresa anagrama de amor: ";
        cin >> anagrama;

        if (anagrama != "a")
         {
            string p = palabra;
            string a = anagrama;
            transform(p.begin(), p.end(), p.begin(), ::tolower);
            transform(a.begin(), a.end(), a.begin(), ::tolower);
            sort(p.begin(), p.end());
            sort(a.begin(), a.end());
            
            if (p == a)
            {
                cout << "Correcto :3 " << endl;
                exit(EXIT_SUCCESS);
            }
            else 
                cout << "intenta de nuevo\n"<< endl;   
         } 
       intento++;
       }
         cout << "respuesta correcta:\namor:roma"<< endl;
    
    return anagrama;
}

string anagrama3()
{
   int contador=0;
   string palabra = "resto";
   string anagrama;
   int intento = 0; 
    while (intento < 3 ) 
    {
        cout << "Ingresa anagrama de resto: ";
        cin >> anagrama;

        if (anagrama != "a")
         {
            string p = palabra;
            string a = anagrama;
            transform(p.begin(), p.end(), p.begin(), ::tolower);
            transform(a.begin(), a.end(), a.begin(), ::tolower);
            sort(p.begin(), p.end());
            sort(a.begin(), a.end());
            
            if (p == a)
            {
                cout << "Correcto :3 " << endl;
                exit(EXIT_SUCCESS);
            }
            else 
                cout << "intenta de nuevo\n"<< endl;   
         } 
       intento++;
       }
         cout << "respuesta correcta:\nresto:retos"<< endl;
    
    return anagrama;
}

string anagrama4()
{
   int contador=0;
   string palabra = "poder";
   string anagrama;
   int intento = 0; 
    while (intento < 3 ) 
    {
        cout << "Ingresa anagrama de poder: ";
        cin >> anagrama;

        if (anagrama != "a")
         {
            string p = palabra;
            string a = anagrama;
            transform(p.begin(), p.end(), p.begin(), ::tolower);
            transform(a.begin(), a.end(), a.begin(), ::tolower);
            sort(p.begin(), p.end());
            sort(a.begin(), a.end());
            
            if (p == a)
            {
                cout << "Correcto :3 " << endl;
                exit(EXIT_SUCCESS);
            }
            else 
                cout << "intenta de nuevo\n"<< endl;   
         } 
       intento++;
       }
         cout << "respuesta correcta:\npoder:pedro"<< endl;
    
    return anagrama;
}

string anagrama5()
{
   int contador=0;
   string palabra = "aspero";
   string anagrama;
   int intento = 0; 
    while (intento < 3 ) 
    {
        cout << "Ingresa anagrama de aspero: ";
        cin >> anagrama;

        if (anagrama != "a")
         {
            string p = palabra;
            string a = anagrama;
            transform(p.begin(), p.end(), p.begin(), ::tolower);
            transform(a.begin(), a.end(), a.begin(), ::tolower);
            sort(p.begin(), p.end());
            sort(a.begin(), a.end());
            
            if (p == a)
            {
                cout << "Correcto :3 " << endl;
                exit(EXIT_SUCCESS);
            }
            else 
                cout << "intenta de nuevo\n"<< endl;   
         } 
       intento++;
       }
         cout << "respuesta correcta:\naspero:espora"<< endl;
    
    return anagrama;
}


//figuras extras

//               ___
//           ___|   |___
//        ___|          |___
//    ___|                  |___
// ___|                         |___

int Anguloseriefigura09(int niveles)
{
 for (int i = 0; i < niveles; i++)
 {
    if(i==0)
    cout << getespacio(niveles) << "   ____" << endl;

    cout << getespacio(niveles-i) << "___|"
         << "    "
         << getespacio(i*2) << "|___"
         << endl;

 }
 
return 0;

}

//series de palabras

int Anguloseriepalabra03(string frase)
    {
    char letra=' ';

    cout << "ingrese la letra que desea eliminar:  ";
    cin >> letra;
    if(letra =='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
    frase.erase(remove(frase.begin(), frase.end(), letra), frase.end());

    cout <<  frase << endl;

    return 0;
}

int Anguloseriepalabra01(string frase)
{
    int contador=0;
    for (int i = 0; i < frase.length(); i++)
    {
        if(frase[i]=='a' || frase[i]=='e' || frase[i]=='i' || frase[i]=='o' || frase[i]=='u')
        contador=contador+1;
    }
    cout << "numero de vocales: " << contador << endl;
 return 0;
}

int Anguloseriepalabra02(string frase)
{
    int contador=0;
    

    for (int i = 0; i < frase.length(); i++)
    {
        if(frase[i]=='b' || frase[i]=='c' || frase[i]=='d' || frase[i]=='h' || frase[i]=='j'|| frase[i]=='f'|| frase[i]=='g'|| frase[i]=='k'|| frase[i]=='l'|| frase[i]=='m'|| frase[i]=='n'|| frase[i]=='p'|| frase[i]=='q'|| frase[i]=='r'|| frase[i]=='s'|| frase[i]=='t'|| frase[i]=='v'|| frase[i]=='w'|| frase[i]=='x'|| frase[i]=='y'|| frase[i]=='z')
        contador=contador+1;
    }
    cout << "numero de consonantes: " << contador << endl;
 return 0;
}

int Anguloseriepalabra04(string frase)
{
    char letra1=' ';


   cout << "ingrese la letra que desea eliminar:  ";
    cin >> letra1;
    if(letra1=='b' || letra1=='c' || letra1=='d' || letra1=='h' || letra1=='j'|| letra1=='f'|| letra1=='g'|| letra1=='k'|| letra1=='l'|| letra1=='m'|| letra1=='n'|| letra1=='p'|| letra1=='q'|| letra1=='r'|| letra1=='s'|| letra1=='t'|| letra1=='v'|| letra1=='w'|| letra1=='x'|| letra1=='y'|| letra1=='z')
    frase.erase(remove(frase.begin(), frase.end(), letra1), frase.end());

    cout <<  frase << endl;

    return 0;
}

int Anguloseriepalabra05(string frase)
{
    
string frase2 =mayuvocal(reverseline(frase));
    
    cout <<  frase2 << endl;

    return 0;
}

int Anguloseriepalabra06(string frase)
{
    
string frase2 =mayuconst(reverseline(frase));
    
    cout <<  frase2 << endl;

    return 0;
}

int Anguloseriepalabra07(string frase)
{
    
string frase2 =mayutotal(frase);

for (int i = 0; i < frase2.length(); i++)
    {
        if(frase2[i]=='J')
        frase2[i]=' ';
    }
    cout <<  frase2 << endl;

    return 0;
}

int Anguloseriepalabra08(string frase)
{

int number = randomnumber();

switch (number)
{
    case 1:anagrama1();
        break;
    case 2:anagrama2();
        break;
    case 3:anagrama3();
        break;
    case 4:anagrama4();
        break;
    case 5:anagrama5();
        break;

default:printf("nmms como llegaste aca?");
    break;
}
 return 0;
}


int Anguloseriepalabra09(string frase)
{
    
    for (int i = 0; i < frase.length(); i++)
    {
        if(i%2==0)
        {
        frase[i]=toupper(frase[i]);
        }
        else
        frase[i]=tolower(frase[i]);
    }

    cout << frase << endl;
    printf("\n\n");
 return 0;
}



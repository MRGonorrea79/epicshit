#include "stdlib.h"

#include "iostream"
#include "string"
#include "string.h"
#include "algorithm"
#include <random>
#include "stdlib.h"
#include <thread>
#include "../lib/jaOperacionesExtras.h"
#include "../lib/jaOperacionesBasicas.h"

#include "../lib/jaPatColor.h"

#define DELAY 10000

using namespace std;

int main()
{
    string jaCedula = "1759844267";
    string jaCorreo = "javier.angulo@epn.edu.ec",
           jaNombre = "Javier Andres Angulo Albornoz";
    printf("\tDATOS: ");
    setTextColor(textColorBlue);
    cout << jaCedula << endl;
    setTextColor(textColorGreen);
    cout << jaMayuTotal(jaCorreo) << endl;
    setTextColor(textColorRed);
    cout << jaMinuTotal(jaNombre) << endl;
    printf("\n\n");
    loadingp();
    printf("\n\n");
    setTextColor(textColorBlue);
    string observador = jaCredenciales();
    loadingp();
    printf("\n\n");
    setTextColor(textColorBlack);
    jaCabraColLobo();
    fflush(stdout);
}
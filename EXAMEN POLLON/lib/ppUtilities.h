/**
 * ©2023 pat_mic, All Rights Reserved.
 * libreria para fines acadámicos de programación I - EPN
 * @version: 1.0
 * @author : pat_mic
 * @date   : 2023.07.30
 **/

#include <iostream>
#include <windows.h>
// #include <iomanip>
using namespace std;

#define DELAY 100000
enum escapes { 
	BELL 		= '\a', 
	RETROCESO 	= '\b',
	TAB 		= '\t',
	ENTER 		= '\n', 
	TAB_V 		= '\v', 
	RETORNO 	= '\r'
};

const string CLS = "\x1B[2J\x1B[H";
enum color { azul  = 1, verde, turqueza, rojo, rosa, amarillo };
string setColor(color c)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
    return "";
}


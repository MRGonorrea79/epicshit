#include "iostream"
#include "string"
#include "string.h"
#include "algorithm"
#include <random>
#include "unistd.h"
#include "stdlib.h"
using namespace std;
#define DELAY 10000
enum items {GAL=1,PAS,TOR,HEL,BEB };


void menuepico(int producto)
{
switch (producto)
{
case GAL: cout << " 1.-Chispas   \n 2.-avena   \n 3.-polvorosas" << endl ;
         break;
case PAS: cout <<" 1.-Chispas   \n 2.-avena   \n 3.-polvorosas" << endl ;
         break;
case TOR: cout << " 1.-Chispas   \n 2.-avena   \n 3.-polvorosas" << endl ;
         break;
case HEL: cout << " 1.-Chispas   \n 2.-avena   \n 3.-polvorosas" << endl ;
         break;
case BEB: cout << " 1.-Chispas   \n 2.-avena   \n 3.-polvorosas" << endl ;
         break;
default:
    break;
}

} 



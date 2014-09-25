#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include "gracze.h"


using namespace std;


Gracz::Gracz()
{

}


Gracz::~Gracz()
{

}


void Gracz::przedstaw_sie()
{

}


bool Gracz::gracz_start()
{
    cout << "\n\n\n\t\t\tDODANIE GRACZA. UWAGA - MASZ 1 PROBE !";

    string a ;
    unsigned int b = 0;
    cout << "\n\n\n\n\n\t\t\t\tGRA SIECIOWA";
    cout << "\n\n\t\t\t\t podaj nick : ";
    getchar();
    getline(cin, a);
    cout << "\n\n\t\t\t\t podaj id_gry [4 cyfry]  : ";
    cin >> b;

    if(!cin.good() || b<1000 || b>9999)
    {
        cout << "\n\n\t\t\t\tproba dodania gracza nieudana...";
        return false;
    }
    else
    {
        identyfikator = a;
        id_gry = b;
        return true;
    }
}


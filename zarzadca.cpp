#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <unistd.h>

#include "zarzadca.h"

using namespace std;

Zarzadca::Zarzadca()
{
    gracze_ilu = 0;
    gracze_max = 0;

    id_sesji=0;
    moj_szyfr_stan=0;

    string nick_gracza_TU="";
    string nick_gracza_TAM="";
};



bool Zarzadca::sprawdz_pole_obrona(string a)
{

return true;
}




bool Zarzadca::sprawdz_pole_atak(string a)
{

return true;
}

string Zarzadca::zapytanie_atak()
{
string zapytanie ="";
return zapytanie;
}






unsigned int Zarzadca::szyfr(unsigned int i)
{
    unsigned int los = rand()%100000;
    return los + i;
    moj_szyfr_stan = (los+i);
}




bool Zarzadca::czy_tura_TU()
{
return true;
}



#pragma once
#include <iostream>
#include <string>

using namespace std;


class Zarzadca
{

private:

    unsigned int gracze_ilu;
    unsigned int gracze_max;

    unsigned int id_sesji;
    unsigned int moj_szyfr_stan;

    string nick_gracza_TU;
    string nick_gracza_TAM;

public:

    Zarzadca();
    ~Zarzadca();
    bool sprawdz_pole_atak(string a);
    bool sprawdz_pole_obrona(string a);
    unsigned int szyfr(unsigned int i);
    string zapytanie_atak();
    string zapytanie_obrona();
    bool czy_tura_TU();

};



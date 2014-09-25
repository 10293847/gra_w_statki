#pragma once

#include <iostream>



using namespace std;

//class Plansza_Wzor
//{
//friend class Zarzadca;
//public:
//    Plansza_Wzor(){};
//    virtual ~Plansza_Wzor(){};
//
//    virtual bool sprawdz_string(string strzal)=0;
//    virtual bool sprawdz_liczbe(unsigned int strzal);
//    virtual void wyswietl();
//    virtual string czy_grac_dalej();
//};

//--------------------------------------------------------

class Plansza_Gracza
{
friend class Zarzadca;

private:
    char Plansza_Atak[10][10];
    char Plansza_Obrona[10][10];


public:
    unsigned int ile_TU_zostalo;
    unsigned int ile_TAM_zostalo;

    Plansza_Gracza();
    ~Plansza_Gracza();

    void pasek();
    void strzal_test();
    void win();
    void lost();

    void strzal_single_player_trafiony(string cel);

    string strzal_single_player();

    void wyswietl();
    bool sprawdz_string(string strzal);
    void sprawdz_liczbe(unsigned int strzal);

    string czy_grac_dalej();
};


class Plansza_Komputera
{

private:
    char Plansza_Atak[10][10];
    char Plansza_Obrona[10][10];

public:
    unsigned int ile_TU_zostalo;
    unsigned int ile_TAM_zostalo;

    Plansza_Komputera();
    ~Plansza_Komputera();

    unsigned int ruch();
    bool sprawdz_string(string strzal);

};





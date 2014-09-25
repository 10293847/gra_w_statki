#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <climits>

#include "gra_jednoosobowa.h"
#include "plansze.h"
#include "gracze.h"
#include "main_funkcje.h"
#include "zarzadca.h"


using namespace std;

void single_test()
{
string wybor="";
    Gracz gr;

    cout << "\n\n\n\n\t\taby zaczac wprowadz dowolna wartosc [poza 'n'] i nacisnij [enter] :";
    cin >>wybor;

    Plansza_Gracza pl;

    if(wybor != "n")
    {
        znaczek_tworzenie_planszy();
    }

    while ( wybor != "n")
    {
        pl.wyswietl();
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        wybor = pl.czy_grac_dalej();

        if(wybor == "t")
        {
            pl.strzal_test();
        }
    }
    koniec();

return;
}

//----------------------------------------------------------------------


void single_player()
{

  Gracz gr;
  Plansza_Komputera komp;

  string wybor="";
  cout << "\n\n\n\n\t\taby zaczac wprowadz dowolna wartosc [poza 'n'] i nacisnij [enter] :";
  cin >>wybor;
  cout << "\n\n\n\n\t\t\t\t" << endl;
  sleep(1);

  Plansza_Gracza pl;
  if(wybor != "n")
  {
    znaczek_tworzenie_planszy();
  }

  while ( wybor != "n")
  {
    pl.wyswietl();
    cin.clear();
    cin.ignore(INT_MAX, '\n');

    wybor = pl.czy_grac_dalej();

        if(wybor == "t" || wybor == "mastershot" ||wybor == "iwin" || wybor == "iwin")
        {
            string a = pl.strzal_single_player();
            if (a == "mastershot")
            {
              kody();
            }
            else if (a == "iwin")
            {
                pl.win();
                wygrana();
                koniec();
                return;
            }
            else if (a == "ilost")
            {
                pl.lost();
                przegrana();
                koniec();
                return;
            }

            if(pl.ile_TAM_zostalo == 0)
            {
                wygrana();
            }
            else if(pl.ile_TU_zostalo == 0)
            {
                przegrana();
            }

            if( komp.sprawdz_string( a ) == true)
            {
                pl.strzal_single_player_trafiony( a );
            }

            pl.sprawdz_liczbe(komp.ruch());
        }
    }
    if ( wybor == "n")
    {
        koniec();
    }
return;
}

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
#include "udp_game.h"



void udp_game()
{
Gracz gr;

    if( gr.gracz_start() )
    {
      string wybor="";
      cout << "\n\n\n\n\t\taby zaczac wprowadz dowolna wartosc [oprocz 'n'] i nacisnij [enter] :";
      cin >>wybor;

      cout << "\n\n\n\n\t\t\t\t" << endl;

      sleep(1);


        Plansza_Gracza pl;
        pl.wyswietl();
        while ( wybor != "n")
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');

            wybor = pl.czy_grac_dalej();

            if(wybor == "t" || wybor == "mastershot" ||wybor == "iwin" || wybor == "iwin")
            {
                string a = pl.strzal_single_player();
                if (a == "mastershot")
                {
                    cout << "\n\n\n KODOW" << flush;
                    usleep(500000);
                    cout << "  jeszcze" << flush;
                    usleep(500000);
                    cout << "  nie"<< flush;;
                    usleep(500000);
                    cout << "  ma"<< flush;;
                    usleep(500000);
                    cout << "..."<< flush;;
                    usleep(2000000);
                    cout << "  beda"<< flush;
                    usleep(500000);
                    cout << "  pozniej XD"<< flush;;
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
                if(pl.ile_TU_zostalo == 0)
                {
                    przegrana();
                }

                if( pl.sprawdz_string( a ) == true)
                {
                    pl.strzal_single_player_trafiony( a );
                }
                pl.wyswietl();

            }
        }
        if ( wybor == "n")
        {
            koniec();
        }
    }
    else
    {
        koniec();
    }
return;
}

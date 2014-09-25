#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <time.h>
#include <unistd.h>

#include "plansze.h"
#include "main_funkcje.h"

using namespace std;

//-------------------------------------------------------------------------------------

Plansza_Gracza::Plansza_Gracza()
{
    ile_TU_zostalo = 25;
    ile_TAM_zostalo = 25;

    for (unsigned int  x = 0 ; x < 10 ; x++ )
    {
        for (unsigned int y = 0 ; y < 10 ; y++ )
        {
            Plansza_Atak[x][y]=' ';
        }
    }

    for (unsigned int x = 0 ; x < 10 ; x++ )
    {
        for (unsigned int y = 0 ; y < 10 ; y++ )
        {
            Plansza_Obrona[x][y]=' ';
        }
    }

    unsigned int ile_pol = 25;

    for (unsigned int i=0; i<ile_pol;)
    {
        unsigned int losuj = rand()%100;
        unsigned int x = losuj/10;
        unsigned int y = losuj%10;

        if(Plansza_Obrona[x][y] = ' ')
        {
            Plansza_Obrona[x][y] = 'o';
            i++;
            //cout << "[x] : " << x <<"\t[y] : " << y  << endl;
        }
    }

system("clear");
}
//-------------------------------------------------------------------------------------

Plansza_Gracza::~Plansza_Gracza()
{

}

//---------------------------plansza komputerka----------------------------------------

Plansza_Komputera::Plansza_Komputera()
{
    ile_TU_zostalo = 25;
    ile_TAM_zostalo = 25;

    for (unsigned int  x = 0 ; x < 10 ; x++ )
    {
        for (unsigned int y = 0 ; y < 10 ; y++ )
        {
            Plansza_Atak[x][y]=' ';
        }
    }

    for (unsigned int x = 0 ; x < 10 ; x++ )
    {
        for (unsigned int y = 0 ; y < 10 ; y++ )
        {
            Plansza_Obrona[x][y]=' ';
        }
    }

    unsigned int ile_pol = 25;

    for (unsigned int i=0; i<ile_pol;)
    {
        unsigned int losuj = rand()%100;
        unsigned int x = losuj/10;
        unsigned int y = losuj%10;

        if(Plansza_Obrona[x][y] = ' ')
        {
            Plansza_Obrona[x][y] = 'o';
            i++;
            //cout << "[x] : " << x <<"\t[y] : " << y  << endl;
        }
    }
}

//-------------------------------------------------------------------------------------

Plansza_Komputera::~Plansza_Komputera()
{

}

//-------------------------------------------------------------------------------------

void Plansza_Gracza::wyswietl()
{
   //system("clear");
   // cout << "\n\ntura:  \n\n";
   cout << "\t\tZOSTALO CI\t" << ile_TU_zostalo << "\tOKRETOW , A KOMPUTEROWI\t" << ile_TAM_zostalo<<"\n\n" ;

    cout << "\n\n\t \t\t\t\t\tOBSZAR ATAKU\t\t\t\t\t\t \t\t\t\tOBSZAR OBRONY\t\t\t\t\t\t \n\n";
    cout << "\n\t \tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\t\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n\n\n";

for (unsigned int i = 0 ; i < 10 ; i++ )
    {
        cout <<"\t"<< i;
        for (unsigned int j = 0 ; j < 10 ; j++ )
        {
            cout << "\t" << Plansza_Atak[i][j];
        }
        cout <<"\t"<< i;

        for (unsigned int j = 0 ; j < 10 ; j++ )
        {
            cout << "\t" << Plansza_Obrona[i][j];
        }
        cout <<"\t"<< i;
        cout << "\n\n\n";
    }
    cout << "\t \tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\t\tA\tB\tC\tD\tE\tF\tG\tH\tI\tJ\n\n\n";
return;
}

//-------------------------------------------------------------------------------------

void Plansza_Gracza::strzal_test()
{
    string wybor;
    cout << "\n\n gdzie chcesz strzelic ? : ";
    cin >> wybor;

    char x = wybor[0];
    char y = wybor[1];

    if(!cin.good() || wybor.length() !=2)
    {
        unsigned int ile= rand()%75+1;
        system("clear");
        cout << "jasne...strzal zmarnowany...\t"  << wybor;
        for(unsigned int i = 0 ; i <ile ; i++)
            {
                cout << "*";
            }
    }

    else if(Plansza_Obrona[y-'0'][x-'a'] == 'o')
    {
        ile_TAM_zostalo--;
        Plansza_Atak[y-'0'][x-'a'] = 'x';
        Plansza_Obrona[y-'0'][x-'a'] = 'X';
        system("clear");
        cout << "trafiony!... [ " << wybor <<" ]";
    }

    else if( ( (wybor[0]-'a') < 0 ) || ( ( wybor[0]-'a') > 9 ) || ( ( wybor[1]-'0') < 0 ) || ( (wybor[1]-'0') > 9 ) )
    {
        unsigned int ile= rand()%75+1;
        system("clear");
        cout << "to se ne da! "  << "\t"<<wybor;
        for(unsigned int i = 0 ; i <ile ; i++)
            {
                cout << "*";
            }
    }

    else
    {
        if(Plansza_Atak[y-'0'][x-'a'] != ' ')
        {
            unsigned int ile= rand()%75+1;
            system("clear");
            cout << " [ x ]  " << x << " [ y ]  "<< y << "\t<--- juz oddano strzal w to miejsce...\t";
            for(unsigned int i = 0 ; i <ile ; i++)
            {
                cout << "*";
            }
        }
        else
        {
            Plansza_Atak[y-'0'][x-'a'] = '.';
            Plansza_Obrona[y-'0'][x-'a'] = '.';
            system("clear");
            cout << " [ x ]  " << x << " [ y ]  "<< y;
        }
    }

return;
}
//-------------------------------------------------------------------------------------

string Plansza_Gracza::strzal_single_player()
{
    string wybor;
    cout << "\n\n gdzie chcesz strzelic ? : ";
    cin >> wybor;

    char x = wybor[0];
    char y = wybor[1];

    if(!cin.good() || wybor.length() !=2)
    {
        unsigned int ile= rand()%75+1;
        system("clear");
        cout << "\njasne...strzal zmarnowany...\t"  << wybor;
        for(unsigned int i = 0 ; i <ile ; i++)
            {
                cout << "*";
            }
    }

    else if( ( (wybor[0]-'a') < 0 ) || ( ( wybor[0]-'a') > 9 ) || ( ( wybor[1]-'0') < 0 ) || ( (wybor[1]-'0') > 9 ) )
    {
        unsigned int ile= rand()%75+1;
        system("clear");
        cout << "\nto se ne da! "  << "\t"<<wybor;
        for(unsigned int i = 0 ; i <ile ; i++)
            {
                cout << "*";
            }
    }


        else if(Plansza_Atak[y-'0'][x-'a'] != ' ')
        {
            unsigned int ile= rand()%75+1;
            system("clear");
            cout << "\n [ x ]  " << x << " [ y ]  "<< y << "\t<--- juz oddano strzal w to miejsce...\t";
            for(unsigned int i = 0 ; i <ile ; i++)
            {
                cout << "*";
            }
        }
        else
        {
            Plansza_Atak[y-'0'][x-'a'] = '.';
            system("clear");
            cout << "\n [ x ]  " << x << " [ y ]  "<< y;
        }

return wybor;
}
//-------------------------------------------------------------------------------------
void Plansza_Gracza::strzal_single_player_trafiony(string cel)
{
    char x = cel[0];
    char y = cel[1];
    ile_TAM_zostalo--;

    Plansza_Atak[y-'0'][x-'a'] = 'x';
    system("clear");
    cout << "\ntrafiony!... [ " << cel <<" ]";
}


//-------------------------------------------------------------------------------------
void Plansza_Gracza::win()
{
    ile_TAM_zostalo = 0;
}


//-------------------------------------------------------------------------------------
void Plansza_Gracza::lost()
{
    ile_TU_zostalo = 0;
}

//-------------------------------------------------------------------------------------


string Plansza_Gracza::czy_grac_dalej()
{
    string wybor ="n";

      cout << "chcesz dalej grac? nacisnij 't' i [enter]; nie? nacisnij inny klawisz i [enter] ";
      cin >> wybor;

      if(wybor != "t")
      {
        wybor = "n";
      }

return wybor;
}


bool Plansza_Gracza::sprawdz_string(string strzal)
{
    char x = strzal[0];
    char y = strzal[1];

    if(Plansza_Obrona[y-'0'][x-'a'] == 'o')
    {
        return true;
        ile_TU_zostalo--;
    }
    else return false;
}


void Plansza_Gracza::sprawdz_liczbe(unsigned int strzal)
{
        unsigned int x = strzal/10;
        unsigned int y = strzal%10;
        //cout << "\n\n"<< strzal << "\n\n";
        if(Plansza_Obrona[x][y] == ' ')
        {
            Plansza_Obrona[x][y] = '.';
        }
        else
        {
            Plansza_Obrona[x][y] = 'x';
            cout << "\t\twlasna jednostka trafiona !!!";
            ile_TU_zostalo--;
        }
  return;
}

//-------------------------------------------------------------------------------------

unsigned int Plansza_Komputera::ruch()
{
    for (unsigned int i=0; i<=1;)
    {
        unsigned int losuj = rand()%100;
        unsigned int x = losuj/10;
        unsigned int y = losuj%10;

        if(Plansza_Atak[x][y] == 'x')
        {
            continue;
        }

        else
        {
            Plansza_Atak[x][y] = 'x';
            i++;
            cout << "\n\nKomputer strzela : [ " << y << " ][ " << x << " ]\n\n";
            return losuj;
        }
    }
}
//---------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------

bool Plansza_Komputera::sprawdz_string(string strzal)
{
    char x = strzal[0];
    char y = strzal[1];

    if(Plansza_Obrona[y-'0'][x-'a'] == 'o')
    {
        return true;
        ile_TU_zostalo--;
    }
    else return false;
}

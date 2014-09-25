#include <iostream>
#include <climits>
#include <cstdlib>
#include <unistd.h>

#include "zarzadca.h"
#include "plansze.h"
#include "gracze.h"
#include "gra_jednoosobowa.h"
#include "udp_game.h"

using namespace std;


void menu()
{
    cout <<"\n\nMENU:\n";
    cout <<"\n1. single_test_game";
    cout <<"\n2. single_player";
    cout <<"\n3. udp_game [niedostepna jeszcze]";
}

void wybierz_gre()
{
    char i='1';
    menu();
    cout << "\n\n wybierz opcje gry : ";
    cin >> i;

      while(!cin.good() ||( i!= '1' && i!= '2' && i!= '3'))
      {
          system("clear");
          cout << "\nnie ma takiej opcji, jeszcze raz!\n";
          cin.clear();
          cin.ignore(INT_MAX, '\n');
          menu();
          cout << "\n\n wybierz opcje gry : ";
          cin >> i;
      }

      if(i=='1')
      {
          single_test();
      }

      else if(i=='2')
      {
          single_player();
      }

      else if(i=='3')
      {
          udp_game();
      }
}


void koniec()
{

        for (unsigned int i=0 ; i<= 5; i++)
        {
            if(i==0)
            {
                system("clear");
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t";
                cout << "          KONIEC GRY!"<< flush;
                sleep(1);
            }
            else if(i==1)
            {
                system("clear");
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t";
                cout << "        * KONIEC GRY! *"<< flush;
                sleep(1);
            }
            else if(i==2)
            {
                system("clear");
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t";
                cout << "      * * KONIEC GRY! * *"<< flush;
                sleep(1);
            }
             else if(i==3)
            {
                system("clear");
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t";
                cout << "    * * * KONIEC GRY! * * *" << flush;
                sleep(1);
            }
            else if(i==4)
            {
                system("clear");
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t";
                cout << "  * * * * KONIEC GRY! * * * *"<< flush;
                sleep(1);
            }
            else if(i==5)
            {
                 system("clear");
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t";
                cout << "* * * * * KONIEC GRY! * * * * *"<< flush;
                sleep(1);
            }
        }

        cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t\t\tJESLI  "<<flush;;
        usleep(1200000);
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\tCHCESZ  "<<flush;
        usleep(1200000);
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tZAGRAC  "<<flush;
        usleep(1200000);
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\tWLACZ  "<<flush;
        usleep(1200000);
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tJESZCZE  "<<flush;
        usleep(1200000);
        cout << "\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tRAZ  "<<flush;
        usleep(1200000);
        cout << flush;
        usleep(3000000);

    cout << "\n\n\n\n\n\n\n\n\n\n\n";
  return;


}



void przegrana()
{

        for (unsigned int i=0 ; i<= 5; i++)
        {
            if(i==0)
            {
                system("clear");
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t";
                cout << "          P R Z E G R Y W A S Z !"<< flush;
                sleep(1);
            }
            else if(i==1)
            {
                system("clear");
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t";
                cout << "        ( P R Z E G R Y W A S Z ! )"<< flush;
                sleep(1);
            }
            else if(i==2)
            {
                system("clear");
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t";
                cout << "      ( ( P R Z E G R Y W A S Z ! ) )"<< flush;
                sleep(1);
            }
             else if(i==3)
            {
                system("clear");
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t";
                cout << "    ( ( ( P R Z E G R Y W A S Z ! ) ) )" << flush;
                sleep(1);
            }
            else if(i==4)
            {
                system("clear");
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t";
                cout << "  ( ( ( ( P R Z E G R Y W A S Z ! ) ) ) )"<< flush;
                sleep(1);
            }
            else if(i==5)
            {
                 system("clear");
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t";
                cout << "( ( ( ( ( P R Z E G R Y W A S Z ! ) ) ) ) )"<< flush;
                sleep(1);
            }
        }

    sleep(2);
    cout << "\n\n\n\n\n\n\n\n\n\n\n";
  return;


}

void wygrana()
{

        for (unsigned int i=0 ; i<= 5; i++)
        {
            if(i==0)
            {
                system("clear");
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t";
                cout << "          W Y G R Y W A S Z !"<< flush;
                sleep(1);
            }
            else if(i==1)
            {
                system("clear");
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t";
                cout << "        ^ W Y G R Y W A S Z ! ^"<< flush;
                sleep(1);
            }
            else if(i==2)
            {
                system("clear");
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t";
                cout << "      ^ ^ W Y G R Y W A S Z ! ^ ^"<< flush;
                sleep(1);
            }
             else if(i==3)
            {
                system("clear");
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t";
                cout << "    ^ ^ ^ W Y G R Y W A S Z ! ^ ^ ^" << flush;
                sleep(1);
            }
            else if(i==4)
            {
                system("clear");
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t";
                cout << "  ^ ^ ^ ^ W Y G R Y W A S Z ! ^ ^ ^ ^"<< flush;
                sleep(1);
            }
            else if(i==5)
            {
                 system("clear");
                cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t";
                cout << "^ ^ ^ ^ ^ W Y G R Y W A S Z ! ^ ^ ^ ^ ^"<< flush;
                sleep(1);
            }
        }

    sleep(2);
    cout << "\n\n\n\n\n\n\n\n\n\n\n";
  return;

}

void znaczek_tworzenie_planszy()
{
cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tTWORZENIE PLANSZY";
    cout << "\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t";

    for (unsigned int i=0 ; i<17; i++)
    {
        if(i<6)
        {
            cout << "<"<< flush;
        }
        else if(i<8)
        {
            cout << ")"<< flush;
        }
        else if(i<9)
        {
            cout << "|"<< flush;
        }
        else if(i<11)
        {
            cout << "("<< flush;
        }
        else if(i<17)
        {
            cout << ">"<< flush;
        }
        usleep(400000);
    }
    system("clear");
}

void kody()
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
  cout << "  pozniej XD"<< flush;
}


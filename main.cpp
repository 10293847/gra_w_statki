#include <iostream>
#include <string>
#include <cstring>
#include <climits>
#include <ctime>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <vector>

#include <unistd.h>
#include <pthread.h>
#include <ifaddrs.h>
#include <netinet/in.h>

#include <cstdlib>

#include "gra_jednoosobowa.h"
#include "udp_game.h"
#include "main_funkcje.h"
#include "zarzadca.h"
#include "plansze.h"
#include "gracze.h"
#include "SimpleUDP.h"

using namespace std;


class Board
{
    protected:
        SimpleUDP *udp;
    public:
        Board()
        {
            udp = new SimpleUDP("192.168.207.255", 1234);
        }

        virtual ~Board() { delete udp; }

        virtual void led(uint8_t r, uint8_t g, uint8_t b)
        {
            if(r > 100) r = 100;
            if(g > 100) g = 100;
            if(b > 100) b = 100;
            string command = "rgb " + to_string(r) + " " + to_string(g) + " " + to_string(b);
            udp->send(command);
        }
};

int main()
{
srand(time(NULL));

wybierz_gre();




return 0;
}

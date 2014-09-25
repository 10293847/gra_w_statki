#pragma once

#include <iostream>
#include <string>

using namespace std;


class Gracz
{
friend class Zarzadca;
private:

    string identyfikator;
    string id_gry;

public:

Gracz();
~Gracz();

void przedstaw_sie();
bool gracz_start();
};

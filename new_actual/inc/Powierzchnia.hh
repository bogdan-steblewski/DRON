#pragma once

#include "Bryla.hh"

#include <iostream>

class Powierzchnia : public Bryla
{

public:
    Powierzchnia(std::shared_ptr<drawNS::Draw3DAPI> &api) : Bryla(api)
    {
        Wektor3D tmp;
        kat_obr = 0;
       ilosc_figur = 0;

        for (int i = -100; i <= 100; i += 10)
        {
            ilosc_punktow = 0;
            for (int j = -100; j <= 100; j += 10)
            {
                tmp[0] = j;
                tmp[1] = i;
                if (ilosc_punktow % 2 == 0)
                    tmp[2] = 30;
                else
                    tmp[2] = 35;
                WekWierzcholkow.push_back(tmp);
                ilosc_punktow++;
            }
            ilosc_figur++;
        }
    }
};


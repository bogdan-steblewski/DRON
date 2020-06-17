#pragma once

#include "Bryla.hh"

class Prostopadloscian : public Bryla
{

public:
    Prostopadloscian(Wektor3D WekWierzcholkow1,double x,double y, double z, std::shared_ptr<drawNS::Draw3DAPI> &api):Bryla(api)
    {
        kat_obr = 0;
        ilosc_figur=2;
        ilosc_punktow=4;
        for (int i = 0; i < 8; i++)
            WekWierzcholkow.push_back(WekWierzcholkow1);

        WekWierzcholkow[1][2] += z;
        WekWierzcholkow[2][1] += y;
        WekWierzcholkow[2][2] += z;
        WekWierzcholkow[3][1] += y;
        WekWierzcholkow[4][0] += x;
        WekWierzcholkow[5][0] += x;
        WekWierzcholkow[5][2] += z;
        WekWierzcholkow[6][0] += x;
        WekWierzcholkow[6][1] += y;
        WekWierzcholkow[6][2] += z;
        WekWierzcholkow[7][0] += x;
        WekWierzcholkow[7][1] += y;
        kopia = WekWierzcholkow;

    }
};

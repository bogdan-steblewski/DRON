#pragma once

#include "Bryla.hh"

class Prostopadloscian : public Bryla
{

public:
    Prostopadloscian(Wektor3D wierz1,double x,double y, double z, std::shared_ptr<drawNS::Draw3DAPI> &api):Bryla(api)
    {
        
        kat_obr = 0;
        ilosc_figor=2;
        ilosc_punktow=4;
        for (int i = 0; i < 8; i++)
            Wierz.push_back(wierz1);

        Wierz[1][2] += z;
        Wierz[2][1] += y;
        Wierz[2][2] += z;
        Wierz[3][1] += y;
        Wierz[4][0] += x;
        Wierz[5][0] += x;
        Wierz[5][2] += z;
        Wierz[6][0] += x;
        Wierz[6][1] += y;
        Wierz[6][2] += z;
        Wierz[7][0] += x;
        Wierz[7][1] += y;
        kopia = Wierz;

    }
};

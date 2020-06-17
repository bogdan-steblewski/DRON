#pragma once

#include "Bryla.hh"
#include "Przeszkoda.hh"
#include <iostream>

using namespace drawNS;

class Dno:public Bryla
{

public:
    Dno(std::shared_ptr<drawNS::Draw3DAPI> &api)
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

                tmp[2] = -40;

                WekWierzcholkow.push_back(tmp);
                ilosc_punktow++;
            }
            ilosc_figur++;
        }
    }

    void rysuj()
    {
        vector<vector<Point3D>> nowy;
        for (int j = 0; j < ilosc_figur; j++)
        {
            vector<Point3D> nowy2;
            for (int i = 0; i < ilosc_punktow; i++)
            {

                nowy2.push_back(Point3D(WekWierzcholkow[i + ilosc_figur * j][0], WekWierzcholkow[i + ilosc_figur * j][1], WekWierzcholkow[i + ilosc_figur * j][2]));
            }

            nowy.push_back(nowy2);
        }
        api->draw_surface(nowy, "grey");
    }
};

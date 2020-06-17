#pragma once
#include "Powierzchnia.hh"

class Tafla : public Powierzchnia
{
public:
    Tafla(std::shared_ptr<drawNS::Draw3DAPI> &api) : Powierzchnia(api){};

    void rysuj()
    {
        vector<vector<Point3D>> nowy;
        for (int j = 0; j < ilosc_figur; j++)
        {
            vector<Point3D> nowy2;
            for (int i = 0; i < ilosc_punktow; i++)
            {

                nowy2.push_back(drawNS::Point3D(WekWierzcholkow[i + ilosc_figur * j][0], WekWierzcholkow[i + ilosc_figur * j][1], WekWierzcholkow[i + ilosc_figur * j][2]));
            }

            nowy.push_back(nowy2);
        }
        api->draw_surface(nowy, "blue");
    }
};

#pragma once
#include "Dr3D_gnuplot_api.hh"
#include "Draw3D_api_interface.hh"
#include <vector>
#include "Wektor3D.hh"
#include "Macierz.hh"
#include <iostream> //na wszelki wypadek
#include "Przeszkoda.hh"
#include "MathWzorce.hh"
using drawNS::Point3D;
using std::vector;

class Dron : public Przeszkoda //, public Prostopadloscian
{
    static int ilosc_obiektow;

public:
    void ruch(double odl, std::shared_ptr<drawNS::Draw3DAPI> api) //override
    {
        int odleg = odl;
        for (int i; i < odleg; i++)
        {
            //TERAZ mnozenie przez wektor, 
            //uwzgledniajacy obrot wzgledem plaszczyzny XY

            //trzeba zmienic sposob odswiezania
            //tu bedzie animacja i ogolnie ruch
        }
    };
    void obrot(double kat, std::shared_ptr<drawNS::Draw3DAPI> api) // override
    {
        int angle = kat;
        for (int i; i < angle; i++)
        {
            //TERAZ mnozenie przez macierz


            //trzeba zmienic sposob odswiezania
            //tu tez bedzie animacja i ruch
        }
    };

    void rysuj(std::shared_ptr<drawNS::Draw3DAPI> api);
    Dron(std::shared_ptr<drawNS::Draw3DAPI> api)
    {
        rysuj(api);
    };

    static int getIloscObiektow()
    {
        return ilosc_obiektow;
    };
};
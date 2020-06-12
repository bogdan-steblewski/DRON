#ifndef REAL
#define REAL

#include <iostream>
#include <cmath>
#include "KsztaltyMatematyczne.hh"

class Przeszkoda //3d prostopadloscian, graniastoslup, dron
{
};
class PrzeszkodaProstopadloscian : public Przeszkoda, public Prostopadloscian
{
};
class Sruba : public Graniastoslup6
{
};

class Tafla : public Plaszczyzna, public Przeszkoda
{
public:
    Tafla(drawNS::Draw3DAPI *api);
    void rysuj(drawNS::Draw3DAPI *api);
};

class Dno : public Plaszczyzna, public Przeszkoda
{
public:
    Dno(drawNS::Draw3DAPI *api);
    void rysuj(drawNS::Draw3DAPI *api);
};

#endif
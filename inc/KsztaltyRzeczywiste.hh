#ifndef REAL
#define REAL

#include <iostream>
#include <cmath>
#include "KsztaltyMatematyczne.hh"

class Przeszkoda //3d prostopadloscian, graniastoslup, dron
{
};
class PrzeszkodaProstopadloscian
{
};
class Sruba
{
};

class Tafla : public Plaszczyzna
{
public:
    Tafla(drawNS::Draw3DAPI *api);
    void rysuj(drawNS::Draw3DAPI *api);
};

class Dno : public Plaszczyzna
{
public:
    Dno(drawNS::Draw3DAPI *api);
    void rysuj(drawNS::Draw3DAPI *api);
};

#endif
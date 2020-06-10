#ifndef REAL
#define REAL

#include <iostream>
#include <cmath>
#include "KszaltyMatematyczne.hh"

class Przeszkoda //3d prostopadloscian, graniastoslup, dron
{
};
class PrzeszkodaProsta
{};
class Sruba
{};
class Tafla:public Plaszczyzna
{};
class Dno:public Plaszczyzna
{
public:
void rysuj(drawNS::Draw3DAPI* api);
};

#endif
#ifndef MATHSAPES
#define MATHSAPES

#include <cmath>
#include <iostream>
#include "Dr3D_gnuplot_api.hh"
#include "Draw3D_api_interface.hh"

using std::vector;
using drawNS::Point3D; 


class Macierz
{};
class MacierzOb:public Macierz
{};
class Macierz3x3:public Macierz
{};
class Wektor3d
{};
class Bryla
{};
class Prostopadloscian:public Bryla
{};
class Graniastoslup6:public Bryla
{};
class Plaszczyzna
{};
#endif
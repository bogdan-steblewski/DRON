#ifndef MATHSAPES
#define MATHSAPES

#include <cmath>
#include <iostream>
#include "Dr3D_gnuplot_api.hh"
#include "Draw3D_api_interface.hh"


using std::vector;
using drawNS::Point3D; 

/*
class MacierzOb:public Macierz3x3
{
    //przepisane z Wikipedii
  Macierz3x3  obrot_x(double kat)
{
    Macierz3x3 Matrix;
    Matrix[0][0] = 1;
    Matrix[0][1] = 0;
    Matrix[0][2] = 0;
    Matrix[1][0] = 0;
    Matrix[1][1] = cos(kat * M_PI / 180);
    Matrix[1][2] = -sin(kat * M_PI / 180);
    Matrix[2][0] = 0;
    Matrix[2][1] = sin(kat * M_PI / 180);
    Matrix[2][2] = cos(kat * M_PI / 180);
    return Matrix;
}

Macierz3x3 obrot_y (double kat)
{
    Macierz3x3 Matrix;
    Matrix[0][0] = cos(kat * M_PI / 180);
    Matrix[0][1] = 0;
    Matrix[0][2] = sin(kat * M_PI / 180);
    Matrix[1][0] = 0;
    Matrix[1][1] = 1;
    Matrix[1][2] = 0;
    Matrix[2][0] = -sin(kat * M_PI / 180);
    Matrix[2][1] = 0;
    Matrix[2][2] = cos(kat * M_PI / 180);
    return Matrix;
}

Macierz3x3 obrot_z (double kat)
{
    Macierz3x3 Matrix;
    Matrix[0][0] = cos(kat * M_PI / 180);
    Matrix[0][1] = -sin(kat * M_PI / 180);
    Matrix[0][2] = 0;
    Matrix[1][0] = sin(kat * M_PI / 180);
    Matrix[1][1] = cos(kat * M_PI / 180);
    Matrix[1][2] = 0;
    Matrix[2][0] = 0;
    Matrix[2][1] = 0;
    Matrix[2][2] = 1;
    return Matrix;
}

};
};*/
class Wektor3d
{
    //wektor przemieszczenia
};
class Bryla: public Wektor3d//,public MacierzOb,
{};
class Prostopadloscian:public Bryla//, public Wektor3d//, public interfejsRysowania
{};
class Graniastoslup6:public Bryla//, public Wektor3d//, public InterfejsRysowania
{};
class Plaszczyzna//:public interfejsRysowania
{};
#endif
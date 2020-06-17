#pragma once

#include <vector>
#include <iostream>
#include "Wektor3D.hh"
#include "Macierz3x3.hh"
#include "API/Dr3D_gnuplot_api.hh"
#include <cmath>
using drawNS::APIGnuPlot3D;
using drawNS::Point3D;
using std::cout;
using std::endl;
using std::vector;

//mozna zrobic dziedziczenie z macierzy i z wektora
class Bryla : Macierz3x3, Wektor3D //przodek dna, powierzchni, prostopadlosciana, tafli, drona
{
protected:
   std::vector<Wektor3D> WekWierzcholkow;
   std::shared_ptr<drawNS::Draw3DAPI> &api;
   std::vector<Wektor3D> kopia;
   Wektor3D przes;
   double kat_obr;
   int id;
   //static
    int ilosc_figur;
    static int ilosc_obiektow;
   int ilosc_punktow;
   //
   double x, y, z;

public:
   Wektor3D get_prze() { return przes; }
   Bryla(std::shared_ptr<drawNS::Draw3DAPI> &api) : api(api) {ilosc_obiektow++;}
   Wektor3D operator[](int i) const { return WekWierzcholkow[i]; }
   Wektor3D &operator[](int i) { return WekWierzcholkow[i]; }
   virtual void rysuj()
   {};
};

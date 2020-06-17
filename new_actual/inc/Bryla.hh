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
class Bryla : Macierz3x3, Wektor3D //przodek dna, powierzchni, prostopadlosciana
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
   int ilosc_punktow;
   //
   double x, y, z;

public:
   Wektor3D get_prze() { return przes; }
   Bryla(std::shared_ptr<drawNS::Draw3DAPI> &api) : api(api) {}
   Wektor3D operator[](int i) const { return WekWierzcholkow[i]; }
   Wektor3D &operator[](int i) { return WekWierzcholkow[i]; }
  
   //do drona
   void ruch(double droga, double obrot, double wznoszenie)
   {

      kat_obr += obrot;
      Wektor3D wek;
      wek[0] = droga;

      przes = przes + mZ(kat_obr) * (mY(wznoszenie) * wek);
      kopia = WekWierzcholkow;
      for (int i = 0; i < (int)kopia.size(); i++)
      {
         kopia[i] = mZ(kat_obr) * (mY(wznoszenie) * WekWierzcholkow[i]) + przes;
      }

      api->erase_shape(id);
   }


   void rysuj()
   {
      vector<vector<Point3D>> figura;
      for (int j = 0; j < ilosc_figur; j++)
      {
         vector<Point3D> plaszczyzna;
         for (int i = 0; i < ilosc_punktow; i++)
         {
            plaszczyzna.push_back(drawNS::Point3D(kopia[i + ilosc_punktow * j][0], kopia[i + ilosc_punktow * j][1], kopia[i + ilosc_punktow * j][2]));
         }
         figura.push_back(plaszczyzna);
      }
      id = api->draw_polyhedron(figura, "red");
   }
};

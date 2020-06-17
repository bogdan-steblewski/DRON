#pragma once
#include "Bryla.hh"
#include "Przeszkoda.hh"
#include <iostream>

class Dron:public Bryla{
public:
Dron(std::shared_ptr<drawNS::Draw3DAPI> &api):Bryla(api){
};
   void ruch(double droga, double obrot, double wznoszenie)
   {

      kat_obr += obrot;
      Wektor3D wek;
      wek[0] = droga;

      przes = przes + mZ(kat_obr) * (mY(wznoszenie) * wek);//dodawanie wektorow
      kopia = WekWierzcholkow;
      for (int i = 0; i < (int)kopia.size(); i++)
      {
         kopia[i] = mZ(kat_obr) * (mY(wznoszenie) * WekWierzcholkow[i]) + przes;
      }

      api->erase_shape(id);
   }
   void rysuj() override
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
      id = api->draw_polyhedron(figura, "yellow");
   }
};
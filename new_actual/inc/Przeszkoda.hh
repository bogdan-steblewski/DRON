#pragma once
#include "Prostopadloscian.hh"

class Przeszkoda : public Prostopadloscian
{
public:
  Przeszkoda(Wektor3D wierz1, double x, double y, double z, std::shared_ptr<drawNS::Draw3DAPI> &api) : Prostopadloscian(wierz1, x, y, z, api)
  {
    this->x = x;
    this->y = y;
    this->z = z;
  }
  virtual bool czy_kolizja(Prostopadloscian pros)
  {

    if (pros.get_prze()[0] >= przes[0] - x / 2 - 5 && pros.get_prze()[0] <= przes[0] + x / 2 + 5)
      if (pros.get_prze()[1] >= przes[1] - y / 2 - 5 && pros.get_prze()[1] <= przes[1] + y / 2 + 5)
        if (pros.get_prze()[2] >= przes[2] - z / 2 - 5 && pros.get_prze()[2] <= przes[2] + z / 2 + 5)
          return true;

    return false;
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
    id = api->draw_polyhedron(figura, "red");
  }
};
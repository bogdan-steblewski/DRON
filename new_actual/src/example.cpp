#include <iostream>
#include "../inc/API/Dr3D_gnuplot_api.hh"
#include "../inc/Prostopadloscian.hh"
#include "../inc/Dno.hh"
#include "../inc/Dron.hh"
#include <list>
#include <memory>
#include "../inc/Powierzchnia.hh"
#include "../inc/PrzeszkodaPlasz.hh"
#include "../inc/PrzeszkodaPret.hh"
#include "../inc/PrzeszkodaPros.hh"
#include "../inc/Tafla.hh"
#include <cstdlib>
using drawNS::APIGnuPlot3D;
using drawNS::Point3D;
using std::cout;
using std::endl;
using std::make_shared;
using std::rand;
using std::shared_ptr;
using std::vector;

void Menu();

int main()
{
  Wektor3D start, start2, start3;
  start[0] = -5;
  start[1] = -5;
  start[2] = -5;
  start2[0] = -rand() % 35 + 5;
  start2[1] = rand() % 35 + 5;
  start2[2] = -rand() % 35 + 5;
  start3[0] = rand() % 35 + 5;
  start3[1] = -rand() % 35 + 5;
  start3[2] = -rand() % 35 + 5;
  shared_ptr<drawNS::Draw3DAPI> rysownik(new APIGnuPlot3D(-75, 75, -75, 75, -75, 75, 100)); //włacza gnuplota, pojawia się scena [-5,5] x [-5,5] x [-5,5] odświeżana co 1000 ms
  rysownik->change_ref_time_ms(0);                                                          //odświeżanie sceny zmienione na opcję "z każdym pojawieniem się lub zniknięciem kształtu"
  Dno dno(rysownik);
  Tafla pow(rysownik);
  vector<shared_ptr<Przeszkoda>> przeszkod;
  przeszkod.push_back(make_shared<PrzeszkodaPros>(start2, 10, 10, 10, rysownik));
  przeszkod.push_back(make_shared<PrzeszkodaPros>(start3, 10, 10, 10, rysownik));
  for (uint i = 0; i < przeszkod.size(); i++)
  {
    // tab[i]->ruch(30, 0, rand() % 360);
    przeszkod[i]->rysuj();
  }
Dron dron(std::shared_ptr<drawNS::Draw3DAPI> &api);
 dron.rysuj();
  dno.rysuj();
  pow.rysuj();
  double kat, droga;
  char znak;
  int indx;
  Menu();
  do
  {
    std::cin >> znak;
    switch (znak)
    {
    case 'a':

    case 'r':
      std::cout << "kat wznoszenia" << std::endl;
      std::cin >> kat;
      std::cout << "odleglosc" << std::endl;
      std::cin >> droga;
      for (int i = 0; i < droga; i++)
      {
        for (uint j = 0; j < przeszkod.size(); j++)
        {
          if (przeszkod[j]->czy_kolizja(dr))
            i = droga;
        }
        dron.ruch(1, 0, kat);
        dron.rysuj();
      }
      dron.ruch(1, 0, 0);
      dron.rysuj();
      break;

    case 'o':
      std::cout << "kat obrotu" << std::endl;
      std::cin >> kat;
      for (int i = 0; i < kat; i++)
      {
        dron.ruch(0, 1, 0);
        dron.rysuj();
      }
      break;

    case 'm':
      Menu();
      break;

    case 'q':
      cout << "Konczenie dzialania programu\n";
      break;
    default:
      cout << "Nieznana opcja\n";
      break;
    }
  } while (znak != 'q');
}

void Menu()
{
  cout << "\tMENU UZYTKOWNIKA\n"
       << "r-ruch\n"
       << "o-obrot\n"
       << "a-dodaj drona\n"
       << "m-menu\n"
       << "q-koniec\n";
}

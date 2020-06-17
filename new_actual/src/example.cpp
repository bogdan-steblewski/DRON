#include <iostream>
#include "../inc/API/Dr3D_gnuplot_api.hh"
#include "../inc/Prostopadloscian.hh"
#include "../inc/Dno.hh"
#include <list>
#include <memory>
#include "../inc/Powierzchnia.hh"
#include "../inc/PrzeszkodaPlasz.hh"
#include "../inc/PrzeszkodaPret.hh"
#include "../inc/PrzeszkodaPros.hh"
using drawNS::APIGnuPlot3D;
using drawNS::Point3D;
using std::cout;
using std::endl;
using std::vector;

void wait4key()
{
  do
  {
    std::cout << "\n Press a key to continue..." << std::endl;
  } while (std::cin.get() != '\n');
}

void Menu();

int main()
{
//Wektor3W Wektor3D;
  Wektor3D start;
  start[0] = -5;
  start[1] = -5;
  start[2] = -5;
  std::shared_ptr<drawNS::Draw3DAPI> rysownik(new APIGnuPlot3D(-75, 75, -75, 75, -75, 75, 100));//włacza gnuplota, pojawia się scena [-5,5] x [-5,5] x [-5,5] odświeżana co 1000 ms
  rysownik->change_ref_time_ms(0); //odświeżanie sceny zmienione na opcję "z każdym pojawieniem się lub zniknięciem kształtu"
  Dno dno(rysownik);
  std::vector<std::shared_ptr<Przeszkoda>> tab;
  tab.push_back(std::make_shared<PrzeszkodaPlasz>(start, 10, 10, 0, rysownik));
  tab.push_back(std::make_shared<PrzeszkodaPret>(start, 10, 0, 0, rysownik));
  tab.push_back(std::make_shared<PrzeszkodaPros>(start, 10, 10, 10, rysownik));
  for (int i = 0; i < tab.size(); i++)
  {
    tab[i]->ruch(30, 0, rand() % 360);
    tab[i]->rysuj();
  }
  Powierzchnia pow(rysownik);

  Prostopadloscian pr(start, 10, 10, 10, rysownik);
  pr.rysuj();
  dno.rysuj();
  pow.rysuj();
  double kat, droga;
  char znak;
  Menu();
  do
  {
    std::cin >> znak;
    switch (znak)
    {
    case 'm':
      Menu();
      break;

    case 'r':
      std::cout << "kat wznoszenia" << std::endl;
      std::cin >> kat;
      std::cout << "odleglosc" << std::endl;
      std::cin >> droga;
      for (int i = 0; i < droga; i++)
      {
        for (int j = 0; j < tab.size(); j++)
        {
          if (tab[j]->czy_kolizja(pr))
            i = droga;
        }
        pr.ruch(1, 0, kat);
        pr.rysuj();
      }
      pr.ruch(1, 0, 0);
      pr.rysuj();
      break;

    case 'o':
      std::cout << "kat obrotu" << std::endl;
      std::cin >> kat;
      for (int i = 0; i < kat; i++)
      {
        pr.ruch(0, 1, 0);
        pr.rysuj();
      }
      break;

    case 'q':
      break;
    }
  } while (znak!='q');
}

void Menu()
{
  cout << "\tMENU UZYTKOWNIKA\n"
       << "r-ruch\n"
       << "o-obrot\n"
       << "m-menu\n"
       << "q-koniec\n";
}

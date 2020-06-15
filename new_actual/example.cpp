#include <iostream>
#include "Dr3D_gnuplot_api.hh"
#include "Prostopadloscian.hh"
#include "Dno.hh"
#include <list>
#include <memory>
#include "Powierzchnia.hh"
#include "PrzeszkodaPlasz.hh"
#include "PrzeszkodaPret.hh"
#include "PrzeszkodaPros.hh"
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

int main()
{

 Wektor3D start;
  start[0] = -5;
  start[1] = -5;
  start[2] = -5;
  std::shared_ptr<drawNS::Draw3DAPI> api(new APIGnuPlot3D(-100, 100, -100, 100, -100, 100, 1000)); //włacza gnuplota, pojawia się scena [-5,5] x [-5,5] x [-5,5] odświeżana co 1000 ms
  //drawNS::Draw3DAPI * api = new APIGnuPlot3D(-5,5,-5,5,-5,5,1000); //alternatywnie zwykły wskaźnik
  api->change_ref_time_ms(0); //odświeżanie sceny zmienione na opcję "z każdym pojawieniem się lub zniknięciem kształtu"
  Dno dno(api);
  std::vector<std::shared_ptr<Przeszkoda > >tab;
tab.push_back(std::make_shared<PrzeszkodaPlasz>(start,10,10,0,api));
tab.push_back(std::make_shared<PrzeszkodaPret>(start,10,0,0,api));
tab.push_back(std::make_shared<PrzeszkodaPros>(start,10,10,10,api));
for(int i=0; i<tab.size(); i++)
{
     tab[i]->ruch(30, 0, rand()%360);
         tab[i]->rysuj();
}
  Powierzchnia pow(api);
 
  Prostopadloscian pr(start, 10, 10, 10, api);
  pr.rysuj();
  dno.rysuj();
  pow.rysuj();
  char znak;
  double kat, droga;
  while (1)
  {
    cout<<" r ruch, o obrot , k koniec "<<endl;
    std::cin >> znak;
    switch (znak)
    {
    case 'r':
      std::cout << "kat wznoszenia" << std::endl;
      std::cin >> kat;
      std::cout << "droga" << std::endl;
      std::cin >> droga;
      for (int i = 0; i < droga; i++)
      {
        for(int j=0; j<tab.size(); j++)
{
    if( tab[j]->czy_kolizja(pr))
        i=droga;
}
        pr.ruch(1, 0, kat);
        pr.rysuj();
      }
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
    }
  }

  wait4key();
}

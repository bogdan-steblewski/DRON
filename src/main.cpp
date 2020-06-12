#include <iostream>
#include "../inc/Dr3D_gnuplot_api.hh"
#include "../inc/KsztaltyRzeczywiste.hh"
#include "../inc/Dron.hh"

using drawNS::APIGnuPlot3D;
using drawNS::Point3D;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

void menu();

int main()
{

  drawNS::Draw3DAPI *api = new APIGnuPlot3D(-15, 15, -15, 15, -15, 15, 10); //włacza gnuplota, pojawia się scena [-5,5] x [-5,5] x [-5,5] odświeżana co 10 ms
  Dno dno(api);
  Dron dron(api);
  Tafla tafla(api);

  menu();
char input;
      do
  {
    cin >> input;
    switch (input)
    {
    case 'r':
      cout << "\npodaj odleglosc:";
      int distance;
      cin >> distance;
      cout << "wybrano ruch na odleglosc " << distance << endl  << endl;
      //wykonanie
      break;
    case 'o':
      cout << "\npodaj kat:";
      int angle;
      cin >> angle;
      cout << "wybrano obrot o kat " << angle << endl << endl;

      break;
    case 'q':
      cout << "koniec dzialania programu\n";
      break;

    case 'm':
      menu();
      break;

    default:
      cout << "wybrano nieznana opcje\n";
      break;
    }
  }while(input!='q');

delete api;
return 0;
}

void menu()
{
  cout << "\tMENU UZYTKOWNIKA" << endl
       << " r-ruch" << endl
       << " o-obrot" << endl
       << " m-menu" << endl
       << " q-wyjscie" << endl;
}
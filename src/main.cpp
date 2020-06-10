#include <iostream>
#include "../inc/Dr3D_gnuplot_api.hh"
#include "../inc/KsztaltyRzeczywiste.hh"
#include "../inc/Dron.hh"


using std::vector;
using drawNS::Point3D;
using drawNS::APIGnuPlot3D;
using std::cout;
using std::endl;
using std::cin;

void wait4key() {
  do {
    std::cout << "\n Press a key to continue..." << std::endl;
  } while(std::cin.get() != '\n');
}

int main() {
  Dno dno;
  Dron dron;
  drawNS::Draw3DAPI * api = new APIGnuPlot3D(-15,15,-15,15,-15,15,10); //włacza gnuplota, pojawia się scena [-5,5] x [-5,5] x [-5,5] odświeżana co 10 ms

int b= dron.rysuj(api);
dno.rysuj(api);

char input='0';
while(input!='q')
 cout<<"\tMENU UZYTKOWNIKA"<<endl<<" r-ruch"<<endl<<" o-obrot"<<endl<<" q-wyjscie"<<endl; 
cin>>input;
switch (input)
{
case 'r':
cout<<"\npodaj odleglosc:\n";
int distance;
cin>>distance;
cout<<"wybrano ruch na odleglosc "<<distance<<endl;
//wykonanie
  break;
case 'o':
cout<<"\npodaj kat:\n";
int kat;
cin>>kat;
cout<<"wybrano obrot o kat "<<distance<<endl;
//wykonanie
  break;
case 'q':
cout<<"koniec dzialania programu\n";
return 0;

default:
cout<<"wybrano nieznana opcje\n";
  break;
}
  
  delete api;
  return 0;
}

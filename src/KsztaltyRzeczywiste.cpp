#include "KsztaltyRzeczywiste.hh"
#include <iostream>
#include <cmath>

using namespace std;
using std::vector;
using drawNS::Point3D;
using drawNS::APIGnuPlot3D;

class Dno:public Plaszczyzna
{
public:
void rysuj(drawNS::Draw3DAPI* api)
{
api->draw_surface(vector<vector<Point3D> > {{
	drawNS::Point3D(-15,-15,-15), drawNS::Point3D(-15,-8,-15), drawNS::Point3D(-15,0,-15), drawNS::Point3D(-15,8,-15), drawNS::Point3D(-15,15,-15)
	  },{
	drawNS::Point3D(-8,-15,-15), drawNS::Point3D(-2,0,-15), drawNS::Point3D(-2,2,-15), drawNS::Point3D(-4,2,-15), drawNS::Point3D(-15,-15,-15)       
	  },{
	drawNS::Point3D(0,-15,-15), drawNS::Point3D(-0,0,-15), drawNS::Point3D(-0,2,-15), drawNS::Point3D(-4,2,-15), drawNS::Point3D(-15,-15,-15)       
	  },{
	drawNS::Point3D(8,-15,-15), drawNS::Point3D(2,0,-15), drawNS::Point3D(2,2,-15), drawNS::Point3D(-4,2,-15), drawNS::Point3D(-15,-15,-15)       
	  },{
	drawNS::Point3D(15,-15,-15), drawNS::Point3D(4,0,-15), drawNS::Point3D(4,2,-15), drawNS::Point3D(-4,2,-15), drawNS::Point3D(-15,-15,-15)       
	  }},"grey");//rysuje szarą powierzchnie
  cout << "pojawiła się szara powierzchnia" << endl;

}
};
class Tafla:public Plaszczyzna
{};
class Przeszkoda //3d prostopadloscian, graniastoslup, dron
{
};
class PrzeszkodaProsta
{};
class Sruba
{};

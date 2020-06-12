#include "../inc/Tafla_Dno.hh"
#include <iostream>
#include <cmath>


using namespace std;
using drawNS::APIGnuPlot3D;
using drawNS::Point3D;
using std::vector;


Dno::Dno(std::shared_ptr<drawNS::Draw3DAPI> api)
{
	rysuj(api);
}

void Dno::rysuj(std::shared_ptr<drawNS::Draw3DAPI> api)
{
	api->draw_surface(vector<vector<Point3D>>{{drawNS::Point3D(-15, -15, -15), drawNS::Point3D(-15, -8, -15), drawNS::Point3D(-15, 0, -15), drawNS::Point3D(-15, 8, -15),
	 drawNS::Point3D(-15, 15, -15)}, {drawNS::Point3D(-8, -15, -15), drawNS::Point3D(-8, -8, -15), drawNS::Point3D(-8, 0, -15),
	  drawNS::Point3D(-8, 8, -15), drawNS::Point3D(-8, 15, -15)}, {drawNS::Point3D(0, -15, -15), drawNS::Point3D(0, -8, -15), 
	  drawNS::Point3D(0, 0, -15), drawNS::Point3D(0, 8, -15), drawNS::Point3D(0, 15, -15)}, {drawNS::Point3D(8, -15, -15), drawNS::Point3D(8, -8, -15),
	   drawNS::Point3D(8, 0, -15), drawNS::Point3D(8, 8, -15), drawNS::Point3D(8, 15, -15)}, {drawNS::Point3D(15, -15, -15),
	   drawNS::Point3D(15, -8, -15), drawNS::Point3D(15, 0, -15), drawNS::Point3D(15, 8, -15), drawNS::Point3D(15, 15, -15)}}, "grey"); //rysuje szarą powierzchnie

}


Tafla::Tafla(std::shared_ptr<drawNS::Draw3DAPI> api)
{
	rysuj(api);
}

void Tafla::rysuj(std::shared_ptr<drawNS::Draw3DAPI> api)
{
	api->draw_surface(vector<vector<Point3D>>{{drawNS::Point3D(-15, -15, 15), drawNS::Point3D(-15, -8, 15), drawNS::Point3D(-15, 0, 15), drawNS::Point3D(-15, 8, 15),
	 drawNS::Point3D(-15, 15, 15)}, {drawNS::Point3D(-8, -15, 15), drawNS::Point3D(-8, -8, 15), drawNS::Point3D(-8, 0,15), 
	 drawNS::Point3D(-8, 8, 15), drawNS::Point3D(-8, 15, 15)}, {drawNS::Point3D(0, -15, 15), drawNS::Point3D(0, -8,15), 
	 drawNS::Point3D(0, 0, 15), drawNS::Point3D(0, 8, 15), drawNS::Point3D(0, 15, 15)}, {drawNS::Point3D(8, -15, 15), 
	 drawNS::Point3D(8, -8, 15), drawNS::Point3D(8, 0, 15), drawNS::Point3D(8, 8, 15), drawNS::Point3D(8, 15, 15)},
	  {drawNS::Point3D(15, -15, 15), drawNS::Point3D(15, -8, 15), drawNS::Point3D(15, 0, 15), drawNS::Point3D(15, 8, 15),
	   drawNS::Point3D(15, 15, 15)}}, "blue"); //rysuje szarą powierzchnie
																																																																																																																																																																																											  //takie samo jak w dno
}
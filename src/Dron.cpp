#include "../inc/Dron.hh"
#include <iostream>
#include <cmath>

Dron::Dron(drawNS::Draw3DAPI *api)
{
	index = rysuj(api);
}

int Dron::rysuj(drawNS::Draw3DAPI *api)
{

	int b = api->draw_polyhedron(vector<vector<Point3D>>{{drawNS::Point3D(0, -2, 0), drawNS::Point3D(0, 4, 0), drawNS::Point3D(4, 4, 0), drawNS::Point3D(4, -2, 0)}, {drawNS::Point3D(0, -2, 3), drawNS::Point3D(0, 4, 3), drawNS::Point3D(4, 4, 3), drawNS::Point3D(4, -2, 3)}}, "blue"); //rysuje niebieski graniastosłup

	return b;
}
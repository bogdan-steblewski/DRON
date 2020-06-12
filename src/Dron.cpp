#include "../inc/Dr3D_gnuplot_api.hh"
#include "../inc/Dron.hh"

void Dron::rysuj(drawNS::Draw3DAPI *api)
{
	api->draw_polyhedron(vector<vector<Point3D>>{{drawNS::Point3D(0, -2, 0), drawNS::Point3D(0, 4, 0), drawNS::Point3D(4, 4, 0), drawNS::Point3D(4, -2, 0)}, {drawNS::Point3D(0, -2, 3), drawNS::Point3D(0, 4, 3), drawNS::Point3D(4, 4, 3), drawNS::Point3D(4, -2, 3)}}, "blue"); //rysuje niebieski graniastosłup
}
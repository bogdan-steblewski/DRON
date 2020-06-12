#include <iostream>
#include "../inc/Dr3D_gnuplot_api.hh"
#include "../inc/Tafla_Dno.hh"
#include "../inc/Dron.hh"


using drawNS::APIGnuPlot3D;
using drawNS::Point3D;
using std::cout;
using std::endl;
using std::vector;
//Narazie robie bez akcentu na polimorfizm, niema dokumentacju z Doxygena
int main()
{std::shared_ptr<drawNS::Draw3DAPI> api(new APIGnuPlot3D(-5,5,-5,5,-5,5,10)); //odswiezanie co 10ms
Tafla tafla(api);
Dno dno(api);

    return 0;
}
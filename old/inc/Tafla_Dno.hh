#include "Dr3D_gnuplot_api.hh"
#include "MathWzorce.hh"

class Tafla:public Plaszczyzna
{
public:
    Tafla(std::shared_ptr<drawNS::Draw3DAPI> api);
    void rysuj(std::shared_ptr<drawNS::Draw3DAPI> api);
};

class Dno:public Plaszczyzna
{
public:
    Dno(std::shared_ptr<drawNS::Draw3DAPI> api);
    void rysuj(std::shared_ptr<drawNS::Draw3DAPI> api);
};
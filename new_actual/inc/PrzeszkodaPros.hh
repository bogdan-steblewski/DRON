#pragma once
#include "Przeszkoda.hh"
using namespace drawNS;

class PrzeszkodaPros : public Przeszkoda
{
public:
 PrzeszkodaPros(Wektor3D wierz1,double x,double y, double z, std::shared_ptr<Draw3DAPI> &api):Przeszkoda( wierz1, x, y,  z, api){}


};
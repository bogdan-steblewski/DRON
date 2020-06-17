#pragma once
#include "Przeszkoda.hh"


class PrzeszkodaPlasz : public Przeszkoda
{
public:
 PrzeszkodaPlasz(Wektor3D wierz1,double x,double y, double z, std::shared_ptr<drawNS::Draw3DAPI> &api):Przeszkoda( wierz1, x, y,  z, api){}

};
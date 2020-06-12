#pragma once
#include "Dr3D_gnuplot_api.hh"
#include <vector>
class Dron
{
    static int ilosc_obiektow;
    
public:
void ruch(vector<double, 3>, DrawNS::Draw3DAPI *api);
void rysuj(DrawNS::Draw3DAPI *api);
Dron (DrawNS::Draw3DAPI *api)
{}
};
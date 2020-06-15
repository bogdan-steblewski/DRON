#pragma once
#include <iostream>
#include <cmath>

class Plaszczyzna
{
};
class Graniastoslup
{
};
class Prostopadloscian
{
protected:
    virtual void obrot(double kat, std::shared_ptr<drawNS::Draw3DAPI> api);
    virtual void ruch(double odl, std::shared_ptr<drawNS::Draw3DAPI> api);
};
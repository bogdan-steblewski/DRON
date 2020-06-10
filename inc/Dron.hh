#ifndef DRON
#define DRON

#include <iostream>
#include <cmath>
#include "KsztaltyMatematyczne.hh"
#include "KsztaltyRzeczywiste.hh"

using std::shared_ptr;
using namespace drawNS;

class Dron:public Prostopadloscian
{
public:
int rysuj (drawNS::Draw3DAPI* api);
};
#endif

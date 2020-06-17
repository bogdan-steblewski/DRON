#pragma once
#include "Prostopadloscian.hh"



class Przeszkoda : public Prostopadloscian
{
public:
 Przeszkoda(Wektor3D wierz1,double x,double y, double z, std::shared_ptr<drawNS::Draw3DAPI> &api):Prostopadloscian( wierz1, x, y,  z, api)
{
    this->x=x;
        this->y=y;
            this->z=z;
}
virtual    bool czy_kolizja(Prostopadloscian pros)
    {
  
      if( pros.get_prze()[0]>=przes[0]-x/2-5 &&pros.get_prze()[0]<=przes[0]+x/2+5)
      if( pros.get_prze()[1]>=przes[1]-y/2-5 &&pros.get_prze()[1]<=przes[1]+y/2+5)
      if( pros.get_prze()[2]>=przes[2]-z/2-5 &&pros.get_prze()[2]<=przes[2]+z/2+5)
        return true;

      return false;
      
        
    }

};
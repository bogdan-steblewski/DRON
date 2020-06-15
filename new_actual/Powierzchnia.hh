#pragma once


#include "Bryla.hh"

#include <iostream>


class Powierzchnia: public Bryla
{
   
    public :
    

    Powierzchnia( std::shared_ptr<drawNS::Draw3DAPI> &api):Bryla(api)
    {
        Wektor3D tmp;
        kat_obr=0;
        ilosc_figor=0;
    
        for(int i=-100; i<=100;i+=10)
        { 
               ilosc_punktow=0;
        for(int j=-100; j<=100;j+=10)
        {
        tmp[0]=j;
        tmp[1]=i;
        if(ilosc_punktow%2==0)
        tmp[2]=30;
        else
        tmp[2]=35;
         Wierz.push_back(tmp);
         ilosc_punktow++;
        }
       ilosc_figor++;
        }
    

      


    }

void rysuj( )
{
    vector< vector<Point3D>> nowy;
    for(int j=0; j<ilosc_figor; j++)
    {
        vector<Point3D> nowy2;
     for(int i=0; i<ilosc_punktow;i++)
     {
     
         nowy2.push_back(drawNS::Point3D(Wierz[i+ilosc_figor*j][0],Wierz[i+ilosc_figor*j][1],Wierz[i+ilosc_figor*j][2]));
     }
    
     nowy.push_back(nowy2);

    }
  api->draw_surface(nowy,"blue");

}

};


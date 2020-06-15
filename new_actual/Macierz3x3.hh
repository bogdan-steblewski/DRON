#pragma once

#include <cmath>
#include "Macierz.hh"

typedef Macierz<double ,3> Macierz3x3;

Macierz3x3 mY(double kat)
{
    Macierz3x3 MW;
   MW[0][0] = cos(kat * M_PI / 180);
      MW[0][1] = 0;
      MW[0][2] = sin(kat * M_PI / 180);
      MW[1][0] = 0;
      MW[1][1] = 1;
      MW[1][2] = 0;
      MW[2][0] = -sin(kat * M_PI / 180);
      MW[2][1] = 0;
      MW[2][2] = cos(kat * M_PI / 180);

    return MW;
}



Macierz3x3 mZ(double kat)
{
     Macierz3x3 M;
M[0][0] = cos(kat * M_PI / 180);
      M[0][1] = -sin(kat * M_PI / 180);
      M[0][2] = 0;
      M[1][0] = sin(kat * M_PI / 180);
      M[1][1] = cos(kat * M_PI / 180);
      M[1][2] = 0;
      M[2][0] = 0;
      M[2][1] = 0;
      M[2][2] = 1;
       return M;
}
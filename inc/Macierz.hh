#pragma once
#include "Wektor3D.hh"
#include <cmath>

class macierz
{
private:
    //za kazdym razem nowy obiekt?
    double MacierzObX[3][3];
    double MacierzObY[3][3];
    double MacierzObZ[3][3];

    
public: //macierze przepisane z Wikipedii
    macierz(double a=0, double b=0, double c=0)
{
        MacierzObX[0][0] = 1;
    MacierzObX[0][1] = 0;
    MacierzObX[0][2] = 0;
    MacierzObX[1][0] = 0;
    MacierzObX[1][1] = cos(a * M_PI / 180);
    MacierzObX[1][2] = -sin(a * M_PI / 180);
    MacierzObX[2][0] = 0;
    MacierzObX[2][1] = sin(a * M_PI / 180);
    MacierzObX[2][2] = cos(a * M_PI / 180);
    //return MacierzObX[][];

    MacierzObY[0][0] = cos(b * M_PI / 180);
    MacierzObY[0][1] = 0;
    MacierzObY[0][2] = sin(b * M_PI / 180);
    MacierzObY[1][0] = 0;
    MacierzObY[1][1] = 1;
    MacierzObY[1][2] = 0;
    MacierzObY[2][0] = -sin(b * M_PI / 180);
    MacierzObY[2][1] = 0;
    MacierzObY[2][2] = cos(b * M_PI / 180);
    //return MacierzObY[][];

    MacierzObZ[0][0] = cos(c * M_PI / 180);
    MacierzObZ[0][1] = -sin(c * M_PI / 180);
    MacierzObZ[0][2] = 0;
    MacierzObZ[1][0] = sin(c * M_PI / 180);
    MacierzObZ[1][1] = cos(c * M_PI / 180);
    MacierzObZ[1][2] = 0;
    MacierzObZ[2][0] = 0;
    MacierzObZ[2][1] = 0;
    MacierzObZ[2][2] = 1;
    //return MacierzObZ[][];
 
};
//operator *
/*   Wektor Macierz::operator*(Wektor Skl)
{
    Wektor wynik;
    for (int i = 0; i < ROZMIAR; i++)
        wynik[i] = 0;
    for (int i = 0; i < ROZMIAR; i++)
        for (int j = 0; j < ROZMIAR; j++)
            wynik[i] = wynik[i] + Tablica[j][i] * Skl[j];

    return wynik;
}*/
}
;
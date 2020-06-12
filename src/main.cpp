#include <iostream>
#include "../inc/Dr3D_gnuplot_api.hh"
#include "../inc/Tafla_Dno.hh"
#include "../inc/Dron.hh"
#include "Wektor3D.hh"

using drawNS::APIGnuPlot3D;
using drawNS::Point3D;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
//Narazie robie bez akcentu na polimorfizm, niema dokumentacju z Doxygena

void menu();

int main()
{
    std::shared_ptr<drawNS::Draw3DAPI> api(new APIGnuPlot3D(-15, 15, -15, 15, -15, 15, 10)); //odswiezanie co 10ms
    Tafla tafla(api);
    Dno dno(api);
    Dron dron1(api);
    double odlegl;
    double kat;
    //std::vector<std::shared_ptr<Przeszkoda> > kolekcja_przeszkod;
    //std::vector<std::shared_ptr<Dron> > kolekcja_Dronow;

    char opcja = 'c'; //zeby nie puste
    do
    {
        menu();
        cout << "wprowadz opcje:\n";
        cin >> opcja;
        switch (opcja)
        {
        case 'r':
            cout << "odleglosc:\n";
            cin >> odlegl;
            dron1.ruch(odlegl, api);
            break;

        case 'o':
            cout << "kat obrotu:\n";
            cin >> kat;
            dron1.obrot(kat, api);
            break;

        case 'm':
            //  cout<<Dron::getIloscObiektow<<"obiektow typu dron\n";
            menu();
            break;

        case 'a':
            cout << "dodaj:\n d-drona\n p-przeszkode\n";
            char wprow;
            cin >> wprow;
            if (wprow == 'd')
                cout << "dodano drona\n";
            else if (wprow == 'p')
                cout << "dodano przeszkode\n";
            else
                cout << "nieznana opcja, nic nie dodano\n";
            break;

        case 'q':
            cout << "konczenie programu\t";
            break;

        default:
            cout << "nieznana opcja\n";
            break;
        }
    } while (opcja != 'q');

    return 0;
}

void menu()
{
    cout << "\tMenu uzytkownika" << endl
         << "r-ruch\n"
         << "o-obrot\n"
         << "m-menu\n"
         << "a-dodaj\n"
         << "q-wyjscie\n";
}
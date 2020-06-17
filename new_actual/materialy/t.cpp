 

using namespace std;
using namespace drawNS;

class InterfejsRysowania {
  shared_ptr<Draw3DAPI> rysownik;
  int id;
public:
  InterfejsRysowania(shared_ptr<Draw3DAPI> nrys) : rysownik(nrys), id(-1) {};
  virtual void rysuj() = 0;
  void zmaz() {
    if (id != -1)
      rysownik->erase_shape(id);
  }
};


class Bryla {
  Wektor3D srodek;
  MacierzOb orientacja;
public:
  Bryla(Wektor3D nsrodek), srodek(nsrodek) {}
  void przesun(Wektor3D nowy) {srodek+=nowy;}
  void obroc(MacierzOb nowa) {MacierzOb*=nowa;}
};

Point3D konwersja(Wektor3D) {
  return Point3D(Wektor3D[0],Wektor3D[1],Wektor3D[2]);
}

class Prostopadloscian : public InterfejsRysowania, public Bryla {
  double dlugosc;
  double szerokosc;
  double wysokosc;
public:
  Prostopadloscian(Wektor3D nsrodek, shared_ptr<Draw3DAPI> nrys, double nd, double ns, double nw) :
    Bryla(nsrodek), InterfejsRysowania(nrys), dlugosc(nd), szerokosc(ns), wysokosc(nw) {}
  void rysuj() override {
    vector<Wektor3D> v1(4);
    vector<Wektor3D> v2(4);
    v1[0] = srodek + orientacja * Wektor3D(-dlugosc/2,-szerokosc/2,-wysokosc/2);
    v1[1] = srodek + orientacja * Wektor3D(-dlugosc/2,szerokosc/2,-wysokosc/2);
    //...//
    vector<Point3D> w1;
    vector<Point3D> w2;
    for (auto el : v1) {
      w1.push_back(konwersja(el));
    }
    for (auto el : v2) {
      w2.push_back(konwersja(el));
    }
    vector<vector<Point3D>> w;
    w.push_back(w1);
    w.push_back(w2);

    zmaz();
    id=rysownik->draw_polyhedron(w);
  };
};

class Dron : public Prostopadloscian {

public:
  Dron(Wektor3D nsrodek, shared_ptr<Draw3DAPI> nrys, double nd, double ns, double nw) : Prostopadloscian(nsrodek,nrys,nd,ns,nw) {}
public:
  void plyn(double odleglosc, double kat_radiany) {
    Wektor3D od(odleglosc,0,0);
    od = MacierzOb('y',kat_radiany) * od;
    od = orientacja * od;
    przesun(od);
  }
  void skrec(double kat_radiany) {
    obroc(MacierzOb('z',kat_radiany));
  }
};

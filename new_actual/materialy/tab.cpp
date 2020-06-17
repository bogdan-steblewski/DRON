//kod_glowny (main/ruch drona/scena)

//kolekcja:

//Przeszkoda - abstrakcyjna klasa (interfejs)

std::vector<std::shared_ptr<Przeszkoda> > kolekcja_przeszkod;
std::vector<std::shared_ptr<Dron> > kolekcja_Dronow;


//dron

std::shared_ptr<Dron> D1;

std::shared_ptr<Przeszkoda> P;

P->czy_kolizja(D1);

for (int i=0;i<kolekcja_przeszkod.size();++i) {
  kolekcja_przeszkod[i]->czy_kolizja(D1);
 }

for (auto elem : kolekcja_przeszkod) {
  elem->czy_kolizja(D1);
 }

//klasy Przeszkod

class Przeszkoda { //abstrakcyjna
public:
  virtual bool czy_kolizja(std::shared_ptr<Interfejs_Drona> D) = 0; 
};

class Dron : ..., public Przeszkoda {
 public:
  bool czy_kolizja(...) {} override;
  
};

class PrzeszkodaProst : public Przeszkoda {

public:
  bool czy_kolizja(...) {} override;

};

//funkcje statyczne / konstruktory

class KlasaA {

  static int pole_statyczne;
public:
  static void metoda_statyczna();
  void zwykla_metoda();
};


KlasaA obiekt;

obiekt.zwykla_metoda();

Klasa::metoda_statyczna();

class KlasaA { //Wektor(szablon nie przeszdadza przy static), bryła

  int dana1;
  double dana2;
  int *wsk; // wskazania na dane
  std::shared_ptr<int> wsk2;
  
  static int ile_istnieje;
  static int ile_utworzono;
public:
  static int zwroc_istniejace();
  static int zwroc_utworzone();

  KlasaA(); // domyslny
  KlasaA(const KlasaA & nowy); //domyslny kopiujacy
  KlasaA(KlasaA && nowy); //domyslny przenoszacy
  ~KlasaA(); //destruktor
  
  KlasaA() = default; // domyslny
  KlasaA(const KlasaA & nowy) = delete; //domyslny kopiujacy
  KlasaA(KlasaA && nowy); //domyslny przenoszacy

};

KlasaA::KlasaA(int a) : dana1(a) {
  ile_istnieje++;
  ile_utworzono++;
}

KlasaA::KlasaA(const KlasaA & nowy) : dana1(nowy.dana1) {
  dana2=nowy.dana2;  
  ile_istnieje++;
  ile_utworzono++;
}

KlasaA::~KlasaA() //destruktor

//KlasaA obiekt1 = KlasaA();

  class B : public KlasaA {
    B(); // niejawnie wykonuje tez konstruktor A()
    B(int arg) : KlasaA(int arg) {};

  }

/* B dziedziczy po A 
tworzymy B:

wywoluja sie:
konstruktor A
konstruktor B

usuwamy B:

wywoluja sie:
destruktor B
destruktor A
*/


//C-wskaznik C // shared_ptr S, make_shared

*C
*S

C->
S->

// unique_ptr // std::move()

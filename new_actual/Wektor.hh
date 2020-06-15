#ifndef SWektor_HH
#define SWektor_HH


#include <iostream>


/*
 *  Tutaj trzeba opisac klase. Jakie pojecie modeluje ta klasa
 *  i jakie ma glowne cechy.
 */


template <typename Typ, int SWymiar>
class SWektor {
  Typ Tablica[SWymiar];
  public:
Typ operator [](int i) const {return Tablica[i];}   
Typ &operator [](int i)  {return Tablica[i];}  

SWektor<Typ,SWymiar> operator + ( SWektor<Typ,SWymiar> skladnik);
SWektor<Typ,SWymiar> operator - ( SWektor<Typ,SWymiar> odjemnik);
Typ operator * ( SWektor<Typ,SWymiar> mnozna);
SWektor<Typ,SWymiar> operator * ( Typ mnozna);
SWektor<Typ,SWymiar> operator / ( Typ dzielnik);

};





template <typename Typ, int SWymiar>
SWektor<Typ,SWymiar> SWektor<Typ,SWymiar>::operator + ( SWektor<Typ,SWymiar> skladnik)
{
    SWektor<Typ,SWymiar> Wynik;
    for(int i=0; i<SWymiar; i++)
    Wynik[i]=Tablica[i]+skladnik[i];

    return Wynik;
}
template <typename Typ, int SWymiar>
SWektor<Typ,SWymiar>  SWektor<Typ,SWymiar>::operator - ( SWektor<Typ,SWymiar> odjemnik)
{
    SWektor<Typ,SWymiar> Wynik;
    for(int i=0; i<SWymiar; i++)
    Wynik[i]=Tablica[i]-odjemnik[i];

    return Wynik;
}
template <typename Typ, int SWymiar>
Typ  SWektor<Typ,SWymiar>::operator * ( SWektor<Typ,SWymiar> mnozna)
{
    Typ Wynik=0;
    for(int i=0; i<SWymiar; i++)
    Wynik=Wynik+Tablica[i]*mnozna[i];

    return Wynik;
}
template <typename Typ, int SWymiar>
SWektor<Typ,SWymiar>  SWektor<Typ,SWymiar>::operator * ( Typ mnozna)
{
    SWektor<Typ,SWymiar> Wynik;
    for(int i=0; i<SWymiar; i++)
    Wynik[i]=Tablica[i]*mnozna;

    return Wynik;
}
template <typename Typ, int SWymiar>
SWektor<Typ,SWymiar>  SWektor<Typ,SWymiar>::operator / ( Typ dzielnik)
{
    SWektor<Typ,SWymiar> Wynik;
    for(int i=0; i<SWymiar; i++)
    Wynik[i]=Tablica[i]/dzielnik;

    return Wynik;
}

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
template <typename Typ, int SWymiar>
std::istream& operator >> (std::istream &Strm, SWektor<Typ,SWymiar> &Wek)
{
    for(int i=0; i<SWymiar; i++)
    Strm>>Wek[i];

    return Strm;
}

/*
 * To przeciazenie trzeba opisac. Co ono robi. Jaki format
 * danych akceptuje. Jakie jest znaczenie parametrow itd.
 * Szczegoly dotyczace zalecen realizacji opisow mozna
 * znalezc w pliku:
 *    ~bk/edu/kpo/zalecenia.txt 
 */
template <typename Typ, int SWymiar>
std::ostream& operator << (std::ostream &Strm, const SWektor<Typ,SWymiar> &Wek)
{Strm.width(10);
    for(int i=0; i<SWymiar; i++)
     Strm<<Wek[i]<<" ";

    return Strm;
}
#endif

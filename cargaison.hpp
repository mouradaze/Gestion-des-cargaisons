#ifndef cargaison_h
#define cargaison_h
#include "marchandise.hpp"
//#include "cargaer.hpp"
class Cargaison {
    protected:
    string ref;
    double distance;
    long double cout = 0;
    Marchandise march[100];
    public:
    int nu = 0;
    void SetC(long double cout);
    Cargaison(string ref , double distance);
    Cargaison();
    string GetR();
    double GetD();
    Marchandise GetM(int a);
    long double GetC();
    void SetR(string ref);
    void SetD(double distance);
    void AjoutM(Marchandise m);
    void AjoutM(Marchandise m , int a);
    void SuppM(string num);
    void ConsM(string num);
    void ConsM();
    void ConsP();
    void ConsV();
    int GetVtt();
    double GetPtt();
    void afficher();
};
#endif
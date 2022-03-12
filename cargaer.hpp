#ifndef cargaer_h
#define cargaer_h
#include "cargaison.hpp"
class CargAer : public Cargaison{
    protected :
    int vtt;
    double ptt;
    public :
    CargAer(Cargaison c);
    long double CalC();
    void afficher();
    void afficherr();
};
#endif
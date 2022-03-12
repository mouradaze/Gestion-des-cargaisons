#ifndef cargrout_h
#define cargrout_h
#include "cargaison.hpp"

class CargRout : public Cargaison{
    protected :
    int vtt;
    double ptt;
    public :
    CargRout(Cargaison c);
    long double CalC();
    void afficher();
    void afficherr();
};

#endif
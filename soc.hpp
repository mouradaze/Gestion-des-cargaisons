#ifndef soc_h
#define soc_h
#include "cargaison.hpp"
class Soc{
    protected:
    Cargaison ca[100];
    int n = 0;
    public:
    void Ajout(Cargaison c);
    void SuppC(string ref);
    void SuppM(string num , string ref);
    void afficher();
    void afficher(string ref);
    void ConsMa();
    void ConsMa(string num);
    void ConsPtt(string ref);
    void ConsCt(string ref);
    void Trier();
    void AjoutM(Marchandise m , string ref);
    void ModifM(string num , string ref);
};

#endif
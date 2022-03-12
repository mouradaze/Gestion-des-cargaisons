#ifndef admin_h
#define admin_h
#include "client.hpp"
class Admin : public Client{
    public:
    //Admin(Soc s);
    Admin();
    void AjoutC(Cargaison c);
    void AjoutM(Marchandise m , string ref);
    void afficher();
    void SuppM(string num , string ref);
    void SuppC(string ref);
    void ModifM(string num,string ref);
};
#endif
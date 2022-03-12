#ifndef client_h
#define client_h
#include "soc.hpp"
class Client{
    protected :
    Soc so;
    public :
   // Client(Soc s);
    Client();
    Soc GetS();
    void SetS(Soc s);
    void ConsC(string ref);
    void ConsM(string num);
    void ConsM();
    void ConsC();
    void ConsPtt(string ref);
    void ConsCt(string ref);
    void Trier();
};

#endif
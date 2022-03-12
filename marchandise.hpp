#ifndef marchandise_h
#define marchandise_h
#include <iostream>
#include<string>
using namespace std;
class Marchandise{
    string num;
    int volume;
    double poids;
    public:
    Marchandise(string num , int volume , double poids);
    Marchandise();
    string GetN();
    int GetV();
    double GetP();
    void SetN(string num);
    void SetV(int volume);
    void SetP(double poids);
    void afficher();
};

#endif
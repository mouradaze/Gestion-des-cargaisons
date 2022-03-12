#include "marchandise.hpp"

Marchandise::Marchandise(string num , int volume , double poids){
    this->num = num;
    this->volume = volume;
    this->poids = poids;
}
Marchandise::Marchandise(){};
string Marchandise::GetN(){
    return num;
}
int Marchandise::GetV(){
    return volume;
}
double Marchandise::GetP(){
    return poids;
}

void Marchandise::SetN(string num){
    this->num = num;
}
void Marchandise::SetV(int volume){
    this->volume = volume;
}
void Marchandise::SetP(double poids){
    this->poids = poids;
}
void Marchandise::afficher(){
    cout << "Num : "<<num<<"\tVolume : "<<volume<<"\tPoids : "<<poids<<endl;
}

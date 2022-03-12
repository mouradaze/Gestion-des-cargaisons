#include "client.hpp"
Client::Client(){}
void Client::ConsC(string ref){
    so.afficher(ref);
}
Soc Client::GetS(){
    return so;
}
void Client::SetS(Soc s){
    so = s;
}
void Client::ConsC(){
    so.afficher();
}
void Client::ConsM(){
    so.ConsMa();
}
void Client::ConsM(string num){
    so.ConsMa(num);
}
void Client::ConsPtt(string ref){
    so.ConsPtt(ref);
}
void Client::ConsCt(string ref){
    so.ConsCt(ref);
}
void Client::Trier(){
    so.Trier();
    std::cout<<"Tri Est Fait Avec Succes !!"<<endl;
}
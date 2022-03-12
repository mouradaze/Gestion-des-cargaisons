#include "admin.hpp"

Admin::Admin(){}
void Admin::AjoutC(Cargaison c){
    so.Ajout(c);
}
void Admin::AjoutM(Marchandise m , string ref){
    so.AjoutM(m,ref);
}
void Admin::afficher(){
    so.afficher();
}
void Admin::SuppM(string num , string ref){
    so.SuppM(num,ref);
}
void Admin::SuppC(string ref){
    so.SuppC(ref);
    std::cout<<"Cargaison Supprimer Avec Succes !!"<<endl;
}
void Admin::ModifM(string num,string ref){
    so.ModifM(num,ref);
}
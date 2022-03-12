#include "cargaison.hpp"
#include "cargaer.hpp"
// kifach t7sb cout tt 
Cargaison::Cargaison(string ref , double distance){
    this->ref = ref;
    this->distance = distance;
}
Cargaison::Cargaison(){}
string Cargaison::GetR(){
    return ref;
}
double Cargaison::GetD(){
    return distance;
}
Marchandise Cargaison::GetM(int a){ // ask about
    return march[a];
}
long double Cargaison::GetC(){
    return cout;
}
void Cargaison::SetR(string ref){
    this->ref = ref;
}
void Cargaison::SetD(double distance){
    this->distance = distance;
}
void Cargaison::SetC(long double cout){
    this->cout = cout;
}
void Cargaison::AjoutM(Marchandise m){
    for(int i = 0 ; i < nu ; i++){
        if(march[i].GetN() == m.GetN()){
            std::cout << "Ca Numero De Marchandise Existe Deja !!"<<endl;
            return ;
        }
    }
    this->march[nu] = m;
    nu++;
    std::cout<<"Marchandise Ajouter Avec Succes !!"<<endl;

}
void Cargaison::AjoutM(Marchandise m, int a){
    this->march[a] = m;
}
void Cargaison::SuppM(string num){
    for(int i =0;i<nu;i++){
        if(this->march[i].GetN() == num){
            for(int j = i ; j < nu-1 ; j++)
                march[j] = march[j+1];
            nu--;
            i--;
        }
    }
}
void Cargaison::ConsM(string num){
    for(int i =0;i<nu;i++){
        if(march[i].GetN() == num){
            std::cout <<"Num : "<<march[i].GetN()<<"\t"<<
            "Volume : "<<march[i].GetV()<<"\t"<<
            "Poids : "<<march[i].GetV()<<endl;
        }
    }
}
void Cargaison::ConsM(){
    for(int i =0;i<nu;i++){
            std::cout <<"Num : "<<march[i].GetN()<<"\t"<<
            "Volume : "<<march[i].GetV()<<"\t"<<
            "Poids : "<<march[i].GetV()<<endl;
    }
}

int Cargaison::GetVtt(){
    int v = 0;
    for(int i = 0 ; i< nu; i++){
        v += march[i].GetV();
    }
    return v;
}
void Cargaison::ConsV(){
    std::cout << "Volume Totale : "<<GetVtt();
}

double Cargaison::GetPtt(){
    double pt = 0;
    for(int i =0;i<nu;i++){
        pt += march[i].GetP();
        
    }
    return pt;
}
void Cargaison::ConsP(){
    std::cout << "Poids Totale : "<<GetPtt()<<endl;
}

void Cargaison::afficher(){
    std::cout<<"\n---------------------- Cargaison Infos  ------------------------\n"<<endl;
    std::cout<<"Ref : "<<ref<<"\t Distance : "<<distance<<endl;
    std::cout<<"\n---------------------- Les Marchandises ------------------------\n"<<endl;
    for(int i = 0 ; i< nu ; i++){
        std::cout<<i+1<<"/\t";
        march[i].afficher();
    }
}
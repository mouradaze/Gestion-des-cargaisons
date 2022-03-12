#include "cargaer.hpp"

CargAer::CargAer(Cargaison c){
    ref = c.GetR();
    distance = c.GetD();
    nu = c.nu;
    for(int i = 0 ; i <nu ; i++){
        march[i] = c.GetM(i);
    }
    vtt = c.GetVtt();
    ptt = c.GetPtt();
}
long double CargAer::CalC(){
    if(vtt<80000)
    return (10 * CargAer::ptt * distance);
    else
    return (12 * CargAer::ptt * distance);
}
void CargAer::afficher(){
    Cargaison::afficher();
    cout = CalC();
    std::cout<< "Le Cout Totale : "<<CargAer::cout<<endl;
}
void CargAer::afficherr(){
    cout = CalC();
    std::cout<< "Le Cout Totale : "<<CargAer::cout<<endl;
}
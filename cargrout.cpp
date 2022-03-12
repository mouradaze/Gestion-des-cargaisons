#include "cargrout.hpp"

CargRout::CargRout(Cargaison c){
    ref = c.GetR();
    distance = c.GetD();
    nu = c.nu;
    for(int i = 0 ; i <nu ; i++){
        march[i] = c.GetM(i);
    }
    vtt = c.GetVtt();
    ptt = c.GetPtt();
    
}
long double CargRout::CalC(){
    if(vtt<380000)
        return (4 * CargRout::ptt * distance);
    else
        return (6 * CargRout::ptt * distance);
}
void CargRout::afficher(){
    Cargaison::afficher();
    cout = CalC();
    std::cout<< "Le Cout Totale : "<<CargRout::cout<<endl;
}
void CargRout::afficherr(){
    cout = CalC();
    std::cout<< "Le Cout Totale : "<<CargRout::cout<<endl;
}
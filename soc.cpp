#include"soc.hpp"
#include"cargaer.hpp"
#include "cargrout.hpp"
void Soc::Ajout(Cargaison c){
    for(int i = 0 ; i < n ; i++){
        if(ca[i].GetR() == c.GetR()){
            std::cout << "Impossible d'ajouter ca cargaison Ce referent existe deja"<<endl;
            return ;
        }
    }
    ca[n] = c;
    n++;
    std::cout<<"Cargaison Ajouter Avec Succes !!"<<endl;

}
void Soc::SuppC(string ref){
    int a = 0;
    for(int i = 0 ; i<n;i++){
        if(ca[i].GetR() == ref){
            for(int j = i ; j < n-1 ; j++)
                ca[j] = ca[j+1];
            n--;
            i--;
            a = 1;
            std::cout<<"Cargaison Supprimer Avec Succes !!"<<endl;
            return;
        }
    }
    if(a == 0)
    std::cout<<"Cet Cargaison N'existe Pas"<<endl;
}
void Soc::afficher(){
    for(int i = 0 ; i < n ; i++){
        if(ca[i].GetR().substr(0,2) == "ca"){
            CargAer caa(ca[i]);
            caa.afficher();
        }
        else if(ca[i].GetR().substr(0,2) == "cr"){
            CargRout cr(ca[i]);
            cr.afficher();
        }
    }
}
void Soc::afficher(string ref){
    for(int i = 0 ; i < n ; i++){
        if(ca[i].GetR() == ref){
            if(ca[i].GetR().substr(0,2) == "ca"){
            CargAer caa(ca[i]);
            caa.afficher();
            }
            else if(ca[i].GetR().substr(0,2) == "cr"){
                CargRout cr(ca[i]);
                cr.afficher();
            }
    }
    }
}
void Soc::ConsMa(){
    for(int i = 0 ; i < n ; i ++){ 
           ca[i].ConsM();
    }
}
void Soc::ConsMa(string num){
    for(int i = 0 ; i < n ; i ++){ 
           ca[i].ConsM(num);
    }
}

void Soc::ConsPtt(string ref){
    for(int i=0;i<n;i++){
        if(ca[i].GetR() == ref){
            std::cout << "Le Poid Totale De Cet Cargaison Est : "<<ca[i].GetPtt()<<endl;
            return;
        }
    }
    std::cout << "Cargaison N'existe Pas"<<endl;
}
void Soc::ConsCt(string ref){
    int a;
    for(int i = 0 ; i < n ; i++){
            if(ca[i].GetR() == ref){
                a = 1;
                if(ca[i].GetR().substr(0,2) == "ca"){
                CargAer caa(ca[i]);
                caa.afficherr();
                }
                else if(ca[i].GetR().substr(0,2) == "cr"){
                    CargRout cr(ca[i]);
                    cr.afficherr();
                }
                return;
            }
            else
            a = 0;
            
    }
    if(a == 0)
            std::cout<<"Referent N'existe Pas!"<<endl;
}
void Soc::AjoutM(Marchandise m , string ref){
    for(int i = 0 ; i < n ; i++){
        if(ca[i].GetR() == ref){
            ca[i].AjoutM(m);
        }
    }
}
void Soc::SuppM(string num , string ref){
    int a = 0;
    for(int i = 0 ; i < n ; i++){
        if(ca[i].GetR() == ref){
            ca[i].SuppM(num);
            a = 1;
            std::cout<<"Marchandise Supprimer Avec Succes !!"<<endl;
            return;
        }
    }
    if(a == 0)
        std::cout<<"Marchandise N'existe Pas"<<endl;
}
void Soc::Trier(){
    for(int i = 0 ; i < n ; i++){
        for(int j=i+1;j<n;j++){
            if(ca[i].GetR().substr(0,2) == "ca"){
                CargAer caa(ca[i]);
                ca[i].SetC(caa.CalC());
                }
            else if(ca[i].GetR().substr(0,2) == "cr"){
                    CargRout cr(ca[i]);
                    ca[i].SetC(cr.CalC());
                }
                if(ca[j].GetR().substr(0,2) == "ca"){
                CargAer caa(ca[j]);
                ca[j].SetC(caa.CalC());
                }
            else if(ca[j].GetR().substr(0,2) == "cr"){
                    CargRout cr(ca[j]);
                    ca[j].SetC(cr.CalC());
                }
            if(ca[i].GetC() > ca[j].GetC()){
                Cargaison c;
                c = ca[i];
                ca[i] = ca[j];
                ca[j] = c;
            }
        }
    }
}
void Soc::ModifM(string num , string ref){
    string numm;int v;double p;
    for(int i = 0 ; i<n;i++){
        if(ca[i].GetR() == ref){
            for(int j = 0 ; i<ca[i].nu ;j++){
            Marchandise m,mm;
            m = ca[i].GetM(j);
            if(m.GetN() == num){
                std::cout<<"Nouveau Numero : ";
                std::cin>>numm ;mm.SetN(numm);
                std::cout<<"Nouveau Volume : ";
                std::cin>>v; mm.SetV(v);
                std::cout<<"Nouveau Poid : ";
                std::cin>>p; mm.SetP(p);
                    for(int a = 0 ; a < ca[i].nu ; a++){
                        m = ca[i].GetM(a);
                        if(mm.GetN() == m.GetN()){
                            std::cout<<"Marchandise Existe Deja !!"<<endl;
                            return;
                        }
                    }
                ca[i].AjoutM(mm,j);
                std::cout<<"Marchandise Modifier Avec Succes !!"<<endl;
                return ;
            }
            else
            std::cout<<"Marchandise N'existe Pas !"<<endl;
            }
        }
        else
            std::cout<<"Cargaison N'existe Pas !"<<endl;

    }
}
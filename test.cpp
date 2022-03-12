#include "cargaer.hpp"
#include"soc.hpp"
#include "cargrout.hpp"
#include "client.hpp"
#include "admin.hpp"
int menuad(){
    int choix;
    cout<<"------------- Menu Admin ---------------"<<endl;
    cout<<"\t1-Ajouter Une Cargaison"<<endl;
    cout<<"\t2-Ajouter Une Marchandise"<<endl;
    cout<<"\t3-Modifier Une Marchandise"<<endl;
    cout<<"\t4-Supprimer Une Cargaison"<<endl;
    cout<<"\t5-Supprimer Une Marchandise"<<endl;
    cout<<"\t6-Afficher"<<endl;
    cout<<"\t7-Consulter Une Cargaison"<<endl;
    cout<<"\t8-Consulter Une Marchandise"<<endl;
    cout<<"\t9-Consulter Le Poid Totale D'une Cargaison"<<endl;
    cout<<"\t10-Consulter Le Cout De Transport D'une Cargaison"<<endl;
    cout<<"\t11-Trier Les Cargaison"<<endl;
    cout<<"\t12-Retour"<<endl;
    cout<<"\tVotre choix :";
    cin>>choix;
    return choix;
}
int menucl(){
    int choix;
    cout<<"------------- Menu Client ---------------"<<endl;
    cout<<"\t1-Consulter Une Cargaison"<<endl;
    cout<<"\t2-Consulter Une Marchandise"<<endl;
    cout<<"\t3-Consulter Le Poid Totale D'une Cargaison"<<endl;
    cout<<"\t4-Consulter Le Cout De Transport D'une Cargaison"<<endl;
    cout<<"\t5-Trier Les Cargaison"<<endl;
    cout<<"\t6-Retour"<<endl;
    cout<<"\tVotre choix :";
    cin>>choix;
    return choix;
}
int menu(){
    int choix;
    cout<<"------------- Menu Generale ---------------"<<endl;
    cout<<"\t1-Admin"<<endl;
    cout<<"\t2-Client"<<endl;
    cout<<"\t3-Fin Du Programme"<<endl;
    cout<<"\tVotre Choix :";
    cin>>choix;
    return choix;
}
Cargaison ajoutc(){
    string ref;double distance;int a = 0;
    do{
        cout<<"Referent Doit Commencer Par ca -> Cargaison Aerienne ou cr -> Cargaison Routiere"<<endl;
        cout<<"Referent : ";cin>>ref;
        if(ref.substr(0,2) == "ca" || ref.substr(0,2) == "cr")
            a = 1;  
    }while(a!=1);
    cout<<"Distance : ";cin>>distance;
    Cargaison c(ref,distance);
    return c;
}
Marchandise ajoutm(){
    string n;int v;double p;
    cout<<"Numero : ";cin>>n;
    cout<<"Volume : ";cin>>v;
    cout<<"Poids : ";cin>>p;
    Marchandise m(n,v,p);
    return m;
}
int consulter(string m){
    int choix;
    cout<<"1-Consulter Tous "<<m<<endl;
    cout<<"2-Consulter Une "<<m<<endl;
    cout<<"Votre Choix : ";cin>>choix;
    return choix;
}
main(){
    Admin st;Client cls;
    int ch1,ch2,ch3,sw=0,sww=0,swww=0;
    string r,n;
    
    do{
    ch1 = menu();
    switch(ch1){
        case 1 :
        sww = 0;
        do{
            ch2 = menuad();
            switch(ch2){
                case 1 :
                    st.AjoutC(ajoutc());
                break;
                case 2 :
                    cout<<"Referent De La Cargaison : ";
                    cin>>r;
                    st.AjoutM(ajoutm(),r);
                break;
                case 3 :
                    cout<<"Referent De La Cargaison A Modifier : ";
                    cin>>r;
                    cout<<"Numero De La Marchandise A Modifier : ";
                    cin>>n;
                    st.ModifM(n,r);
                break;
                case 4 :
                cout<<"Referent De La Cargaison A Supprimer : ";
                cin>>r;
                st.SuppC(r);
                break;
                case 5 :
                cout<<"Numero De La Marchandise A Supprimer : ";
                cin>>n;
                cout<<"Referent De La Cargaison : ";
                cin>>r;
                st.SuppM(n,r);
                break;
                case 6 :
                st.afficher();
                break;
                case 7 :
                    do{
                    ch3 = consulter("Cargaison");
                    switch(ch3){
                        case 1:
                            st.ConsC();
                            swww =1;
                        break;
                        case 2:
                            cout<<"Referent De La Cargaison : ";
                            cin>>r;
                            st.ConsC(r);
                            swww=1;
                        break;
                        default:
                            cout<<"Ressayez !!"<<endl;
                            swww=0;
                        break;
                    }
                    }while(swww!=1);
                
                break;
                case 8 :
                    do{
                    ch3 = consulter("Marchandise");
                    switch(ch3){
                        case 1:
                            st.ConsM();
                            swww =1;
                        break;
                        case 2:
                            cout<<"Numero De La Marchandise : ";
                            cin>>r;
                            st.ConsM(r);
                            swww=1;
                        break;
                        default:
                            cout<<"Ressayez !!"<<endl;
                            swww=0;
                        break;
                    }
                    }while(swww!=1);
                break;
                case 9 :
                    cout<<"Referent De La Cargaison : ";
                    cin>>r;
                    st.ConsPtt(r);
                break;
                case 10 :
                    cout<<"Referent De La Cargaison : ";
                    cin>>r;
                    st.ConsCt(r);
                break;
                case 11 :
                    st.Trier();
                break;
                case 12 :
                cls.SetS(st.GetS());
                    sww =1;
                break;
                default:
                    cout<<"Veuillez Choisir Un Nombre Entre1 Et 12"<<endl;
                    sww=0;
                break;
            }
        }while(sww!=1);
        break;
        case 2 :
        sww = 0;
        do{
            ch2 = menucl();
            switch(ch2){
                case 1 :
                    do{
                    ch3 = consulter("Cargaison");
                    switch(ch3){
                        case 1:
                            cls.ConsC();
                            swww =1;
                        break;
                        case 2:
                            cout<<"Referent De La Cargaison : ";
                            cin>>r;
                            cls.ConsC(r);
                            swww=1;
                        break;
                        default:
                            cout<<"Ressayez !!"<<endl;
                            swww=0;
                        break;
                    }
                    }while(swww!=1);
                break;
                case 2 :
                    do{
                    ch3 = consulter("Marchandise");
                    switch(ch3){
                        case 1:
                            cls.ConsM();
                            swww =1;
                        break;
                        case 2:
                            cout<<"Numero De La Marchandise : ";
                            cin>>r;
                            cls.ConsM(r);
                            swww=1;
                        break;
                        default:
                            cout<<"Ressayez !!"<<endl;
                            swww=0;
                        break;
                    }
                    }while(swww!=1);
                break;
                case 3 :
                    cout<<"Referent De La Cargaison : ";
                    cin>>r;
                    cls.ConsPtt(r);
                break;
                case 4 :
                    cout<<"Referent De La Cargaison : ";
                    cin>>r;
                    cls.ConsCt(r);
                break;
                case 5 :
                    cls.Trier();
                break;
                case 6 :
                    sww = 1;
                break;
                default:
                    cout<<"Veuillez Choisir Un Nombre Entre1 Et 6"<<endl;
                    sww=0;
                break;
            }
        }while(sww!=1);
        break;
        case 3 :
            return 1;
        break;
        default :
            cout<<"Veuillez Choisir 1 Ou 2"<<endl;
            sw = 0;
        break;
    }
    }while(sw!=1);
}
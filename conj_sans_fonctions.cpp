#include <iostream>
#include <string>
using namespace std;

int main(){
    string verbe, radical, suffix, verbe_backup;
    int verbe_long(0);
    cout<<"Quel verbe voulez vous conjuguer ?"<<endl; //Ne pas mette d'espace avant ou après le verbe sinon le radical sera faux
    cout<<"> ";cin>>verbe;cout<<""<<endl;
    verbe_long = verbe.size(); //On récupère la taille du verbe
    verbe_backup = verbe;
    radical = verbe.erase (verbe_long-2, 2);
    verbe = verbe_backup;
    suffix = verbe.erase (0, verbe_long-2);
    verbe = verbe_backup;
    int const taille_tableau(6);
    string conj[taille_tableau];
    string term[taille_tableau];
    conj[0] = "Je "; conj[1] = "Tu "; conj[2] = "Il / Elle "; conj[3] = "Nous "; conj[4] = "Vous "; conj[5] = "Ils / Elles ";
    term[0] = "e"; term[1] = "es" ; term[2] = "e"; term[3] = "eons";term[4] = "ez" ;term[5] = "ent";
    cout<<"\n\n------------- output -------------\n"<<endl;
    for (int i = 0; i < (taille_tableau); i++){
        conj[i].insert(conj[i].size(), radical);
        conj[i].insert(conj[i].size(), term[i]);
        cout<<conj[i]<<endl;
    }
    return 0;
}

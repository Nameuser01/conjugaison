#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*déclaration des fonctions*/
int detection_groupe(string verbe);
string premier_groupe_add(string radical);
void debugging_values(string sa, string sb, string sc, int ia, int ib);
int main(){
    string verbe, radical, suffix, verbe_backup;
    int verbe_long(0);
    cout<<"Quel verbe voulez vous conjuguer ?"<<endl;/*Ne pas mette d'espace avant ou après le verbe sinon le radical sera faux*/
    cout<<"> ";cin>>verbe;cout<<""<<endl;
    /*Taille du verbe, var -> suffix & var ->radical */
    verbe_long = verbe.size();
    verbe_backup = verbe;
    radical = verbe.erase (verbe_long-2, 2);
    verbe = verbe_backup;
    suffix = verbe.erase (0, verbe_long-2);
    verbe = verbe_backup;
    /*Fonction de debeug*/
    /*debugging_values(verbe, radical, suffix, verbe_long);*/
    premier_groupe_add(radical);/*Il est possible de mouv le tableau de la fonction d'ajout vers la fonction main*/
    return 0;
}
string premier_groupe_add(string radical){
    /*Si tu veux intégrer plus de temps, c'est facile, il suffit de reprendre le modèle ci-dessous.*/
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
}
void debugging_values(string sa, string sb, string sc, int ia){/*Fonction pratique pour le debeug de la methode erase*/
    cout<<"START DEBUGGING"<<endl;
    cout<<"verbe = "<<sa<<endl;
    cout<<"radical = "<<sb<<endl;
    cout<<"suffix = "<<sc<<endl;
    cout<<"verbe_long = "<<ia<<endl;
    cout<<"END DEBUGGING"<<endl;
}

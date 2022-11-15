// <>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "Systeme ........" << endl;
    string nomFichierEntree; // declaration de la variable du nom du fichier a ouvrir
    bool fichierTrouve;      // déclara var pour boucler tant que le fichier n'est pas trouvé

    while (!fichierTrouve) // tant que le fichier n'est pas trouvé
    {
        cout << "veuillez entrer le nom du fichier d'entree" << endl;
        cin >> nomFichierEntree;
        ifstream ifs;               // declaration de ifs comme flux
        ifs.open(nomFichierEntree); // ouvrir le fichier "nomFichierEntree" comme flux
        if (ifs.is_open())          // on vérifie si il est ouvert
        {
            cout << "Fichier ouvert" << endl;
            fichierTrouve = true; // permet de sortir de la boucle
        }
        else
        {
            cerr << "Fichier Introuvable" << endl; // afficher msg d'erreur et reviens au début de la boucle
        }
    }
}

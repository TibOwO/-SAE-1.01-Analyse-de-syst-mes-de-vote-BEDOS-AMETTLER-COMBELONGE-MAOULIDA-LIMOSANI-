// <>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "Systeme ........" << endl;
    string nomFichierEntree;
    bool fichierTrouve;
a:
    cout << "veuillez entrer le nom du fichier d'entree" << endl;
    cin >> nomFichierEntree;
    ifstream ifs;
    ifs.open(nomFichierEntree);
    if (ifs.is_open())
    {
        cout << "Fichier ouvert" << endl;
        fichierTrouve = true;
        return 1;
    }
    else
    {
        cerr << "Fichier introuvable" << endl;
        goto a;
    }
}

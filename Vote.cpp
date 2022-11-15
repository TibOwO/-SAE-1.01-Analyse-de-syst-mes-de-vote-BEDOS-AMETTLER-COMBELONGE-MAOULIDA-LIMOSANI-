// <>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "Systeme ........" << endl;
    string nomFichierEntree;
a:
    cout << "veuillez entrer le nom du fichier d'entree" << endl;
    cin >> nomFichierEntree;
    ifstream ifs;
    ifs.open(nomFichierEntree);
    if (ifs.is_open())
    {
        cout << "Fichier ouvert" << endl;
    }
    else
    {
        cerr << "Fichier introuvable" << endl;
        goto a;
    }

    while (ifs.eof() == false)
    {
        string str;
        ifs >> str;
        cout << str << endl;
    }
}

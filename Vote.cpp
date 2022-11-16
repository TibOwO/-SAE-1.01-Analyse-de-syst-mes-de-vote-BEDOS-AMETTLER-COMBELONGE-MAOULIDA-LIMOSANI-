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
        cout << "Fichier ouvert" << endl
             << endl;
    }
    else
    {
        cerr << "Fichier introuvable" << endl;
        goto a;
    }
    int voteBlanc = 0;
    int CsGo = 0;
    int StreetFighter = 0;
    int CivilisationVI = 0;
    int MarioKart = 0;

    while (ifs.eof() == false)
    {
        string str;
        ifs >> str;

        if (str == "csgo") // le test marche pas mais ca compte chaque ligne en gros
        {
            ++CsGo;
        }

        else if (str == "MarioKart")
        {
            ++MarioKart;
        }

        else if (str == "CivilisationVI")
        {
            ++CivilisationVI;
        }

        else if (str == "StreetFighter")
        {
            ++StreetFighter;
        }

        else
        {
            ++voteBlanc;
        }
    }

    cout << "Resultat final : " << endl
         << endl
         << "Counter Strike Global Offensive = " << CsGo << endl
         << "MarioKart = " << MarioKart << endl
         << "CivilisationVI = " << CivilisationVI << endl
         << "StreetFighter = " << StreetFighter << endl
         << "vote blanc = " << voteBlanc;
}

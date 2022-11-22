// <>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm> 

using namespace std;

vector<int> votePluralite(int csgo, int mario, int civil, int streetfight)
{
    vector<int> tab(4);
    tab[0] = streetfight;
    tab[1] = csgo;
    tab[2] = mario;
    tab[3] = civil;
    int i = 0;
    sort(tab.begin(), tab.end());
    return tab;
}

int main()
{
   // cout << "Systeme ........" << endl;
    string nomFichierEntree;
a:
    //cout << "veuillez entrer le nom du fichier d'entree" << endl;
    cin >> nomFichierEntree;
    //ifstream ifs;
    //cin.open(nomFichierEntree);
    //if (cin.is_open())
    //{
    //    cout << "Fichier ouvert" << endl
    //         << endl;
    //}
    //else
    //{
    //    cerr << "Fichier introuvable" << endl;
    //    goto a;
    //}
    int voteBlanc = 0;
    int CsGo = 0;
    int StreetFighter = 0;
    int CivilisationVI = 0;
    int MarioKart = 0;

    while (cin.eof() == false)
    {
        string str;
        cin >> str;

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
         << "vote blanc = " << voteBlanc << endl
         << endl;

    vector<int> tab = votePluralite(CsGo, CivilisationVI, StreetFighter, MarioKart);
    string nomJeu;
    for (int i = tab.size(); i >= 0; i--)
    {
        if (tab[i] == CivilisationVI)
        {
            nomJeu = "CivilisationVI";
            cout << i << "eme : " << nomJeu << endl;
        }

        if (tab[i] == StreetFighter)
        {
            nomJeu = "StreetFighter";
            cout << i << "eme : "
                 << nomJeu << endl;
        }

        if (tab[i] == MarioKart)
        {
            nomJeu = "MarioKart";
            cout << i << "eme : "
                 << nomJeu << endl;
        }

        if (tab[i] == CsGo)
        {
            nomJeu = "CsGo";
            cout
                << i << "eme : "
                << nomJeu << endl;
        }
    }

    /*
      for (int i = 0; i < tab.size(); i++)
       {
           cout << "case " << i << " = ";
           cout << tab[i] << endl;
       }
    */
}

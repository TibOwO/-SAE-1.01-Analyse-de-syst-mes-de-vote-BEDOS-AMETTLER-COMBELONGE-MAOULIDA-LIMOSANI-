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
    int jeu1 = 0;
    int jeu2 = 0;
    int jeu3 = 0;
    int jeu4 = 0;

    while (cin.eof() == false)
    {
        int jeu;
        cin >> jeu;

        if (jeu == 1) // le test marche pas mais ca compte chaque ligne en gros
        {
            ++jeu1;
        }

        else if (jeu == 2)
        {
            ++jeu2;
        }

        else if (jeu == 3)
        {
            ++jeu3;
        }

        else if (jeu == 4)
        {
            ++jeu4;
        }

        else
        {
            ++voteBlanc;
        }
    }
    cout <<"Les quatre jeu sont : "<<endl;

    cout << "Resultat final : " << endl
         << endl
         << "Counter Strike Global Offensive = " << jeu1 << endl
         << "MarioKart = " << jeu2 << endl
         << "CivilisationVI = " << jeu3 << endl
         << "StreetFighter = " << jeu4 << endl
         << "vote blanc = " << voteBlanc << endl
         << endl;

    vector<int> tab = votePluralite(jeu1, jeu2, jeu3, jeu4);
    string nomJeu;
    for (int i = tab.size(); i >= 0; i--)
    {
        if (tab[i] == jeu1)
        {
            nomJeu = "CivilisationVI";
            cout << i << "eme : " << nomJeu << endl;
        }

        if (tab[i] == jeu2)
        {
            nomJeu = "StreetFighter";
            cout << i << "eme : "
                 << nomJeu << endl;
        }

        if (tab[i] == jeu3)
        {
            nomJeu = "MarioKart";
            cout << i << "eme : "
                 << nomJeu << endl;
        }

        if (tab[i] == jeu4)
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

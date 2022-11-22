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
    int nbrParticiant = 0;
    int jeu1 = 0;
    int jeu2 = 0;
    int jeu3 = 0;
    int jeu4 = 0;

    while (cin.eof() == false)
    {
        string ligneLue;
        cin >> ligneLue;
        if (ligneLue == "1") // le test marche pas mais ca compte chaque ligne en gros
        {
            ++jeu1;
        }

        else if (ligneLue == "2")
        {
            ++jeu2;
        }

        else if (ligneLue == "3")
        {
            ++jeu3;
        }

        else if (ligneLue == "4")
        {
            ++jeu4;
        }

        else
        {
            ++nbrParticiant;
        }
    }
    cout <<"Les quatre jeu sont : "<<endl;

    cout << "Resultat final : " << endl
         << endl
         << "Jeux 1 = " << jeu1 << endl
         << "Jeux 2 = " << jeu2 << endl
         << "Jeux 3 = " << jeu3 << endl
         << "Jeux 4 = " << jeu4 << endl
         << "Nombre de participant = " << nbrParticiant << endl
         << endl;

    vector<int> tab = votePluralite(jeu1, jeu2, jeu3, jeu4);
    string nomJeu;
    for (int i = tab.size(); i >= 0; i--)
    {
        if (tab[i] == jeu1)
        {
            nomJeu = "jeu1";
            cout << i << " eme : " << nomJeu << endl;
        }

        if (tab[i] == jeu2)
        {
            nomJeu = "jeu2";
            cout << i << " eme : "
                 << nomJeu << endl;
        }

        if (tab[i] == jeu3)
        {
            nomJeu = "jeu3";
            cout << i << " eme : "
                 << nomJeu << endl;
        }

        if (tab[i] == jeu4)
        {
            nomJeu = "jeu4";
            cout
                << i << " eme : "
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

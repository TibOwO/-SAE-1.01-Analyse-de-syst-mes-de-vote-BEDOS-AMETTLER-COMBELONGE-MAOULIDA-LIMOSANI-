#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h> //pour la partie utilisant cette librairie, nous avons été aidé de :https://www.geeksforgeeks.org/how-to-split-a-string-in-cc-python-and-java/
using namespace std;

vector<int> CalculGagnant(int jeu1, int jeu2, int jeu3, int jeu4)
{
    vector<int> tab(4);
    tab[0] = jeu1;
    tab[1] = jeu2;
    tab[2] = jeu3;
    tab[3] = jeu4;
    int i = 0;
    sort(tab.begin(), tab.end(), greater<>());
    return tab;
}

int main()
{

    // Déclaration des variables
    int nbrParticiant = 0;
    int jeu1 = 0;
    int jeu2 = 0;
    int jeu3 = 0;
    int jeu4 = 0;
    vector<string> nomJeux(4);

    // Affichage des jeux
    cout << "Les quatre jeu sont : " << endl;
    string ligneJeu;
    for (int i = 0; i < 4; i++)
    {
        cin >> ligneJeu;
        nomJeux[i] = ligneJeu;
        cout << nomJeux[i] << endl;
    }
    cout << endl;

    // Comptabilisation des votes
    string vote;
    while (cin.eof() == false)
    {
        cin >> vote;
        cout << vote << endl;
        if (vote == "vote:")
        {
            for (int i = 4; i <= 0; i--)
            {
                cin >> vote;
                cout << vote << endl;
                if (vote == "1")
                {
                    jeu1 = jeu1 + i;
                }

                else if (vote == "2")
                {
                    jeu2 = jeu2 + i;
                }

                else if (vote == "3")
                {
                    jeu3 = jeu3 + i;
                }

                else if (vote == "4")
                {
                    jeu4 = jeu4 + i;
                }
            }
        }
        else
        {
            ++nbrParticiant;
        }
    }

    nbrParticiant = nbrParticiant / 2;

    // Affichage des résultats
    cout << "Resultat final : " << endl
         << endl
         << nomJeux[0] << " = " << jeu1 << endl
         << nomJeux[1] << " = " << jeu2 << endl
         << nomJeux[2] << " = " << jeu3 << endl
         << nomJeux[3] << " = " << jeu4 << endl
         << "Nombre de participant = " << nbrParticiant << endl
         << endl;

    // Calcul et affichage des gagnant
    vector<int> tab = CalculGagnant(jeu1, jeu2, jeu3, jeu4);
    bool aff1 = false;
    bool aff2 = false;
    bool aff3 = false;
    bool aff4 = false;
    for (int i = 0; i <= tab.size() - 1; ++i)
    {
        if (i == 0)
        {
            cout << i + 1 << "er, ";
        }
        else
        {
            cout << i + 1 << "ème, ";
        }

        if (tab[i] == jeu1 && aff1 == false)
        {

            cout << nomJeux[0];
            aff1 = false;
        }

        else if (tab[i] == jeu2 && aff2 == false)
        {
            cout << nomJeux[1];
            aff2 = true;
        }

        else if (tab[i] == jeu3 && aff3 == false)
        {
            cout << nomJeux[2];
            aff3 = true;
        }

        else if (tab[i] == jeu4 && aff4 == false)
        {
            cout << nomJeux[3];
            aff4 = true;
        }
        cout << " avec un score de : " << tab[i] << endl;
    }
}
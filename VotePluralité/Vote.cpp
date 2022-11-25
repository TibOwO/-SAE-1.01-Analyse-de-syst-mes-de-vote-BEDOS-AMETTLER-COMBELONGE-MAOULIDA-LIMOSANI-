// Bibliothèques
#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>

// Espace de code
using namespace std;

// déclaration des variables
    int nbrParticiant = 0;               // Init. du compteur de participants/votants

    int jeu1, jeu2, jeu3, jeu4 = 0;      // Init. des compteurs de vote pour chaque jeu

    vector<string> nomJeux(4);           // Init. tableau avec le nom des jeux

    bool aff1, aff2, aff3, aff4 = false; // Init. variable pour gerer les égalités
    
//FONCTIONS 

//-- Liste les jeux presents dans le fichier input.txt --
void ListeJeu(string ligneLu, char delimiter)
{
    stringstream ss(ligneLu);           // Init. variable "ss" de type stringstream qui a pour option "ligneLu", passé en paramètre de la fonction "ListeJeu"
    string jeu;                         // Init. variable "jeu" de type string
    while (!ss.eof())                   // La boucle tourne tant que le programme n'est pas arrivé a lafin de la ligne lu (LigneLu)
    {
        getline(ss, jeu, delimiter);    // Entre ss en entrée standard et stock une string dans la variable jeux jusqu'a un delimiter passé en paramètre
        cout << jeu << endl;            // affiche la string stocké dans la variable jeu
    }
}

//-- Affiche les jeux recupérés précedement avec ListeJeu() dans le fichier de sortie --
void affichJeux(){
    cout << "Les quatre jeu sont : " << endl;   // Affiche une première phrase
    string ligneJeu;                            // Init. variable ligneJeu de type string
    for (int i = 0; i < 4; i++)
    {
        cin >> ligneJeu;
        ListeJeu(ligneJeu, ' ');
        nomJeux[i] = ligneJeu;
    }
}

//-- Comptabilise les voix de chaque votant et les enregistres dans les variables coorespondantes
void CompteVote(){
    while (cin.eof() == false)
    {
        string ligneLue;
        cin >> ligneLue;
        if (ligneLue == "1")
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
    nbrParticiant = nbrParticiant / 2;
}

// -- Affiche votes optenue pour chaque jeux --
void affichResultat(){
    // Affichage des résultats
    cout << "Resultat final : " << endl
         << endl
         << nomJeux[0] << " = " << jeu1 << endl
         << nomJeux[1] << " = " << jeu2 << endl
         << nomJeux[2] << " = " << jeu3 << endl
         << nomJeux[3] << " = " << jeu4 << endl
         << "Nombre de participant = " << nbrParticiant << endl
         << endl;
}

// -- Tri les jeux en fonction des vote reçu, du plus grand au plus petit --
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

// -- Affiche le classement des jeux, du premier au dernier --
void affichGagnant(vector<int> tab){
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
            aff1 = true;
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


int main()
{
    //-- Affiche les jeux recupérés précedement avec ListeJeu() dans le fichier de sortie --
    affichJeux();

    //-- Comptabilise les voix de chaque votant et les enregistres dans les variables coorespondantes
    CompteVote();

    // -- Affiche votes optenue pour chaque jeux --
    affichResultat();

    // -- Tri les jeux en fonction des vote reçu, du plus grand au plus petit --
    vector<int> tab = CalculGagnant(jeu1, jeu2, jeu3, jeu4);
    
    // -- Affiche le classement des jeux, du premier au dernier --
    affichGagnant(tab);
}

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <clocale>

using namespace std;

struct Article{
    int codeA;
    string libelle;
    double prixU;
};

//liste des articles
vector<Article> Articles = {
    {1, "Centrifugeuse", 3700.00},
    {2, "Grille-pain", 1995.00},
    {3, "Four � raclette 6P", 2952.50},
    {4, "Mixeur", 1250.00},
    {5, "Sorbeti�re", 3300.00},
    {6, "Vibromasseur", 1300.00},
    {7, "Platine Vinyle", 4569.95}
    };

// Fonction pour rechercher les informations relatives � un article, � partir de son num�ro de code
Article rechercherArticle(int code) {
    for (const auto &article : Articles) {
        if (article.codeA == code) {
            return article;
        }
    }
    // Retourne un article vide si le code n'est pas trouv�
    return Article{ 0, "", 0 };
}

void afficherFacture(const vector<pair<Article, int>> &lignesFacture) {
    double total = 0;
    cout << "**Facture** :\n\n";
    cout << "Code\tLibelle\t\tPrix\tQuantite\tTotal\n";
    cout << "--------------------------------------------------\n";
    for (const auto &ligne : lignesFacture) {
        double sousTotal = ligne.first.prixU * ligne.second;
        cout << ligne.first.codeA << "\t"
            << ligne.first.libelle << "\t\t"
            << ligne.first.prixU << "\t"
            << ligne.second << "\t" << sousTotal
            << endl;
        total += sousTotal;
    }
    cout << "--------------------------------------------------\n";
    cout << "Total :\t\t\t\t\t\t" << total << endl;
}

int main()
{
    vector<pair<Article, int>> lignesFacture;

    //variables
    int nbA, code, Qte;
    int i;

    setlocale(LC_CTYPE, "");
    //debut
    cout << "Programme de facturation" << endl<< endl;
    cout << "Combien d�articles � facturer ?: ";
    cin >> nbA;
    cout << endl;

// Demande le code de l'article � l'utilisateur
    for(i=1; i<=nbA; i++){
        cout << "Article N�" << i << endl;
        cout << "Code article ?: ";
        cin >> code;
    // Recherche de l'article correspondant au code entr�
        Article article = rechercherArticle(code);

    // V�rifie si l'article a �t� trouv�
        if (article.codeA = code) {
            cout << "Quantit� de " << article.libelle << " au prix unitaire de " << article.prixU << " ?: ";
            cin >> Qte;
            cout << endl;
    // Ajoute l'article et la quantit� � la facture
        lignesFacture.push_back(make_pair(article, Qte));
        } else {
        // Affiche un message d'erreur si l'article n'a pas �t� trouv�
            cout << "Article non trouv�." << endl;
        }
}
// Affichage de la facture
    if (lignesFacture.empty()) {
        cout << "Facture vide.\n";
    }
    else {
        afficherFacture(lignesFacture);
    }

    return 0;
}

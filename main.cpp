#include <iostream>

using namespace std;

int main()
{
    float n1, n2, re;
    char operateur;

    cout << "Programme calculatrice arithmétique" << endl;
    cout <<"Entrez le premier nombre : " << endl;
    cin >> n1;
    cout <<"Entrez le second nombre : " << endl;
    cin >> n2;
    cout <<"Précisez l'opérateur : " << endl;
    cin >> operateur;

    if(operateur == '+')
    {
        re = n1 + n2;
    }
    else if(operateur == '-')
    {
        re = n1 - n2;
    }
    else if(operateur == '/')
    {
        re = n1 / n2;
    }
    else if(operateur == '*')
    {
        re = n1 * n2;
    }

    cout <<"Voici le resultat : ", re << endl;

    return 0;
}

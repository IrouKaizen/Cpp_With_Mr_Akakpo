/* Name : calculatrice.c++
   Goal : calcul et affichage arithmetique
   Author : IrouKaizen
   Date : 10/03/23
*/

#include <iostream>
#include<iomanip>
#include <clocale>

using namespace std;

int main()
{

    float n1,n2,resultat;
    char operateur;

    setlocale(LC_TYPE, "");
    cout << "Programme Calculatrice arithmetique" << endl;
    cout << "Entrez le premier nombre :";
    cin >> n1;
    cout << "Entrez le deuxieme nombre :" ;
    cin >> n2;
    cout << "Entrez l operateur :" ;
    cin >> operateur;

    if(operateur == '+')
    {
        resultat = n1 + n2;
    }
    else if(operateur == '-')
    {
        resultat = n1 - n2;
    }
    else if(operateur == '*')
    {
        resultat = n1 * n2;
    }
    else if(operateur == '/')
    {
        resultat = float(n1 / n2);
    }

    // Affiche le résultat

    cout<<"operation et resultat :" <<endl;
    cout<<n1 <<operateur << n2 << " = " <<resultat <<endl;
    return 0;
}

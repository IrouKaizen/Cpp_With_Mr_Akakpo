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

    float nombre1,nombre2,resultat;
    char operateur;

    setlocale(LC_TYPE, "");
    cout << "Programme Calculatrice arithmetique" << endl;
    cout << "Entrez le premier nombre :";
    cin >> nombre1;
    cout << "Entrez le deuxieme nombre :" ;
    cin >> nombre2;
    cout << "Entrez l operateur :" ;
    cin >> operateur;

    if(operateur == '+')
    {
        resultat = nombre1 + nombre2;
    }
    else if(operateur == '-')
    {
        resultat = nombre1 - nombre2;
    }
    else if(operateur == '*')
    {
        resultat = nombre1 * nombre2;
    }
    else if(operateur == '/')
    {
        resultat = float(nombre1 / nombre2);
    }

    // Affiche le résultat

    cout<<"operation et resultat :" <<endl;
    cout<<nombre1 <<operateur << nombre2 << " = " <<resultat <<endl;
    return 0;
}

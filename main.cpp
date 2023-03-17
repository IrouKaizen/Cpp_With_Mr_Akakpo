#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double tempDebut, tempFin, pas;

    ///Ce code en C++ demande � l'utilisateur de saisir une temp�rature de d�but, une temp�rature de fin et un pas de progression,
    ///puis affiche un tableau de conversion des temp�ratures de Celsius � Fahrenheit avec une pr�cision d�finie par le pas de progression.

    // Demande la temp�rature de d�but
    cout << "Entrez la temperature de debut : ";
    cin >> tempDebut;

    // Demande la temp�rature de fin
    cout << "Entrez la temperature de fin : ";
    cin >> tempFin;

    // Demande le pas de progression
    cout << "Entrez le pas de progression : ";
    cin >> pas;

    // V�rifie les cas impossibles
    if (tempFin < tempDebut)
    {
        cout << "Erreur : la temperature de fin ne peut pas etre inferieure a la temperature de debut." << endl;
        return 1;
    }

    if (pas <= 0 || pas > (tempFin - tempDebut))
    {
        cout << "Erreur : le pas de progression doit etre strictement positif et inferieur a l'intervalle de temperatures." << endl;
        return 1;
    }

    // Affiche le tableau
    cout << setw(15) << left << "Temperature" << setw(15) << left << "Fahrenheit" << setw(15) << left << "Celsius" << endl;

    for (double t = tempDebut; t <= tempFin; t += pas)
    {
        double f = 9.0 / 5.0 * t + 32.0;
        cout << setw(15) << left << t << setw(15) << left << f << setw(15) << left << (f - 32.0) * 5.0 / 9.0 << endl;
    }

    return 0;
}

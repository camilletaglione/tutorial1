#include <iostream>
using namespace std;

int main() 
{
    int a = 0, longueur;

    cout << "Entrez un entier positif : ";
    cin >> a;

    cout << "Entrez la longueur de la table : ";
    cin >> longueur;

    for (int b = 1; b <= longueur; ++b) 
    {
        cout << a << " * " << b << " = " << a * b ; 
    }

    return 0; 
}



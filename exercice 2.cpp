#include <iostream>
using namespace std;

int Maximum(int M[], int a) 
{ 
	int k, max;
	max = M[0];
	for (k = 1; k < a; k++)
	{
		if (M[k] > max) 
			max = M[k];
	}
	return max; 
}

int Minimum(int m[], int b)
{
	int k, min;
	min = m[0];
	for (k = 1; k < b; k++)
	{
		if (m[k] < min)
			min = m[k];
	}
	return min; 
}


int main() 
{
	int k, table[50], taille, max, min;
	cout << "Entrez la taille du tableau \n";
	cin >> taille;
	cout << "Entrez les " << taille << " entiers contenu dans le tableau\n";
	for (k = 0; k < taille; k++)
		cin >> table[k];
	max = Maximum(table, taille); 
	min = Minimum(table, taille); 
	cout << "Le plus grand element du tableau est:" << max << "\n";
	cout << "le plus petit element du tableau est :" << min << "\n";
    return (0);
}



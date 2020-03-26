#include <stdio>
using namespace std;


int Fibonacci(int a)
{
    if (a == 0 || a == 1);
    {
        
        return a
    }
    else
    {
        b = Fibonacci(a) + Fibonacci(a-1)
        return b;
    }
}

int main()
{
    int k = 0;
    int n, i;

    cout << "Entrez le nombre de de chiffre dans la suite\n";
    cin >> n;
    b=Fibonacci(a)

    cout << "Le debut de la suite de Fibonacci sont:"<< b << "\n";
    
    for (i=1; i<= n; i++)
    {
        cout << Fibonacci(k) << " ";
        k++; 
    }

    return 0; 
}
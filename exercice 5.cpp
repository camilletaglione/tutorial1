#include <iostream>
using namespace std;

int AND(int a, int b, int c)
{
    int d;
    d = a & b & c;
    return d;
}

int OR(int a, int b, int c)
{
    int d;
    d = a | b | c;
    return d;
}



int main()
{
    int y = 0;
    int a, b, c, d, e;
    cout << "Table de verite -> AND -> OR \n";
    if (y == 0)
    {
        a = 0;
        b = 0;
        c = 0;
        d = AND(a, b, c);
        e = OR(a, b, c);
        cout << a << b << c << "->" << d << "->" << e << "\n";
        y = y + 1;
    }
    if (y == 1)
    {
        a = 0;
        b = 0;
        c = 1;
        d = AND(a, b, c);
        e = OR(a, b, c);
        cout << a << b << c << "->" << d << "->" << e << "\n";
        y = y + 1;
    }
    if (y == 2)
    {
        a = 0;
        b = 1;
        c = 0;
        d = AND(a, b, c);
        e = OR(a, b, c);
        cout << a << b << c << "->" << d << "->" << e << "\n";
        y = y + 1;
    }
    if (y == 3)
    {
        a = 0;
        b = 1;
        c = 1;
        d = AND(a, b, c);
        e = OR(a, b, c);
        cout << a << b << c << "->" << d << "->" << e << "\n";
        y = y + 1;
    }
    if (y == 4)
    {
        a = 1;
        b = 0;
        c = 0;
        d = AND(a, b, c);
        e = OR(a, b, c);
        cout << a << b << c << "->" << d << "->" << e << "\n";
        y = y + 1;
    }
    if (y == 5)
    {
        a = 1;
        b = 0;
        c = 1;
        d = AND(a, b, c);
        e = OR(a, b, c);
        cout << a << b << c << "->" << d << "->" << e << "\n";
        y = y + 1;
    }
    if (y == 6)
    {
        a = 1;
        b = 1;
        c = 0;
        d = AND(a, b, c);
        e = OR(a, b, c);
        cout << a << b << c << "->" << d << "->" << e << "\n";
        y = y + 1;
    }
    if (y == 7)
    {
        a = 1;
        b = 1;
        c = 1;
        d = AND(a, b, c);
        e = OR(a, b, c);
        cout << a << b << c << "->" << d << "->" << e << "\n";
        y = y + 1;
    }
    return 0;
}

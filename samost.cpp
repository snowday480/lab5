#include <iostream> 
#include <iomanip> 
#include "windows.h"
#include <cmath>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b, h;
    cout << "Початкове x = ";
    cin >> a;
    cout << "Кінцеве x = ";
    cin >> b;
    cout << "Крок за x = ";
    cin >> h;
    double x = a, y;
    while (x <= b)
    {
        y = cos(x) + log(x) - exp(x);
        cout << setw(1) << "x=" << x << setw(4) << "y=" << y << endl;
        x += h;
    }

    system("pause");
    return 0;
}

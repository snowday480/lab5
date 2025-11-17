#include <iostream>
#include <iomanip>
#include <math.h>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, a, c, f;

    cout << "¬вед≥ть a: ";
    cin >> a;
    cout << "¬вед≥ть c: ";
    cin >> c;
    cout << "¬вед≥ть x: ";
    cin >> x;

    if (c < 0 && a != 0) {
        f = -a * pow(x, 2);
    }
    else if (c > 0 || a == 0) {
        f = (a - x) / (c * x);
    }
    else {
        f = x / c;
    }

    cout << "F = " << f << endl;
    system("pause");
    return 0;
}

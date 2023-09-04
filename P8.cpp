#include <iostream>
using namespace std;
int main() {
    int a, b, c,suma;
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;

    suma = 0;

    for (int i = 1; i < c; ++i) {
        if (i % a == 0 || i % b == 0) {
            suma += i;
        }
    }

    
    cout << "Sumatoria: ";
    for (int divisores = 1; divisores < c; divisores++) {
        if (divisores % a == 0 || divisores % b == 0) {
            cout << divisores;
            if (divisores < c - 1) {
                cout << " + ";
            }
        }
    }
    cout << " = " << suma << endl;

    return 0;
}

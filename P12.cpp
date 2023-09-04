#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Ingrese un número para calcular su máximo factor primo: ";
    cin >> numero;

    int factor_primo = 2; 

    while (numero > 1) {
        if (numero % factor_primo == 0) {
            numero /= factor_primo;
        } else {
            factor_primo++;
        }
    }
    cout << "El mayor factor primo de " << numero << " es: " << factor_primo;

    return 0;
}

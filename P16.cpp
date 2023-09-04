#include <iostream>
using namespace std;
int main() {
    int k,longitud_mas_larga,numero,longitud;
    cout << "Ingrese un número k: ";
    cin >> k;

    long long serie_mas_larga = 0;
    longitud_mas_larga = 0;

    for (int semilla = 1; semilla < k; semilla++) {
        numero = semilla;
        longitud = 1;

        while (numero != 1) {
            if (numero % 2 == 0) {
                numero /= 2;
            } else {
                numero = 3 * numero + 1;
            }
            longitud++;
        }

        if (longitud > longitud_mas_larga) {
            serie_mas_larga = semilla;
            longitud_mas_larga = longitud;
        }
    }

    cout << "La serie más larga es con la semilla: " << serie_mas_larga << ", teniendo " << longitud_mas_larga << " términos." << std::endl;

    return 0;
}
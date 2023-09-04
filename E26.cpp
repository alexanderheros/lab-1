#include <iostream>
using namespace std;

int main() {
    double lado1, lado2, lado3;
    cout << "Ingrese  lado 1: ";
    cin >> lado1;
    cout << "Ingrese lado2: ";
    cin >> lado2;
    cout << "Ingrese lado 3: ";
    cin >> lado3;
	
/*La desigualdad triangular establece que para que tres longitudes formen un triángulo, 
la suma de las longitudes de cualquier par de lados debe ser mayor que la longitud 
del tercer lado.*/
    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        if (lado1 == lado2 && lado2 == lado3) {
            cout << "Se forma un triángulo equilátero." << endl;
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            cout << "Se forma un triángulo isósceles." << endl;
        } else {
            cout << "Se forma un triángulo escaleno." << endl;
        }
    } else {
        cout << "Las longitudes ingresadas no forman un triángulo." << endl;
    }

    return 0;
}
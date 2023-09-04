#include <iostream>
using namespace std;
int main() {
    int n,es_primo,contador,numero;
    cout<<"Ingrese un número n para encontrar el enésimo número primo: ";
    cin>>n;

    contador = 0;
    numero = 2;

    while (contador < n) {
        es_primo = 2; 

        for (int divisores = 2; divisores * divisores <= numero; divisores++) {
            if (numero % divisores == 0) {
                es_primo = 0;  
                break;
            }
        }

        if (es_primo) {
            contador++;
            if (contador == n) {
                break;
            }
        }
        numero++;
    }

    cout<<"El  primo numero "<< n <<" es "<< numero;

    return 0;
}
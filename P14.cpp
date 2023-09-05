#include <iostream>
using namespace std;

bool es_palindromo(int n){
    int original = n;
    int reverso =0;
    while(n>0){
        int digito = n%10;
        reverso =reverso*10+digito;
        n=n/10;
    }
    return original ==reverso;

}


int main() {
    int numero,max_palindromo,factor1,producto;
    cout << "Ingrese un número para calcular: ";
            cin >> numero;



    max_palindromo = 0;
    factor1= 0;

    for(int i=100;i<999;i++){
        producto = i*numero;
        if (producto>max_palindromo && es_palindromo(producto)){
            max_palindromo = producto;
            factor1=i;
        }
    }
    cout<<"el factor " << factor1 <<" * "<<numero<<" = "<<max_palindromo;

    return 0;
}

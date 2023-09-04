#include <iostream>
using namespace std;

int main(){
    float e_aproximado = 1.0;
    float factorial = 1.0;
    int aproximacion;
    cout << "Ingrese el número  e: ";
    cin >> aproximacion;
    

    for (int n = 1; n <= aproximacion; n++) {
        factorial *= n;
        e_aproximado += 1/ factorial;
        
    }
    cout << "El valor aproximado de e con " << aproximacion << " términos es: " << e_aproximado << endl;
    return 0;
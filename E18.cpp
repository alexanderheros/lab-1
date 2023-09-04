#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int N,raiz;
    cout<<"ingrese el numero para calcular si es cuadrado perfecto: ";
    cin>>N;
    //raiz=0;
    raiz=sqrt(N);
    if (raiz*raiz ==N){
        cout<<"el numero es cuadrado perfecto";
    }
    else{
        cout<<"el numero no es cuadrado perfecto";
    }
    return 0;
} 
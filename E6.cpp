#include <iostream>

using namespace std;

int main(){
    int base,e,resul;
    cout<<"ingrese la base:";
    cin>>base;
    cout<<"ingrese exponente:";
    cin>>e;
    resul = 1;
    for (int i=1;i<=e;i++){
        resul*=base;
    }
    cout<< base << "^" <<e<< "=" <<resul;
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"ingrese el numero a: ";
    cin>>a;
    cout<<"ingrese el numero b: ";
    cin>>b;
    if (a < b)
        cout<<"el numero a es menor";
    else if (a==b)
        cout<<" a y b son numeros iguales";
    else
        cout<<"el numero b es menor";
    return 0;
}

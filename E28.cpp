#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int num;
    double elemento;
    cout<<"ingrese el numero: ";
    cin>>num;
    elemento=0.0;
    for(int i =0 ; i<num ;i++){
        elemento=elemento +pow(-1,i)/(2*i+1);
    }
    elemento= 4*elemento;
    
    cout<<elemento;
    
    return 0;
} 
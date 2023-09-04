#include<iostream>

using namespace std;

int main (){
    int N, multiplo,multiplos;
    cout<<"ingrese el numero N a calcular: ";
    cin>>N;
    multiplo = 2;
    multiplos= N;
    cout<<"los multiplos de:"<<N<<" menores que 100:"<<endl;
    while(multiplos<=100){
        cout << multiplos<<endl;
        multiplos= N*multiplo;
        multiplo +=1;
    }
    return 0;
}

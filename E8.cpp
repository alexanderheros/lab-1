#include <iostream>

using namespace std;

int main (){
    int fact,N;
    cout<<"ingrese el número N a calcular: ";
    cin>>N;
    fact = 1;
    for(int i =1;i<=N;i++){
        fact *=i;
    }
    cout<<N<<"!="<<fact;
    return 0;
}

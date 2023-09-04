
#include <iostream>
using namespace std;

int main() {
    int n,acomul;
    cout<<"ingrese numero para imprimirlas potencias: ";
    cin>>n;
    acomul= n;
    for(int i = 1;i<=5;i++){
        cout<<n<<"^"<<i<<"="<<acomul<<endl;
        acomul*=n;
    }
    return 0;
}



#include <iostream>

using namespace std;

int main(){
    int N,num,digito,invertido;
    cout<<"ingrese el numero: ";
    cin>>N;
    num=N;
    invertido=0;
    digito=0;
    while(num>0){
        digito = num%10;
        invertido=invertido *10+digito;
        num/=10;
    }
    
    if(N==invertido){
      cout<<N<<" Es un numero palindromo";
    }
    else{
      cout<<N<<" No es palindromo";
}
    return 0;
} 
#include<iostream>

using namespace std;

int main(){
    int num,hora,res1,minu,seg;
    cout<<"ingrese cantidad entere de segundos:";
    cin>>num;
    hora=num/3600;
    res1=num%3600;
    minu=res1/60;
    seg=res1%60;
    
    
    cout<<hora<<":"<<minu<<":"<<seg;
    
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int monto,ctaM,vte,diz,cco,mil,qui,dos,cien,cta,resto1,resto2,resto3,resto4,resto5,resto6,resto7,resto8,resto9;
    cout<<"ingrese el valor: ";
    cin>>monto;
    ctaM =monto/50000;
    resto1 = monto%50000;
    cout<<"50000:"<<ctaM<<endl;

    vte = resto1/20000;
    resto2=resto1%20000;
    cout<<"20000:"<<vte<<endl;
    diz = resto2/10000;
    resto3=resto2%10000;
    cout<<"10000:"<<diz<<endl;

    cco = resto3/5000;
    resto4=resto3%5000;
    cout<<"5000:"<<cco<<endl;

    mil=resto4/1000;
    resto5=resto4%1000;
    cout<<"1000:"<<mil<<endl;

    qui=resto5/500;
    resto6=resto5%500;
    cout<<"500:"<<qui<<endl;

    dos=resto6/200;
    resto7=resto6%200;
    cout<<"200:"<<dos<<endl;

    cien=resto6/100;
    resto8=resto7%100;
    cout<<"100:"<<cien<<endl;

    cta=resto8/50;
    resto9=resto8%50;
    cout<<"50:"<<cta<<endl;

    return 0;
}

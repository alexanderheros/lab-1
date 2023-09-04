#include<iostream>

using namespace std;

int main(){
    int num;
    float promedio;
    long acom,sumatoria;
    acom = 0;
    sumatoria = 0;
    promedio = 0.0;
    while(true) {
        cout<<"ingrese numeros a promediar:";
        cin>>num;
        if (num == 0){
            break;
        }
         acom+=num;
        sumatoria+=1;
    } 
    promedio = acom / sumatoria;
    cout<<" el promedio de dichos numeros es :"<<promedio;
  
    return 0;
}
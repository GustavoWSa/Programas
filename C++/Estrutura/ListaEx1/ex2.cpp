#include <iostream>
using namespace std;
int main(){
    int num[4],aux;
    for(int i=0;i<4;i++){
        cout<<"Digite um numero";
        cin>>num[i];
    }
    for (int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(num[i]>num[j]){
                aux=num[i];
                num[i]=num[j];
                num[j]=aux;
            }
        }
    }
    aux=0;
    for(int i=3;i>0 ;i--){
        aux+=num[i];
    }
    cout<<"A soma dos menores numeros e: "<< aux;
    
}
#include <iostream>
using namespace std;
int main(){
    int vet[10],aux;
    for(int i=0;i<10;i++){
        cout<<"Digite um numero";
        cin>>vet[i];
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(vet[j]>vet[i]){
                aux=vet[j];
                vet[j]=vet[i];
                vet[i]=aux;
            }
        }
    }
    cout<<"Os numeros digitados foram: ";
    for(int i=0;i<10;i++){
        cout<< vet[i] << "\n";
    }
    cout<<"O maior numero digitado e: "<< vet[9] << "\n E o menor e: " << vet[0];
}
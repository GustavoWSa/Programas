#include <iostream>
using namespace std;
int main(){
    int n,cinq=0,aux=0,qua=0;
    cout<<"Digite quantas pessoas quer cadastrar: ";
    cin>>n;
    int idade[n];
    double peso[n],altura[n],med;
    for(int i=0;i<n;i++){
        cout<<"Digite sua idade: ";
        cin>>idade[i];
        cout<<"Digite seu peso: ";
        cin>>peso[i];
        cout<<"Digite sua altura: ";
        cin>>altura[i];
    }
    for(int i=0;i<n;i++){
        if(idade[i]>50){
            cinq++;
        }
        if(idade[i]>=10){
            if(idade[i]<=20){
                med+=altura[i];
                aux++;
            }
        }
        if(peso[i]<40){
            qua++;
        }
    }
    med=med/aux;
    cout<<"Total de pessoas com mais de 50 anos: " << cinq <<endl;
    cout<<"Media das pessoas entre 10 e 20 anos: " << med << endl;
    cout<<"Porcentagem de pessoas com menos de 40kg: " << (qua/n)*100 <<"%";
}
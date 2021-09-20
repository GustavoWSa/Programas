#include <iostream>
using namespace std;
int main(){
    int vet[10], razao;
    cout<< "Digite o primeiro numero da pg";
    cin>>vet[0];
    cout<<"Digite a razao da pg";
    cin>>razao;
    for(int i=1;i<10;i++){
        vet[i]=vet[i-1]*razao;
    }
    for(int i=0;i<10;i++)
        cout<<vet[i]<<"\n";
}
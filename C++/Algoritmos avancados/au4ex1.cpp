#include <iostream>
using namespace std;

int somar(int n){
    int cont=1;
    int soma=0;
    cout << "Digite um numero diferente de 0";
    cin >> n;
    if(n==1){
        return soma;
    }
    else{
        soma = soma + somar(n-1);
    }
    cont++;
}
int main(){
int soma,n,cont=1;
cout << "Digite um numero diferente de 0";
cin >> n;
while(cont!=n){
if(n==0){
    cout << "Nao pode ser 0";
    break;
}
soma += cont;
}
}
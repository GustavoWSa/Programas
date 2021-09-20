/*
3. EXERCÍCIO 03 – Codifique um programa em C++ que:

a. Atribua (leia) via teclado (console) três valores inteiro;

b. Após os valores informados, exiba-os na tela com seus respectivos endereços de memória.
*/
#include <iostream>
using namespace std;
int main(){
    int vet[3];
    for(int i=0;i<3;i++){
        cout << "Digite o " << i+1 <<" numero: ";
        cin>> vet[i];
    }
    for(int i=0;i<3;i++){
        cout << "O valor da " << i+1 << " variavel e: " << vet[i] <<endl;
        cout << "E seu endereco de memoria e: " << &vet[i] <<endl;
    }
}
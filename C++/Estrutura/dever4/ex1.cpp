/*EXERCÍCIO 01 – Codifique um programa em C++ que:

a. Atribua via programa um valor inteiro à uma variável;

b. Exiba o conteúdo da variável e o endereço de memória da mesma.*/
#include <iostream>
using namespace std;
int main(){
    int a=2;
    cout<<"Conteudo da variavel: " << a;
    cout << "Endereco da variavel: " << &a;

}
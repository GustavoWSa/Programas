/*EXERCÍCIO 02 – Codifique um programa em C++ que:

a. Atribua (leia) via teclado (console) um valor inteiro à uma variável;

b. Exiba o conteúdo da variável e o endereço de memória da mesma.
*/
#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Digite um numero";
    cin>>a;
    cout<<"Conteudo da variavel: " << a;
    cout << "Endereco da variavel: " << &a;
}
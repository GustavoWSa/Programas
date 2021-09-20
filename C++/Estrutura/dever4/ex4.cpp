/*
4. EXERCÍCIO 04 – Ao executarmos o seguinte código, qual resultado será apresentado na tela? Demostrem a depuração.

#include<iostream>

using namespace std;

int funcao (int *valor1, int *valor2) {

*valor1 = 50;

*valor2 = 200;

return 100;

}

int main() {

int *a, b; a = &b; b = 100;

funcao(a, a);

cout << *a;

cout <<" e "<< b;

}
*/
#include<iostream>

using namespace std;

int funcao (int *valor1, int *valor2) {

*valor1 = 50;

*valor2 = 200;

return 100;

}

int main() {

int *a, b; a = &b; b = 100;

funcao(a, a);

cout << *a;

cout <<" e "<< b;

}

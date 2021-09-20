#include <iostream>
using namespace std;
struct teste{
    short dia;
    short mes;
    int ano;
};
int main(){
    int *p;
    teste *hoje;
    int count=4; int *iptr;
    iptr = &count;
    teste Teste;
    hoje->ano=2022;
    hoje->dia=05;
    hoje->mes=4;
    Teste.ano=2021;
    Teste = *hoje;
    cout << iptr <<endl;
    cout << &count <<endl;
    cout << p << endl;
    cout << "hoje: " << hoje->ano;
}
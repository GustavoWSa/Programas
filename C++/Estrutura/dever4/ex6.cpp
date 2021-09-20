/*
6. EXERCÍCIO 06 – Codifique um programa em C++ que:

a. Atribua (leia) via teclado (console) a data do seu nascimento (dia, mês e ano); Após os valores informados, exiba-os na tela.

OBS. Utilize a struct data conforme abaixo, usando ponteiro e seta para indicar o membro da estrutura.

struct data {

short dia;

short mes;

int ano;

};
*/
#include <iostream>
using namespace std;
int main(){
    struct data {        
short dia;
short mes;
int ano;};
data Data;
data *pont;
pont = &Data;
cout << "Digite seu dia de nascimento: ";
cin>> pont->dia;
cout << "Digite seu mes de nascimento: ";
cin>>pont->mes;
cout << "Digite seu ano de nascimento: ";
cin>>pont->ano;
cout << "Voce nasceu dia " << pont->dia << " do mes " << pont->mes << " do ano " << pont->ano;


}
/*1 - Declare uma struct chamada Cadastro que defina os seguintes dados: nome, endereço, numero, bairro, complemento, cep, cidade, uf, telefone1, telefone2. Use tipo char(com tamanho definido) e int para os dados e permita a leitura de no máximo 10 registros.
	2 - Crie 2 funções, uma para ler e outra para mostrar os registros.
	3 - Crie 1 função que permita a pesquisa pelo telefone1 e que informe se encontrou ou não encontrou o telefone1 procurado e se encontrou, quantas vezes ele aparece.
    */
#include<iostream>
#include <stdlib.h>  		
using namespace std;
struct cadastro
{
    int numero,cep;
    char nome[10], bairro[10];
};
void ler(struct cadastro *a){
    cin>>a->bairro;
    cin>>a->cep;
    cin>>a->nome;
    cin>>a->numero; 
};
void print(struct cadastro *a){
    cout<<a->bairro;
    cout<<a->cep;
    cout<<a->nome;
    cout<<a->numero;
}
int main(){
    cadastro Cadastro[10];
    cadastro *pont;
    pont=&Cadastro[0];
    ler(pont);
    print(pont);
    
}
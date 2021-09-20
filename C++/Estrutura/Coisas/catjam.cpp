#include <iostream>
using namespace std;
/*1 - Declare uma struct chamada Cadastro que defina os seguintes dados: nome, endereço, numero, bairro, complemento, cep, cidade, uf, telefone1, telefone2.
 Use tipo char(com tamanho definido) e int para os dados e permita a leitura de no máximo 10 registros.
	2 - Crie 2 funções, uma para ler e outra para mostrar os registros.
	3 - Crie 1 função que permita a pesquisa pelo telefone1 e que informe se encontrou ou não encontrou o telefone1 procurado e se encontrou, quantas vezes ele aparece.
    */
struct Cadastro
{
    char nome[10];
    int cep;
    char uf[2];
};
Cadastro ler(Cadastro *cadastro){
    cout << "Digite seu nome: ";
    cin>> cadastro.nome;
    cout << "Digite seu cep: ";
    cin>> cadastro.cep;
    cout << "Digite seu uf: ";
    cin>> cadastro.uf;
    return cadastro;
}
void print(Cadastro *cadastro){
cout << cadastro.cep <<endl;
cout << cadastro.nome << endl;
cout << cadastro.uf << endl;
}
int main(){
    Cadastro *cadastro1;
    cadastro1=ler(cadastro1);
    print(cadastro1);
}
   
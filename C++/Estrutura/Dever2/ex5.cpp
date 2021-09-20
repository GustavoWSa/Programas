 #include <iostream>
using namespace std;
int main(){
    struct Cadastro{
        int codigo;
        char nome[30];
    };
    Cadastro cliente;
cout << "\n Qual o codigo desse cadastro: "; 	cin >>cliente.codigo;
cout << " Qual o nome desse cliente...: "; 		cin >>cliente.nome;
cout << " codigo = " << cliente.codigo << endl;
cout << " nome = " << cliente.nome << endl;
}
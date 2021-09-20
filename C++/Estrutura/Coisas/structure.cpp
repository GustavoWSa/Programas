#include <iostream>
using namespace std;
int main(){
struct banco{
    string nome;
    string cpf;
    float saldo;
};
banco cl[10];
cl[8].nome="Gustavo";
cl[0].cpf="17667757720";
cl[0].saldo=200;
cout<<cl[8].nome<<cl[0].cpf<<cl[0].saldo<<"\n"<<cl[8].nome;
}

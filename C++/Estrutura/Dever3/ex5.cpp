#include<iostream> 
using namespace std;

void func1(int numero, char carac[30], float valor) {

cout <<"Valores Informados = "<< numero <<" "<<carac<<" "<<valor;

}
int main(int argc, char const *argv[])
{
    int num;
    float val;
    char cara[30];
    cout<<"Digite um numero";
    cin>>num;
    cout<<"Digite um caracter";
    cin>>cara;
    cout<<"Digite um numero";
    cin>>val;
    func1(num,cara,val);
    return 0;
}

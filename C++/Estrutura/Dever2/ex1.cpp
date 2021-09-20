#include <iostream>
using namespace std;
int main(){
    struct Banda{
        string nome;
        string tipo;
        int integrantes;
        int ranking;
    };
    Banda bandas[5];
    for(int i=0;i<5;i++){
        cout<<"Qual o nome da banda?";
        cin>> bandas[i].nome;
        cout<<"Qual o tipo musical da banda?";
        cin>> bandas[i].tipo;
        cout<<"Quantos integrantes ela tem?";
        cin>> bandas[i].integrantes;
        cout<<"Onde ela fica no seu top 5 bandas?";
        cin>> bandas[i].ranking;
    }
}
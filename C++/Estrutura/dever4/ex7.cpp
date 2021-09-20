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
cin>> Data.dia;
cout << "Digite seu mes de nascimento: ";
cin>>Data.mes;
cout << "Digite seu ano de nascimento: ";
cin>>Data.ano;
cout << "Voce nasceu dia " << Data.dia << " do mes " << Data.mes << " do ano " << Data.ano;


}
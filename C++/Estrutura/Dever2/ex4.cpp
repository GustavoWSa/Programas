#include <iostream>
using namespace std;
int main(){
    struct data{
        int dia,mes,ano;
    };
    data datas;
    cout<<"Digite o dia";
    cin>>datas.dia;
    cout<<"Digite o mes";
    cin>>datas.mes;
    cout<<"Digite o ano";
    cin>>datas.ano;
    cout<<"O dia é " << datas.dia << "do mes " << datas.mes << "do ano " << datas.ano;
}
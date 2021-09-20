#include <iostream>
using namespace std;
void calculadora(int j){
    int a,b;
    if(j==0){
        cout<<"Digite o 1 numero que deseja somar";
        cin>>a;
        cout<<"Digite o 2 numero que deseja somar";
        cin>>b;
        cout<<a+b;
        return;
    }
    if(j==1){
        cout<<"Digite o 1 numero que deseja subtrair";
        cin>>a;
        cout<<"Digite o 2 numero que deseja subtrair";
        cin>>b;
        cout<<a-b;
        return;
    }
    if(j==2){
        cout<<"Digite o 1 numero que deseja multiplicar";
        cin>>a;
        cout<<"Digite o 2 numero que deseja multiplicar";
        cin>>b;
        cout<<a*b;
        return;
    }
    if(j==3){
        cout<<"Digite o  1 numero que deseja dividir";
        cin>>a;
        cout<<"Digite o numero pelo que deseja dividi-lo";
        cin>>b;
        cout<<"O resultado e: " << a/b;
        ;
    }
    if(j==4){
        cout<<"Digite a base";
        cin>>a;
        int c=a;
        cout<<"Digite o expoente";
        cin>>b;
        for(int i=0;i<b-1;i++){
            a*=c;
        }
        cout<<"O resultado e: " << a;
        return ;
    }
}
int main(){
    int i;
    cout<< "Digite 0 para soma, 1 para subtrair, 2 para multiplicar, 3 para dividir, 4 para potenciacao: " << endl;
    cin>>i;
    calculadora(i);
}

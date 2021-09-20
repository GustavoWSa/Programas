#include <iostream>
using namespace std;
int main(){
    int num,num2;
    cout<<"Digite o primeiro numero";
    cin>>num;
    cout<<"Digite o segundo numero";
    cin>>num2;
    if(num>num2){
        for(int i=num2;i<num-1;i++){
            cout<< i+1;
        }
        return 0;
    }
    if(num==num2){
        cout<<"Sao o mesmo numero";
        return 0;
    }
    for(int i=num;i<num2-1;i++){
        cout<<i+1;   
    }

}
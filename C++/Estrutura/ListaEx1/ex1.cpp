#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Digite um numero";
    cin>>num;
    if(num%3==0){
        if(num%5==0){
            cout<<"E divisivel por 3 e 5";
            return 0;
        }
    }
    cout<<"Nao e divisivel por 3 e 5";

}
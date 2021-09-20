#include <iostream>
 
using namespace std;
 
int main() {
    int B, G,b;
    cout << "Digite quantos galhos tem a arvore";
    cin >> G;
    cout << "Digite quantas bolinhas ja tem";
    cin >> b;
    if(G/2<=b){
        cout << "Amelia tem todas bolinhas!";
    }
    else{
        B=G/2-b;
        cout << "Faltam " << B << " bolinhas!";
    }
 
    return 0;
}
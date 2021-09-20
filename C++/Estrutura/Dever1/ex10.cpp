#include <iostream>
using namespace std;
int main(){
int tam;
string n;    
cout<<"Digite o numero";
cin >> n;
tam= n.length();
int vet[tam];

if(tam % 2==0){
    for(int i=0;i<tam/2;i++){
        if(vet[i]==vet[(tam-1)-i]){
            
        }
    }
}   


}
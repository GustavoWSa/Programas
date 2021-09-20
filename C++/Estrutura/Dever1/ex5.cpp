#include <iostream>
using namespace std;
int main(){
int vet[10],vet2[5],copia[5];
for(int i=0;i<10;i++){
    vet[i]=i;
    if(i<5){
        copia[i]=vet[i];
    }
    else
        vet2[i-5]=vet[i];
}
for(int i=0;i<5;i++){
    cout<<vet[i];
    cout<<"\n";
	cout<<vet2[i];
    cout<<" \n";
    cout<<copia[i];
    cout<<"\n";
}
}

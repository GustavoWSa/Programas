#include <iostream>
using namespace std;
int busca(int n,int vet[],int ele){
for(int i=0;i<n;i++){
    if(ele==vet[i]){
        return vet[i];
    }
}
}
int main(){
int n=3;
int vet[n]=[0,1,2];
busca(n,vet[n],3);
}
#include <iostream>
using namespace std;
int main(){
    int vet[]={0,1,3,2};
    int aux=vet[0];
    for(int i=1;i<sizeof(vet);i++){
        if(vet[i]>aux){
            aux=vet[i];
        }
    }
}
/*
a)Melhor caso vetor não tem numeros
b)Pior caso é o ultimo numero
c)
*/
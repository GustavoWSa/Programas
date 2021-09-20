#include <iostream>
using namespace std;
int main(){
    int vet[4]={0,1,3,2};
    int aux=0;
    int procura=4;
    int med=0;
    bool encontrado=false;
    for(int i=0;i<4;i++){
        for (int f = i+1; f < 4; f++){
            if(vet[i]>vet[f]){
                aux=vet[i];
                vet[i]=vet[f];
                vet[f]=aux;
            }
        }   
    }
    int inf=vet[0],sup=0;
    sup=vet[3];
    while(inf<=sup){
        med=(inf+sup)/2;
        if(vet[med]==procura){
            encontrado=1;
            break;
        }
        else if(med>procura){
            sup=med-1;
        }
        else{
            inf = med+1;
        }
    }
    if(encontrado==1){
        cout << "Numero encontrado na posicao " << med;
    }
    else{
        cout << "Numero nao encontrado";
    }
}
#include <iostream>
using namespace std;
using std::cout;
using std::cin;
int bi(int bot,int top,int num,int vet[]){
    int mid=(top+bot)/2;
    if(bot>top){
        return -1;
    }
    if(vet[mid]==num){
        return mid;
    }
    else if(vet[mid]>num){
       return bi(bot,mid-1,num,vet);
    }
    else{ 
         return bi(mid+1,top,num,vet);
    }
}

void ordenar(int vet[],int tam){
    int aux=0;
    for(int i=0;i<tam;i++){
        for (int f=i+1;f<tam;f++){
            if(vet[i]>vet[f]){
                aux=vet[i];
                vet[i]=vet[f];
                vet[f]=aux;
            }

        }
    }

}
int main(){
int vet[4]={0,4,2,6};
int res;
ordenar(vet,sizeof(vet)/sizeof(vet[0]));
res=bi(vet[0],vet[3],4,vet);

if(res==(-1)){
    cout<<"Numero nao encontrado";
}
else{
    cout << "Numero encontrado na posicao " << res+1;
}
}
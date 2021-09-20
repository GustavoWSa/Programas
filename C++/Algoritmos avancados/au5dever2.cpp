#include <iostream>
using namespace std;
int main(){
    int n=5;    
    int vet[n]={1,3,2,0,6};
    int aux=0;
       //Bubble sort
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(vet[j]>vet[j+1]){
            aux = vet[j];                                   
            vet[j]= vet[j+1];                               //Complexidade n2
            vet[j+1]=aux;
            }
        }
    }
          
            //Selection Sort
    for(int i=0;i<n-1;i++){
       for(int j=i;j<n;j++){
           if(vet[i]>vet[j]){
               aux=vet[i];
              vet[i]=vet[j];                              //Complexidade n2
               vet[j]=aux;
           }
       }
   }
   for(int i=0;i<n;i++){
       cout << vet[i];
   }     
}
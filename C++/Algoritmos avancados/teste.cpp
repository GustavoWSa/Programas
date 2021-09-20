#include <iostream>
using namespace std;
void imprimir (int n){
       if(n==0){
           cout << n;
       }
       else{
           imprimir(n-1);
           cout << n;
       }
   }
int main(){
    /*int *v;
    int tamanho_vetor = 2;
    v= (int *) malloc (tamanho_vetor * sizeof(int));
    cout << &v[3] <<endl;
    tamanho_vetor=3;
    v= (int *) malloc (tamanho_vetor * sizeof(int));
    cout << &v[3];
    */
   int n=100;
   imprimir(n);
}
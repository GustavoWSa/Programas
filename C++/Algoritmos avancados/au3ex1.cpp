#include <iostream>
using namespace std;
int main(){
    int a[3]={0,3,1};
    int menor,maior;
    menor=a[0];
    maior=a[0];
    for(int i=0;i<3;i++){
        if(a[i]>maior){
            maior=a[i];
        }
        if(a[i]<menor){
            menor=a[i];
        }
    }
    cout<< "O maior numero é " << maior << " e o menor é "<< menor;
}
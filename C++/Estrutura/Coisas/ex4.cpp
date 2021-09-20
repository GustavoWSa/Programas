#include <iostream>
using namespace std;
int main(){
	int vet[5];
	int vet2[5];
	for(int i=5;i>0;i--){
		vet[i-1]=i;
		cout<< vet[i-1];
		vet2[i-1]=vet[i-1];
		cout<<vet2[i-1];
		
	}
}

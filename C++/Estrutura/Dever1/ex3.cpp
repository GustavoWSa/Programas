#include <iostream>
using namespace std;
int main(){
	int tam=5;
	int vet[tam];
	for(int i=5;i>0;i--){
		vet[i-1]=i;
		cout<< vet[i-1];
	}
}

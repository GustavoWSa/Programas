#include <iostream>
using namespace std;
int main(){
	int vet[5];
	for(int i=5;i>0;i--){
		vet[i-1]=i;
		cout<< vet[i-1];
	}
}

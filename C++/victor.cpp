#include<iostream>
using namespace std;
int main(){
	int vet[3], i, aux;
	
	for (i=0; i<3; i++){
		vet[i]=0;
	}
	for (i=0; i<3; i++){
		cout << " numero pf "; cin >> vet[i];
		
	}
	for (i=0; i<3-1; i++){
	 	for (int j=i+1; j<3; j++){
	 		if (i>j){
	 			aux=vet[i];
	 			vet[i]=vet[j];
	 			vet[j]= aux;
			 }
		 }
	 }
	for (i=0; i<3; i++){
		cout << vet[i]<<"-";
	}
	
}

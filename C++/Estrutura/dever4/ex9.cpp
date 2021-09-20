/*
9.	EXERCÍCIO 09 – De acordo o código em C++ int vet[10];  int *iptr;  iptr = vet;  iptr++; Descreva o que faz cada opção abaixo:
iptr++		
*( iptr++)	
*(++iptr)	
*( iptr+5)  	 
(*iptr)+=4	
*/
#include <iostream>
using namespace std;
int main(){
    int vet[10];  int *iptr;  iptr = vet;  iptr++;
    cout << *iptr <<endl;
    cout << &vet;
}
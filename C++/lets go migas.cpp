#include <iostream>
using namespace std;
int main(){
	int tam=3,vetor[tam],aux,i;
	for(i=0;i<3;i++)
	{
	cout<<"Digite o" << i+1 << "valor";
	cin>> vetor[i];}
	for(i=0;i<tam-1;i++)
	 	for(int j=i+1;j<tam;j++)
	 		if(vetor[i]>vetor[j])
	 		{aux=vetor[i];
	 		vetor[i]=vetor[j];
	 		vetor[j]=aux;
			 }
	for(i=0;i<tam;i++)
	 cout<< vetor[i];}		 

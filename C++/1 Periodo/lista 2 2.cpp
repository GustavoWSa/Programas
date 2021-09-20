#include <iostream>
using namespace std;
const int tam=3;
int main(){
	int vetor[tam],aux,i;
	for(int d=0;d<3;d++)
	{cout << "Digite o " << d+1 << " valor";
	cin>>vetor[d];system("pause");
	}
	for(i=0;i<tam-1;i++)
	 	for (int j=i+1;j<tam;j++)
	   		if(vetor[i]>vetor[j]){
	   			aux= vetor [i];
	   			vetor[i]=vetor[j];
	   			vetor[j]=aux
			   ;}
	for(i=0;i<tam;i++)
	 cout << vetor[i];		   
}

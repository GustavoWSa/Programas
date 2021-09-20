#include <iostream>
using namespace std;
int total=3;
int main(){
int vet[total],aux,i;
for (i=0; i<total; i++){
	vet[i]=0;
}
for(i=0;i<total;i++)
	{cout << "digite numero";
	cin>> vet[i];
	}
for(i=0;i<total-1;i++)
 	for(int j=i+1;j<total;j++)
 		{if (vet[i]>vet[j])
 			{aux=vet[i];
 			vet[i]=vet[j];
 			vet[j]=vet[aux];
			 }
		 }
for(i=0;i<total;i++)
 {cout << vet[i] << endl;
		  }	 	
}

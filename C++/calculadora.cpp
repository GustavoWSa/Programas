#include <iostream>
using namespace std;
int main (){
	float a,b,c,e=1;
	while(e!=5)
	{
	cout<< "Escolha o operador:" << endl;
	cout<< "1-soma" << endl;
	cout<< "2-subtracao" << endl;
	cout<< "3-divisao" << endl;
	cout<< "4-multiplicacao" << endl;
	cout<< "Ou 5 para sair" << endl;
	cin>>e;
			if(e==1)
			{cout<< "Digite o primeiro numero" << endl;
			cin>>a;
			cout<< "Digite o segundo numero" << endl;
			cin>>b;
			cout <<"o resultado e: " <<a+b<<endl;
			
			}
			if(e==2)
			{cout<< "Digite o primeiro numero" << endl;
			cin>>a;
			cout<< "Digite o segundo numero" << endl;
			cin>>b;
			cout<< "o resultado e: "<<a-b<<endl;
			}
			if(e==3)
			{cout<< "Digite o primeiro numero" << endl;
			cin>>a;
			cout<< "Digite o segundo numero" << endl;
			cin>>b;
			cout<<"o resultado e: "<<a/b<<endl;
			}
			if(e==4)
			{cout<< "Digite o primeiro numero" << endl;
			cin>>a;
			cout<< "Digite o segundo numero" << endl;
			cin>>b;
			cout<<"o resultado e: "<<a*b<<endl;
			}
			cout<< endl;
}}

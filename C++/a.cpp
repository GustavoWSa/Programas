#include <iostream>
using namespace std;
int main (){
	float i,h=0,p,h2=0,h3=0,m,mais,rep1,menor,dez20,l=0;
	for (l=0;l<5;l++)
		{cout << "Digite a idade da " <<l+1 <<"a pessoa";
		cin>> i;cout << "Digite a altura da "<< l+1 <<"a pessoa"; cin >> h;
		cout << "Digite o peso da " << l+1 <<"a pessoa";cin >> p;
		if(i>50)
			{mais++;};
		
					}
		if(i>=10 and i<=20)
			{dez20++;h2=h;h3=h2+h;}	
		
		if (p<40)
			{menor++;}	
		cout << "Pessoas com +50" << mais;
		cout << "Media de pessoas entre 10 e 20" << h3/dez20;
		cout << "% de pessoas com menos de 40kg" << menor/rep1;	
			}	


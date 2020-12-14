#include <iostream>
using namespace std;
int main(){
	float i=0;
	char n[61];
	cout <<"Digite seu nome:"; 
	cin >> n;
	cout <<"Digite sua idade:"; 
	cin >> i;
	while (i!=65)
	 {cout <<"Digite seu nome:"; cin >> n;
	 cout <<"Digite sua idade:"; cin >> i;
	 }
	cout << "Comando terminado porque foi encontrado alguem com 65 anos"<<endl;
	cout << "Seu nome e " <<n<< " e sua idade e 65 anos";
}

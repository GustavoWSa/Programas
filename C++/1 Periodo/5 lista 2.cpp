#include <iostream>
using namespace std;
int main(){
	float ab,ac,bc;
	cout << "Digite o valor da distancia de a e b "; cin >> ab;
	cout << "Digite o valor da distancia de a e c "; cin >> ac;
	cout << "Digite o valor da distancia de b e c "; cin >> bc;
	if (ab+bc>ac+bc){
	cout << "ac >> cb";	
	}
	else
	 cout << "ab >> bc";
}

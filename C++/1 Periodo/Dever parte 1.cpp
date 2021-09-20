#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	float a,b,c,m;
	char Nome[100];
	printf("Digite o nome do aluno:"); 
	scanf ("%s", Nome);
	printf("O nome do aluno: %s", Nome);
	cout << endl;
	cout << endl;
	cout << "Insira a primeira nota: ";
	cin >> a;
	
	cout << "Insira a segunda nota: ";
	cin >> b;
	
	cout << "Insira a terceira nota: ";
	cin >> c;
	cout << endl;
	m=(a+b+c)/3;
	cout << "A media e:" << m << endl;
	return 0;
}

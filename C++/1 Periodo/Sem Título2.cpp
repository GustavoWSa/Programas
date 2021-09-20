#include <iostream>
using namespace std;
int main(){
	float a,b,c,d;
	cout << "Digite o 1 numero"; cin >> a;
	cout << "Digite o 2 numero"; cin>> b;
	cout << "Digite o 3 numero"; cin>> c;
	cout << "Digite o 4 numero"; cin>> d;
	if(d>a and d>b and d>c)
	 cout << a+b+c;
	if (a>d and a>b and a>c)
	 cout << b+c+d;
	if (b>a and b>d and b>c)
	 cout << a+c+d;
	if (c>a and c>b and c>d)  
	 cout << a+b+d;
}


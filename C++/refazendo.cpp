#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout << "Digite o primeiro numero ";
	cin >> a;
	cout << "Digite o segundo numero ";
	cin >> b;
	if (a>b){
		while(a>b){
			cout << b+1;
			b++;
		}	 
	}
	else{
	
	 while(b>a+1){
			cout << a+1;
			a++;
		}}	 
	 
}

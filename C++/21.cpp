#include <iostream>
using namespace std;
int main (){
	float n,i,it,it2;
	cout << "digite um numero"; cin >> n;
	i=n-1;
	it=n*i;
	while (i!=2) 
	{it=it *(i-1);
	i--;
	}
	cout << "o fatorial de" << n << "e " << it;
	
}

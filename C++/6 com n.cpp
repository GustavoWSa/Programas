#include <iostream>
using namespace std;
int main (){
	float v=0,n=0,p=0,i=1,total=0,i2=1,p2,total2,v1;
	
	cout << "Digite o numero de compras a vista"; cin >> v;
	cout << "Digite o numero de compras a prazo"; cin >> p;
	while (i<v+1)
		{
		cout << "Digite o valor da " <<i++ << "a compra a vista"; cin >>v1;
		total = v1 + total;}
	while (i2<p+1)
	 {cout <<"Digite o valor da " << i2++ <<"a compra a prazo"; cin >> p2;
	  total2= p2+ total2;
		 }	
	cout << "O valor total das compras a vista e:" << total<<endl ;
	cout << "O valor total das compras a prazo e:" << total2<<endl;
	n=total + total2;
	cout << "O valor total e" << n;
}

#include <iostream>
using namespace std;
int main(){
	float n1,n2,n3,n4;
	cout << "Digite o 1 numero";
	cin >> n1;
	cout << "2 numero";
	cin >> n2;
	cout << "3 numero";
	cin >> n3;
	cout << "4 numero";
	cin >> n4;
	if (n1>n2 and n1>n3 and n1>n4)
	 cout << n2 + n3 + n4;
	if (n2>n1 and n2>n3 and n2>n4)
	 cout << n1 + n3 + n4;
	if (n3>n2 and n3>n1 and n3>n4)
	 cout << n1 + n2 + n4;
	if (n4>n2 and n4>n3 and n4>n1)
	 cout << n1 + n3 + n2;
}

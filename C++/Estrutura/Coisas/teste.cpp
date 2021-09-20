#include <iostream>
using namespace std;
using namespace std;

int funcao (int *valor1, int *valor2) {

*valor1 = 50;

*valor2 = 200;

return 100;

}

int main() {
string c;
int *a, b; a = &b; b = 100;

funcao(a, &b);
cout << c.empty();
cout<< *a+4 <<endl;
cout << a << endl;
cout << a+4 <<endl;
cout << *a++ <<endl;
cout << *a++ <<endl;
cout << *a ;

cout <<" e "<< b;

}
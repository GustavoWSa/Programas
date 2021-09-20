#include <iostream>
using namespace std;
int main(){
    int *p, x=4;
    p=&x;
    cout << x << endl;
    cout << &x<<endl;
    *p=20;
    cout<< p << endl;
    cout << &p <<endl;
    cout << x << endl;
    cout << *p <<endl;
}
#include <iostream>
#include <math.h>
using namespace std;
string d="Gus";
void nome(){
    int d = 2;
    cout << d << endl << pow(d, 2) << endl;
    nome();
}
int main(){
    cout<< d << endl;
    nome();
    cout<< d;
}
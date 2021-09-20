#include<iostream>
using namespace std;
int funcao (int *a, int *b) {
    *a = 50;
    *b = 500;
    return 0;
}
int main() {
    int *a, b;
    a = &b;
    b = 30;
    *a = 10;
    b = 100;
    funcao(a, a);
    cout <<"\n\t " << *a << " e " << b;
}
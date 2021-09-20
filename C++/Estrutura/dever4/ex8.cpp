/*
8.	EXERCÍCIO 08 – Dado o array int A[10], Crie dois ponteiros que apontem sucessivamente para as duas primeiras posições do array A.
*/
#include <iostream>
using namespace std;
int main(){
    int a[10], i=0;
    int *pont,*pont1;
    for(int i=0;i<10;i++)
        a[i]=i;
    pont=&a[0];
    pont1=&a[1];
    cout << *pont;
    cout << *pont1;    
}
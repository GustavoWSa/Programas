#include <iostream>
using namespace std;
int main(){
int *pti; 
int i = 10; 
pti = &i;
*pti=20;
cout << *pti;
cout << i;
}
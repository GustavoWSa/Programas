#include<iostream>
#include <stdlib.h>  		
using namespace std;
void teste(int *a){
    *a=3;
}
int main(){
    int b=2,*pont;
    pont=&b;
    teste(pont);
    cout << b;
}
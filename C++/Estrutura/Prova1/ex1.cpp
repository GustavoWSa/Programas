
#include<iostream> 		
using namespace std; 		
int Calculo(int n);  			
int main() { 				
cout << Calculo(5); 		
return 0;       	
}			
int Calculo(int n) {
int x = n;			
for (int i=0; i<x; i++)   	
n+=2;
return n;
}
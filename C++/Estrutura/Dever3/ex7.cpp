#include <iostream>
#include <stdio.h>
#include <conio.h>

int f(int n) {
if (n>10) return 3+f(n-2);
if (n<10) return 1;
return 0;
}
int m(int n) {
int i;
for(i=0; i<3; i++)
n+=f(15);
return n;
}

int main() {
//cout<<m(1500); //´SO COM A DECLARAÇÃO DA BIBLIOTECA IOSTREAM.H // C++
printf("%d",m(1500)); getch();

return 0;} //OPCIONAL
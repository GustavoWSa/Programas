#include <iostream>
using namespace std;
int main(){
 char nomes[3][128];
float av1[3],av2[3],media[3];
for(int i=0;i<3;i++)
 {cout<<"Digite o nome do " << i+1 << " aluno: ";
 cin>>nomes[i];
cout<<"Digite o valor da av1: ";
cin>>av1[i];
cout<<"Nota da av2: ";
cin>>av2[i];
media[i]=((av1[i]+av2[i])/2;
 }
 for(int a=0;a<3;a++)
 {
 cout << "Nome: "<<nomes[a]<<endl;
 cout<< "Av1: " <<av1[a]<<endl;
 cout<< "Av2: " <<av2[a]<<endl;
 cout<< "Media: "<<media[a]<<endl; }}

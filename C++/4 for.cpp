#include <iostream>
using namespace std;
int main(){
	int idade,rep=0,maior=0,inferior=0;
	float altura,peso,media=0,a=0;
	for(rep=0;rep<11;rep++)
	 {cout<< "Digite sua idade ";
	 cin>> idade;
	 cout<< "Digite sua altura ";
	 cin>> altura;
	 cout<< "Digite seu peso ";
	 cin>> peso;
	 if(idade>50)
	  maior++;
	 if(idade<=20 and idade>10)
	  {a++;
	  media=media+altura;
	 if (peso<40)
	   inferior++;
	 }
	cout<< "Pessoas com mais de 50 anos: " << maior;
	cout << "A media da altura entre 10 e 20 anos: " << media/a;
	cout << "A % de pessoas com - de 40kg" << inferior/10;
}}

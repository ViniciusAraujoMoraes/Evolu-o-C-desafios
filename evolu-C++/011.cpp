/*Faça um Programa que peça 2 números inteiros e um número real.
Calcule e mostre:
    o produto do dobro do primeiro com metade do segundo.
    a soma do triplo do primeiro com o terceiro.
    o terceiro elevado ao cubo.*/
#include<iostream>
using namespace std;
main(){
	int a, b;
	float c, d, e, f;
	cout <<"Digite um numero Inteiro: ";
	cin>>a;
	cout<<"Digite um outro numero Inteiro: ";
	cin>>b;
	cout<<"Agora digite um numero Real: ";
	cin>>c;
	d = (a*2)+(b/2);
	e = (3*a)+c;
	f = (c*c*c) ;
	cout<<"O produto do dobro "<<a<<" com metade do "<<b<<"eh igual a "<<d<<"\n";
	cout<<"A soma do triplo de "<<a<<" com o "<<c<<"eh "<<e<<"\n";
	cout<<"E "<<c<<" elevado ao cubo eh igual a "<<f<<"\n";
}

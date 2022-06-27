/*Faça um Programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.*/
#include <iostream>
using namespace std;
main(){
	float l2, l, a;
	cout<<"Digite o valor em metros de um dos lados do quadrado: ";
	cin>>l;
	a=l*l;
	l2=2*a;
	cout<<"A medida de "<<l<<" metros resulta na area de "<<a<<" metros quadrados.\n";
	cout<<"Que por sua vez tem o dobro do raio calculado até "	<< l2;
}

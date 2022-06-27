/*Faça um Programa que converta metros para centímetros.*/
#include<iostream>
using namespace std;
main(){
	float M, CM;
	cout<<"Digite o valor em metros que voce deseja converter: ";
	cin>>M;
	CM=M*1000;
	cout<<"O valor de "<<M<<" metros, representa "<<CM<<" centimetros";	
}

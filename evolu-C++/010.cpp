/*Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.*/
#include<iostream>
using namespace std;
main(){
	float c, f;
	cout<<"Digite o valor de graus em Celsius que deseja trasnformar em graus Farenheit: ";
	cin>>c;
	f= (c*9 / 5) + 32;
	cout<<"A temperatura que equivale a "<<c<< " graus Celsius é igual a "<<f<<" graus Farenheit";
}

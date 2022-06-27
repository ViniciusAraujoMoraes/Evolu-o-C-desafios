/*Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre
a temperatura em graus Celsius. C = (5 * (F-32) / 9).*/
#include<iostream>
using namespace std;
main(){
	float c, f;
	cout<<"Digite o valor de graus em Farenheit que deseja trasnformar em graus Celsius: ";
	cin>>f;
	c=(5*(f-32)/9);
	cout<<"A temperatura que equivale a "<<f<< " graus Farenheit é igual a "<<c<<" graus Celsius";
}

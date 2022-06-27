/*Tendo como dado de entrada a altura (h) de uma pessoa,
construa um algoritmo que calcule seu peso ideal,
utilizando as seguintes fórmulas:
    Para homens: (72.7*h) - 58
    Para mulheres: (62.1*h) - 44.7*/
#include<iostream>
using namespace std;
main(){
	float altura, PI;
	int G;
	cout<<"Digite sua altura em metros: ";
	cin>>altura;
	cout<<"Digite 1 se voce for homem, ou 2 de voce for mulher: ";
	cin>>G;
	if (G = 1){
		PI=(72.7*altura) - 58;
		cout<<"Seu peso ideal e de "<<PI<<" Kg.\n";
		if(G = 2){
			(62.1*altura) - 44.7;
			cout<<"Seu peso ideal e de "<<PI<<" Kg.\n";
		}else
		cout<<"Digite um Genero valido. ";
	}else
	cout<<"Digite um Genero valido. ";
}

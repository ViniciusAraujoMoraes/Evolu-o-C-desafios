/*Faça um Programa que peça as 4 notas bimestrais e mostre a média.*/
#include<iostream>
using namespace std;
main(){
	float n1, n2, n3 ,n4, M;
	cout<<"Digite sua nota no primeiro Bimestre: ";
	cin>>n1;
	cout<<"Digite sua nota no segundo Bimestre: ";
	cin>>n2;
	cout<<"Digite sua nota no terceiro Bimestre: ";
	cin>>n3;
	cout<<"Digite sua nota no quarto Bimestre: ";
	cin>>n4;
	M=(n1+n2+n3+n4)/4;
	cout<<"Sua media Anual é "<<M;
}

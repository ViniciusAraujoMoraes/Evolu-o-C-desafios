/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.*/
#include<iostream>
using namespace std;
main(){
	float salario, hora, dias, total;
	cout<<"Qual seu salario por hora: ";
	cin>>salario;
	cout<<"quantas horas por dia voce trabalha: ";
	cin>>hora;
	if (hora<=16){
		cout<<"quantos dias por mes voce trabalha: ";
		cin>>dias;
		if (dias<=26){
			total=(dias*hora*salario);
			cout<<"Seu salario é de "<<total;
		}else
		cout<<"Digite um valor valido de dias trabalhados em um mes (maximo permitido por lei, 26 dias)";
	}else
	cout<<"Digite um valor valido para horas trabalhadas por dia (maximo permitido por lei, 16h)";
}

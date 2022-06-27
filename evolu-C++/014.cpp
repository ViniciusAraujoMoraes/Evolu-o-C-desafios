/*João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar
o rendimento diário de seu trabalho.
Toda vez que ele traz um peso de peixes maior que o estabelecido pelo
regulamento de pesca do estado de São Paulo (50 quilos) deve pagar uma multa
de R$ 4,00 por quilo excedente.
João precisa que você faça um programa que leia a variável peso
(peso de peixes) e calcule o excesso.
Gravar na variável excesso a quantidade de quilos além do limite
e na variável multa o valor da multa que João deverá pagar.
Imprima os dados do programa com as mensagens adequadas.*/
#include<iostream>
using namespace std;
main(){
	float peso, extra, multa;
	cout<<"Digite o valor total de peixer pescador em Kg: ";
	cin>>peso;
	if (peso>=50){
		extra = peso - 50;
		multa = extra * 4;
		cout<<"O valor da Multa a ser paga é igual a "<<multa<<" reais.";
	}else 
	cout<<"Não havera cobranca de multa.";
}

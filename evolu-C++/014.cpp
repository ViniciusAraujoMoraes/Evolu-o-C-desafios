/*Jo�o Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar
o rendimento di�rio de seu trabalho.
Toda vez que ele traz um peso de peixes maior que o estabelecido pelo
regulamento de pesca do estado de S�o Paulo (50 quilos) deve pagar uma multa
de R$ 4,00 por quilo excedente.
Jo�o precisa que voc� fa�a um programa que leia a vari�vel peso
(peso de peixes) e calcule o excesso.
Gravar na vari�vel excesso a quantidade de quilos al�m do limite
e na vari�vel multa o valor da multa que Jo�o dever� pagar.
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
		cout<<"O valor da Multa a ser paga � igual a "<<multa<<" reais.";
	}else 
	cout<<"N�o havera cobranca de multa.";
}

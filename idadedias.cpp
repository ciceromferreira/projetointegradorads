/*Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de vida ela possui. Considere sempre anos completos, 
e que um ano possui 365 dias. Ex: uma pessoa com 19 anos possui 6935 dias de vida; veja um exemplo de saída: MARIA, VOCÊ JÁ VIVEU 6935 DIAS 5.*/

//bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

//variáveis
char nome[30];
int idade,diasdevida;

//start
main(){
	setlocale(LC_ALL, "portuguese");
	system("csl"); //limpar tela (clear screen)
	
	printf("\n Digite o nome da pessoa: ");
	scanf("%s",&nome);
	printf("\n Digita a idade da pessoa: ");
	scanf("%i",&idade);
	
	diasdevida = idade * 365;
		
	printf("\n %s, voce ja viveu %i",nome,diasdevida);
	
}
	
	
	
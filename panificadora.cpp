/*A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia. Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. 
Ao final do dia, o dono quer saber quanto arrecadou com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de poupança (10% do total arrecadado).
Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo para ler as quantidades de pães e de
broas, e depois calcular os dados solicitados.*/

//bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

//variáveis
int paozinho,broas;
float custo_paozinho,custo_broa;
float total_vendas,poupanca;

//start
main(){
	setlocale(LC_ALL, "portuguese");
	system("csl"); //limpar tela (clear screen)
	
	printf("\n Digite a quantidade de paozinhos vendidos: ");
	scanf("%i",&paozinho);
	printf("\n Digite a quantidade de broas vendidas: ");
	scanf("%i",&broas);
	
	total_vendas = (paozinho * 0.12) + (broas * 1.50);
	poupanca = total_vendas * 0.10;
	
	printf("\n O total de venda de paozinhos e broas e: %.2f",total_vendas);
	printf("\n Devo guardar na poupanca o valor de: %.2f",poupanca);
	
}
	
	
	
/*Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso se a pessoa emagrecer 20% sobre o peso digitado.*/

//bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

//variáveis
char nomepessoa [30];
float peso;
float peso_novo;
char op;


main(){
	setlocale(LC_ALL,"portuguese");
	system("cls");
	printf("\n Digite o nome da Pessoa: ");
	scanf("%s",&nomepessoa);
	printf("\n Digite o peso da Pessoa: ");
	scanf("%f",&peso);
	
	printf("\n Selecione a opção conforme seu progresso nutricional");
	printf("\n a) Engordei 15%% do meu peso inicial");
	printf("\n b) Emagreci 20%% do meu peso inicial");
	printf("\n Digite a opção:");
	op=getche(); //leitura de teclado char com eco - mostra na tela
	op=toupper(op); //joga o char para maiúsculo
	if(op =='A'){
		peso = peso * 1.15;
		printf("\n Meu Peso Inicial: %.2f e como engordei 15%% fica Peso Novo: %.2f",peso,peso_novo);
	}else
	if(op == 'B');{
	peso_novo = peso - (peso * 0.20);
	printf("\n Meu Peso Inicial: %.2f e como emagreci 20%% fica Peso Novo: %.2f",peso,peso_novo);
	}
printf("\n\n");
system("pause");
}
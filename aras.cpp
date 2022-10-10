/*Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os cavalos comprados para um haras.*/

//bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

//variáveis
int num_cavalos;
int totalferraduras;

//start
main(){
	setlocale(LC_ALL,"portuguese");
	system("csl");
	
	printf("\n Digite a quantidade de cavalos dos Aras: ");
	scanf("%i",&num_cavalos);
	
	totalferraduras = num_cavalos * 4;
	printf("\n O aras tem um total de %i cavalos",num_cavalos);
	printf("\n A quantidade de ferraduras para equipar os cavalos é %i ",totalferraduras);
	
}
/*Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o preço do litro da gasolina e o valor do pagamento, 
e exibir quantos litros ele conseguiu colocar no tanque.*/

//bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

//variáveis
float plitrogas,valor,litros;

//start
main(){
	setlocale(LC_ALL, "portuguese");
	system("csl"); //limpar tela (clear screen)
	
	printf("\n O preco da gasolina e: ");
	scanf("%f",&plitrogas);
	printf("\n O valor do abastecimento e de: ");
	scanf("%f",&valor);
		
	litros = valor / plitrogas;
	
	printf("\n A quantidade de litros abastecidos e de: %.2f",litros);

}
/*O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. 
Escreva um algoritmo que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. 
Assume que a balança já desconte o peso do prato.*/

//bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

//variáveis
float kgprefeicao,peso_prato,valor_pagar;

//start
main(){
	setlocale(LC_ALL, "portuguese");
	system("csl"); //limpar tela (clear screen)
	
	printf("\n O peso total do seu prato e: ");
	scanf("%f",&peso_prato);
		
	valor_pagar = peso_prato * 12;
	
	printf("\n O valor do seu prato ficou em: %.2f",valor_pagar);

}
/*Construa um algoritmo codificado na linguagem C que leia 'n' notas e calcule a média, sendo que a leitura das notas será utilizado laço de repetição,
conforme o valor de 'n' escolhido pelo usuário. Entrar com o nome do aluno e as respectivas notas.*/

//bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

//variáveis
int qtidade_notas;
float nota,media;
char nome[30];

//start
main(){
	setlocale(LC_ALL,"portuguese");
	system("csl");
	fflush(stdin);
	
	printf("\n Qual o nome do aluno: ");
	scanf("%s",&nome);
	printf("\n Quantas notas este aluno tem: ");
	scanf("%i",&qtidade_notas);
	media=0;
	
	for(int i=1;i<=qtidade_notas;i++){ //laço que identifica a quantidade de notas (i++ adiciona 1 item a mais por vez).
		printf("\n Digite a Nota[%i]: ",i);
		scanf("%f",&nota);
		media = media + nota;}
		media = media / qtidade_notas;
	
	printf("\n O aluno %s ",nome);
	printf("\n Com %i notas",qtidade_notas);
	printf("\n Possui a Média: %.2f ",media);
	printf("\n \n");
	
}
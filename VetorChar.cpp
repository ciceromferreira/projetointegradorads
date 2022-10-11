/*Construa um algoritom que leia um vetor com 10 caracteres
e na sequência faça o usuário digitar um caracter qualquer
e o algoritmo deve localizar este e mostrar na tela com
seu respectivo localização. Caso não tenha o caracter
apresentar uma mensagem que não existe.*/
//Algoritmo média

#include<conio.h> //inclusão da biblioteca conio - comandos I/O - Input/Output - Entrada e saída
#include<stdio.h> //inclusão da biblioteca stdio - comandos de tela I/O
#include<iostream>//inclusão da biblioteca mais completa
#include<locale.h>
#include<stdlib.h>

char Vetor[10]; //declarando a variável Vetor tipo caracter 
char caracter;
char opc;


int main(){ //comando da estrutura - Escopo - principal do programa
setlocale (LC_ALL,"Portuguese");

do{

printf("\n Entrada de valores no Vetor de caracteres");
printf("\n \n");
for(int i=0; i<10;i++){
	printf("\n Digite o valor do Vetor[%i]: ",i);
	scanf("%c",&Vetor[i]);//preechendo o vetor
	fflush(stdin);
	Vetor[i]=toupper(Vetor[i]);	
	}//jogando os caracteres para maiúsculo
	for(int i=0; i<10;i++){
	printf("\n Vetor[%i] = %c ",i,Vetor[i]);}
	
    do{
    printf("\n \n");
    printf("\n Digite um caracter qualquer: ");
	scanf("%c",&caracter);
	caracter=toupper(caracter);
	fflush(stdin);
	printf("\n Localizar o caracter no vetor......");
	printf("\n \n");
	int encontrou=0;
    for(int i=0; i<10;i++){
	     if(caracter == Vetor[i]){
	     	printf("\n Vetor[%i]: %c ",i,Vetor[i]);
	     	encontrou=1;
	    }}
	 if(encontrou == 0){
	    printf("\n o Caracter %c n�o existe no Vetor",caracter);
	 }
	printf("\n Desejas nova pesquisa <S> ou <N> ");
    scanf("%c",&opc);
    opc=toupper(opc);
	fflush(stdin); //opc=getche();
	
	}while(opc != 'N');
	printf("\n \n");
    printf("\n Novos valores de caracteres para o Vetor <S> ou <N> ");
    scanf("%c",&opc);	
    opc=toupper(opc);
    fflush(stdin);
    }while(opc != 'N');
}



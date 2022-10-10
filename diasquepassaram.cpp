/*Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do
ano. Esqueça a questão dos anos bissextos e considere sempre que um mês possui 30 dias.*/

//bibliotecas
#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>

//variáveis
int dia,mes,dias_passados;

//start
main(){
    setlocale(LC_ALL,"portuguese");
    system("csl");

printf("\n Digite o dia: ");
scanf("%i",dia);

printf("\n Digite o mes: ");
scanf("%i",mes);

dias_passados = ((mes * 30) - 30) + dia;

printf("\n Se passaram %i dias desde o início do ano.");
}
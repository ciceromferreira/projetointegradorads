/*Construa um algoritmo que calcule o sal�rio de um colaborador pelo valor da hora/trabalho e quantidade de horas trabalhadas. 
Lembrar que o colaborador possui um sal�rio bruto e l�quido.
Salario Bruto+ hora/trabalho 8 horas trabalhadas
Sal�rio L�quido= Sal�rio Bruto - INSS - IR
INSS:
Faixa de salario											Al�quota Aplicada
At� um sal�rio-m�nimo (R$ 1.212,00 em 2022)					7,5%
De R$ 1.212,01 a R$ 2.427,35								9%
De R$ 2.427,36 a R$ 3.641,03								12%
De R$ 3.641,04 a R$ 7.087,22 (Teto do INSS em 2022)			14%

IR:
Base de c�lculo												Al�quota					Dedu��o
De R$ 0,00 at� R$ 1.903,98									Isento						R$ 0,00
De R$ 1.903,99 at� R$ 2,427,35								7,50%						R$ 142,80
De R$ 2.826,66 at� R$ 3.751,05								15,00%						R$ 354,80
De R$ 3.751,06 at� R$ 4.664,68								22,50%						R$ 636,13
A partir de R$ 4.664,68										27,50%						R$ 869,36
*/

//Algoritmo Calcula Sal�rio
#include<conio.h> //inclus�o da biblioteca conio - comandos I/O - Input/Output - Entrada e sa�da
#include<stdio.h> //inclus�o da biblioteca stdio - comandos de tela I/O
#include<iostream> //inclus�o da biblioteca mais completa
#include<locale.h>

//decalara��o vari�veis
char Colaborador[30];
float Salario_Bruto,Salario_Liquido,INSS,IR_aliquota,IR_deducao,IR_base,IR;
float Valor_Hora;
float Quantidade_hora_trabalho;

//In�cio
main(){ //comando da estrutura principal do programa (escopo)
setlocale(LC_ALL,"portuguese"); //comando para corrigir os acentos (lembrar de incluir a biblioteca nas variaveis <locale.h>

printf("\n Digite o nome do colaborador: ");
scanf("%s",&Colaborador);

printf("\n Digite o valor da hora trabalho: ");
scanf("%f",&Valor_Hora);

printf("\n Digite a quantidade de horas trabalhadas no m�s: ");
scanf("%f",&Quantidade_hora_trabalho);

Salario_Bruto = Valor_Hora * Quantidade_hora_trabalho;
printf("/n O valor do Sal�rio Bruto �: %.2f ",Salario_Bruto);

if(Salario_Bruto <= 1212.00){
	INSS = Salario_Bruto * 0.075;
}

if((Salario_Bruto > 1212.00) && (Salario_Bruto <= 2427.35)){
	INSS = Salario_Bruto * 0.09;
}

if((Salario_Bruto > 2427.36) && (Salario_Bruto <= 3641.03)){
	INSS = Salario_Bruto * 0.12;
}

if((Salario_Bruto > 3641.04) && (Salario_Bruto <= 7087.22)){
	INSS = Salario_Bruto * 0.14;
}

if(Salario_Bruto > 7087.22){
	INSS = 7087.22 * 0.14;
}

IR_base = Salario_Bruto - INSS;

if(IR_base <= 1903,98){
	Salario_Liquido = IR_base;
}

if((IR_base >= 1903.99) && (IR_base <= 2826.65)){
	IR = (IR_base * 0.075) - 142.80;
	Salario_Liquido = IR_base - IR;
}


if((IR_base >= 2826.66) && (IR_base <= 3751,05)){
	IR = (IR_base * 0.15) - 354.80;
	Salario_Liquido = IR_base - IR;
}

if((IR_base >= 3751.06) && (IR_base <= 4664.68)){
	IR = (IR_base * 0.225) - 636.13;
	Salario_Liquido = IR_base - IR;
}

if(IR_base > 4664.69){
	IR = (IR_base * 0.275) - 869.36;
	Salario_Liquido = IR_base - IR;
}

printf("\n O colaborador: %s ",Colaborador);
printf("\n Com o Sal�rio Bruto de: %.2f",Salario_Bruto);
printf("\n Com o desconto do INSS: %.2f",INSS);
printf("\n Com o desconto do IR: %.2f",IR_base);
printf("\n Com o Sal�rio L�quido de: %.2f",Salario_Liquido);

printf("\n\n");
system("pause"); //aguarda acionamento da tecla enter para continuar
}//fecha escopo do programa - algoritmo


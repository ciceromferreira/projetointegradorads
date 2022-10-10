/*Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média
ponderada (as notas tem pesos respectivos de 1, 2 e 3).*/

//biblioteca
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>

//variáveis
char aluno[30];
char disciplina[30];
float nota1,nota2,nota3;
float media_ponderada;

//start
main(){
    setlocale(LC_ALL,"portuguese");
    system("csl");
    fflush(stdin);

    printf("\n Digite o nome do Aluno: ");
    scanf("%s",&aluno);
    printf("\n Digite o nome da Disciplina: ");
    scanf("%s",&disciplina);
    printf("\n Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("\n Digite a segunda nota: ");
    scanf("%f",&nota2);
    printf("\n Digite a terceira nota: ");
    scanf("%f",&nota3);

    media_ponderada = ((nota1 * 1) + (nota2 * 2) + (nota3 * 3)) / (1 + 2 + 3);

    printf("\n A media do aluno %s na disciplina de %s foi de: %.2f",aluno,disciplina,media_ponderada);
    printf("\n \n");
}
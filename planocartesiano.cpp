/* 10. Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano. Cada ponto é um par ordenado (x,y).*/

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <math.h>

int x_1,x_2,y_1,y_2;
float distancia;

main(){
    setlocale(LC_ALL,"portuguese");
    system("cls");

printf("\n Digite o valor ponto 1: ");
scanf("%i",&x_1);
printf("\n Digite o valor ponto 2: ");
scanf("%i",&y_1);
printf("\n Digite o valor ponto 3: ");
scanf("%i",&x_2);
printf("\n Digite o valor ponto 4: ");
scanf("%i",&y_2);

distancia = sqrt(pow(x_2-x_1,2) + pow(y_2-y_1,2));

printf("\n A distancia entre os dois pontos no plano cartesiano e: %.2f",distancia);

}


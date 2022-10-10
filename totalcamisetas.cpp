/*Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo
vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usuário
forneça a quantidade de camisetas pequenas, médias e grandes referentes a uma venda, e a
máquina informe quanto será o valor arrecadado.*/

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>

int tamanho_p,tamanho_m,tamanho_g;
int venda;
int qtidade_camisetas;
float valor_arrecadado;

main(){
    setlocale(LC_ALL,"portuguese");
    system("cls");
    
    printf("\n Informe o numero da venda: ");
    scanf("%i",&venda);
    printf("\n Digite a quantidade de camisetas P: ");
    scanf("%i",&tamanho_p);
    printf("\n Digite a quantidade de camisetas M: ");
    scanf("%i",&tamanho_m);
    printf("\n Digite a quantidade de camisetas G: ");
    scanf("%i",&tamanho_g);

    valor_arrecadado = ((tamanho_p * 10) + (tamanho_m * 12) + (tamanho_g * 15));
    
    printf("\n O total de camisetas vendidas e de: %.2f",valor_arrecadado);
    printf("\n \n");
    system("pause");
}

/*15. Três amigos, Carlos, André e Felipe, decidiram rachar igualmente a conta de um bar. Faça um algoritmo para ler o valor total da conta e imprimir quanto cada um deve pagar, 
mas faça com que Carlos e André não paguem centavos. Ex: uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00 para André e R$35,53 para Felipe.*/

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>


char amigo1[30],amigo2[30],amigo3[30];
int valor_inteiro;
float valor_conta,valor_centavos,centavos;


main(){
    setlocale(LC_ALL,"portuguese");
    system("cls");

    printf ("\n Digite o nome do 1º amigo: ");
    scanf ("%s",&amigo1);
    printf ("\n Digite o nome do 2º amigo: ");
    scanf ("%s",&amigo2);
    printf ("\n Digite o nome do 3º amigo: ");
    scanf ("%s",&amigo3);
    printf ("\n Digite o valor total da conta do bar: ");
    scanf ("%f",&valor_conta);

    valor_inteiro = (valor_conta / 3);
    valor_centavos = (valor_conta / 3);
    centavos = (valor_centavos - valor_inteiro);
    centavos = (centavos * 2);
    valor_centavos = (valor_centavos + centavos);

    printf ("\n %s e %s irao pagar cada um R$ %i,00", amigo1,amigo2,valor_inteiro);
    printf ("\n %s ira pagar o valor de R$ %.2f",amigo3,valor_centavos);

}  

    

    




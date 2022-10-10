/*11. Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um
algoritmo para converter este tempo em anos, meses e dias. Assume que cada mês possui
sempre 30 dias.*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<locale.h>


int dias_sem_acidentes,dias,meses,anos,resto_meses,resto_dias;

main(){
    setlocale(LC_ALL,"portuguese");
    system("cls");

    printf("\n Digite a quantidade de dias sem acidentes na fabrica: ");
    scanf("%i",&dias_sem_acidentes);

    anos = (dias_sem_acidentes / 365);
    meses = (dias_sem_acidentes - (anos * 365)) / 30;
    dias = (dias_sem_acidentes - (anos * 365) - (meses * 30));
      

    printf("\n O tempo de trabalho sem acidentes na fabrica e de %i anos, %i meses e %i dias.",anos,meses,dias);

}
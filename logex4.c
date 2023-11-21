/*Faça um algoritmo que leia a idade de uma pessoa apenas
em dias e escreva a idade dessa pessoa em anos, meses e dias.
Obs.: Considere que todos anos e meses possuem 365 e 30 dias,
respectivamente.*/
#include <stdio.h>
int main()
{
    int idade, ano = 365, mes = 30, ida, idm, idd;

    printf("Digite sua idade em DIAS: ");
    scanf("%d", &idade);
    printf("\n");

    ida = idade / ano;
    idm = idade / mes;
    idd = ida - idm;

    printf("Sua idade e: %d anos, %d meses e %d dias.\n", ida, idm, idd);
}
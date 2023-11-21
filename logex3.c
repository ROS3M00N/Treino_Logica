/*Faça um algoritmo que leia a idade de uma pessoa em anos,
meses e dias e escreva a idade dessa pessoa apenas em dias.
Obs.: Considere que todos anos e meses possuem 365 e 30 dias,
respectivamente.*/
#include <stdio.h>
int main()
{
    int idd, idm, ida, con, ano = 365, mes = 30;

    printf("Escreva sua idade em anos: ");
    scanf("%d", &ida);
    printf("\n");
    printf("Escreva sua idade em meses: ");
    scanf("%d", &idm);
    printf("\n");
    printf("Escreva sua idade em dias: ");
    scanf("%d", &idd);
    printf("\n");

    con = ida * ano + idm * mes + idd;

    printf("Sua idade em DIAS e: %d\n", con);
}
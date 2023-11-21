/*Desenvolva um algoritmo que leia via teclado o diâmetro de
uma circunferência e que escreva na tela o perímetro e a área desta
circunferência.

As fórmulas estão descritas logo abaixo.
Considere que o valor de π é 3,14.*/

#include<stdio.h>
int main()
{
    float D, P, A;
    printf("Diametro: ");
    scanf("%f", &D);
    float R = D/2, Pi = 3.14;

    P = 2*Pi*R;
    A = Pi*(R*R);

    printf("Perimetro: %.1f.\nArea: %.1f.", P, A);
}
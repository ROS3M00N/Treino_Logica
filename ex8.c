/*Desenvolva um algoritmo que leia via teclado o diâmetro de
uma circunferência e que escreva na tela o perímetro e a área desta
circunferência.

As fórmulas estão descritas logo abaixo.
Considere que o valor de π é 3,14.*/

#include<stdio.h>
int main()
{
    float D, P, A, R = D/2;
    printf("Diametro: ");
    scanf("%f", &D);

    P = 2*3.14*R;
    A = 3.14*(R*R);

    printf("Perimetro: %.1f.\nArea: %.1f.", P, A);
}
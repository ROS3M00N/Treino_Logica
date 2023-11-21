/*
▪ Desenvolva um algoritmo que:
▪ Permita que o usuário digite 3 notas em forma de números reais;
▪ Calcule a média harmônica MH entre estas 3 notas;
▪ Escreva na tela para que o usuário possa ver estas médias.
*/
#include <stdio.h>
int main()
{
    float n1, n2, n3;
    float mh;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);

    printf("Media Harmonica: %.2f\n", mh = 3 / ((1 / n1) + (1 / n2) + (1 / n3)));
}
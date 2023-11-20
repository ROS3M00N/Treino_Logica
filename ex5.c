#include<stdio.h>

int main()
{
    int eleitores;
    float nulos, brancos, validos;

    printf("Eleitores no Municipio: ");
    scanf("%d", &eleitores);

    printf("Votos Brancos: ");
    scanf("%f", &brancos);

    printf("Votos Nulos: ");
    scanf("%f", &nulos);

    printf("Votos Validos: ");
    scanf("%f", &validos);

    float percentualN = (eleitores / nulos) * 0.01;
    float percentualB = (eleitores / brancos) * 0.01;
    float percentualV = (eleitores / validos) * 0.01;

    printf("Percentual de votos em Validos: %f\nPercentual de votos em Branco: %f\nPercentual de votos Nulos: %f", percentualV, percentualB, percentualN);



}
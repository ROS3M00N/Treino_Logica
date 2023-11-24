/*Crie um programa que peça ao usuário o número de lados de um
polígono e informe o nome do polígono (até 10 lados).*/
#include<stdio.h>
int main()
{
    int lados;
    int triangulo = 3, quadrialtero = 4, pentagono = 5;
    int hexagono = 6, heptagono = 7, octagono = 8, eneagono = 9, decagono = 10;

    printf("informe quantos lados o poligono possui: ");
    scanf("%d", &lados);

    //Testes de decisão
    if(lados == triangulo)
    {
        printf("Triangulo");
    }

    else if(lados == quadrialtero)
    {
        printf("Quadrialtero");
    }

    else if(lados == pentagono)
    {
        printf("Pentagono");
    }

    else if(lados == hexagono)
    {
        printf("Hexagono");
    }

    else if(lados == heptagono)
    {
        printf("Heptagono");
    }


    else if(lados == octagono)
    {
        printf("Octagono");
    }

    else if(lados == eneagono)
    {
        printf("Eneagono");
    }

    else if(lados == decagono)
    {
        printf("Decagono");
    }

    //Teste de falha
    if(lados > decagono || lados < triangulo)
    {
        printf("Erro: Valor digitado acima ou abaixo do esperado!\nCodigo: CE-00000.1");
        return 1;
    }
    return 0;
}
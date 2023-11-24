/*Faça um algoritmo que receba dois números e informe qual é
o menor deles.*/
#include<stdio.h>
int main()
{
    int n1, n2;

    //Coleta de Dados
    printf("Digite um numero: ");
    scanf("%d", &n1);

    printf("Digite um outro numero: ");
    scanf("%d", &n2);

    //Teste Principais
    if(n1 > n2)
    {
        printf("%d e maior que %d.", n1, n2);
    }

    else if(n2 > n1)
    {
        printf("%d e maior que %d.", n2, n1);
    }

    //Teste extra
    else
    {
        printf("%d e igual a %d.", n1, n2);
    }

    return 1;
}
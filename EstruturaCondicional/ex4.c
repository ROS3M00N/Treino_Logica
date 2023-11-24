/*Faça um algoritmo que receba três números e informe qual é
o menor deles.*/
#include<stdio.h>
int main()
{
    int n1, n2, n3, menor = 0;

    //Coleta de Dados
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    
    printf("Digite o terceiro numero: ");
    scanf("%d", &n3);

    //Testes principais
    if(n1 < n2 && n1 < n3){
        menor = n1;
    }
    else if(n2 < n1 && n2 < n3){
        menor = n2;
    }
    else if(n3 < n1 && n3 < n2){
        menor = n3;
    }

    //Monstrando os dados
    printf("Menor numero digitado: %d", menor);
    return 0;
}

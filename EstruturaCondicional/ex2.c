/*Crie um programa que peça o peso e a altura de uma pessoa, e que classifique a
pessoa de acordo com seu IMC.

O cálculo do IMC (Índice de Massa Corporal) é feito dividindo o peso (em kg) pela
altura ao quadrado (em metros). A fórmula matemática é a seguinte:
IMC = peso / altura2

O valor obtido no cálculo do IMC indica a faixa de peso da pessoa, podendo ser
classificado da seguinte forma:
•Abaixo do peso: IMC menor que 18,5
•Peso normal: IMC maior que 18,5 e menor ou igual a 25
•Sobrepeso: IMC maior que 25 e menor ou igual a 30
•Obesidade grau I: IMC maior que 30 e menor ou igual a 35
•Obesidade grau II: IMC maior que 35 e menor ou igual a 40
•Obesidade grau III: IMC maior que 40*/
#include<stdio.h>
int main()
{
    float peso, altura, IMC;

    printf("Digite seu Peso em KG: \n");
    scanf("%f", &peso);
    printf("Digite sua Altura em metros: \n");
    scanf("%f", &altura);

    //Calculando o IMC
    IMC = peso / (altura*altura);

    //Teste de falhas
    if(peso == 0 || altura == 0)
    {
        printf("Erro: Insira um dado de peso ou altura valido.\n(Codigo: CE-0000-2)");
        return 1;
    }

    //Testes de decisão
    if(IMC < 18.5)
    {
        printf("Abaixo do peso ideal.");
    }

    else if(IMC >= 18.5 && IMC <= 25)
    {
        printf("Peso normal.");
    }

    else if(IMC >= 18.5 && IMC <= 30)
    {
        printf("Sobrepeso.");
    }

    else if(IMC >= 30 && IMC <= 35)
    {
        printf("Obesidade grau I.");
    }

    else if(IMC >= 35 && IMC <= 40)
    {
        printf("Obesidade grau II.");
    }

    else if(IMC > 40)
    {
        printf("Obesidade grau III");
    }
    return 0;
}
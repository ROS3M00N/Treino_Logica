/*▪ A média ponderada permite que pesos sejam atribuídos às notas.
Faça um algoritmo que:
▪ Permita que o usuário digite 2 notas em forma de números reais;
▪ Permita que o usuário digite 2 pesos em forma de números inteiros;
▪ Calcule a média ponderada MP entre estas 2 notas;
▪ Escreva na tela para que o usuário possa ver esta média.
*/
#include <stdio.h>
int main()
{
    int n1, n2, med;

    printf("Digite a Primeira Nota: ");
    scanf("%d", &n1);
    printf("\n");
    printf("Digite a Segunda Nota: ");
    scanf("%d", &n2);
    printf("\n");

    printf("Media Final: %d\n", med = (n1 + n2) / 2);

    if (med >= 6)
    {
        printf("Aprovado!\n");
    }
    else
    {
        printf("Reprovado!\n");
    }
}
/*Faça um algoritmo que receba três números e escreva eles em
ordem crescente na tela.*/
#include <stdio.h>

int main() {
	int A, B, C;
	printf("Digite tres numeros inteiros.\n");
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	
	int menor, meio, maior;
	
	if (A < B) {
		if (A < C) {
			menor = A;
			if (B < C) {
				meio = B;
				maior = C;
			}
			else {
				meio = C;
				maior = B;
			}
		}
	}
	
	if (B < A) {
		if (B < C) {
			menor = B;
			if (A < C) {
				meio = A;
				maior = C;
			}
			else {
				meio = C;
				maior = A;
			}
		}
	}
	
	if (C < A) {
		if (C < B) {
			menor = C;
			if (A < B) {
				meio = A;
				maior = B;
			}
			else {
				meio = B;
				maior = A;
			}
		}
	}
	
	printf("%d %d %d\n", menor, meio, maior);
}
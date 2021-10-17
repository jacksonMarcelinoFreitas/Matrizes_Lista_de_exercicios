//11) Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
#include <iostream>
#include <stdio.h>
#define TAM 6
using namespace std;

int main() {
	
	int vetor[TAM], i;
	
	printf("<< Digite os elementos do vetor de %d elementos >>\n\n", TAM);
	for(i = 0; i < TAM; i++){
		printf("Posicao > %d | Elemento > ", i);
		scanf("%d", &vetor[i]);
	}
	
	printf("\n\n<< Os valores lidos foram >>\n\n");
	for(i = 0; i < TAM; i++){
		printf("[ %d ] ", vetor[i]);
	}
	return 0;
}

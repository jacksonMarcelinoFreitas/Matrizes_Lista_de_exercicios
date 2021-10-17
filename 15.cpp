//15) Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá ser impresso o maior e o menor elemento do vetor.
#include <iostream>
#include <stdio.h>
#define TAM 10

using namespace std;


int main() {
	int vetor[TAM], i, maior, menor;
	
	printf("<< Digite os valores do vetor >>\n\n");
	
	for(i = 0; i < TAM; i++){
	printf(" Posicao > %d | Elemento > ", i);
	scanf("%d", &vetor[i]);
	}
	
	menor = vetor[0];
	maior = vetor[0];
	
	for(i = 0; i < TAM; i++){
		if(vetor[i] < menor){
			menor = vetor[i];
		}
		if(vetor[i] > maior){
			maior = vetor[i];
		}
	}

	printf("O menor valor eh >> %d <<\n\n", menor);
	printf("O maior valor eh >> %d <<\n\n", maior);
	
	return 0;
}

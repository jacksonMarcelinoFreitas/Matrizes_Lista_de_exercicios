// 14) Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
#include <iostream>
#include <stdio.h>
#define TAM 10

using namespace std;

int main() {
	
	int vet[TAM], i, par;
	printf("Digite os elementos do vetor:\n\n");
	
	for(i = 0; i < TAM; i++){
		printf("Posicao >> %d | Elemento >> ", i);
		scanf("%d", &vet[i]);
	}
	if(vet[i] %2 == 0){
		par++;
	}
	printf("A quantidade de numero pares eh: %d\n\n", par);
	printf("Os numeros pares do vetor sao : %d\n\n", i);
	
	for (i = 0; i < TAM; i++){
		if(i%2 == 0){
		printf("[%d]  ",vet[i]);
		}	
	}
	return 0;
}

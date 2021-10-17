//16) Escreva um programa que leia 10 números inteiros e os armazene em um vetor.
//Imprima do vetor, o maior elemento e a posições que ele se encontra.
#include <iostream>
#include <stdio.h>
#define TAM 10

using namespace std;

int main(){
	int vetor[TAM], i,posicao, maior;
	
	printf(">> Escreva os elementos do vetor <<\n\n");
	for(i=0; i<TAM; i++){
		printf("Posicao >> [%d] Elemento >> ", i);
		scanf("%d", &vetor[i]);
	}
	for(i = 0; i < TAM; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
			posicao = i;
		}
	}
	
	printf("O maior numero do vetor eh >> %d <<\n\n", maior);
	printf("A posicao do maior numero no vetor eh >> %d <<\n\n ", posicao);
	
	
	return 0;
}

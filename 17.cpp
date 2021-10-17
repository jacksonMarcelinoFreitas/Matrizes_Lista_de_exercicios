//17) Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa.
#include <iostream>
#include <stdio.h>
#define TAM 6

using namespace std;

int main() {
	int i, vetor[TAM];
	
   	printf("Digite 6 numeros inteiros\n");

   	for(i = 0; i < TAM; i++){
   		printf(" Posicao >> %d | Elemento > ", i);
    	scanf("%d", &vetor[i]);
   	}

   	printf(">> Elementos mostrados de forma inversa <<\n");
   	for(i=TAM-1; i>=0; i--) {
    	printf("[%d] >",vetor[i]);
   	}
	return 0;
}

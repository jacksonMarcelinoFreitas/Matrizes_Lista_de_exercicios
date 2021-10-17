// 06) Faça a leitura de um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem valores negativos.
#include <iostream>
#include <stdio.h>
#define TAM 10

using namespace std;

int main() {
	int i, vet[TAM];
	
	for(i=0; i<TAM; i++){
		scanf("%d", &vet[i]);
		if(vet[i]<0){
			vet[i]=0;
		}
	}
	
	printf("Os numeros negativos foram trocados por 0. \n");
	printf("Os vetores tem os seguintes numeros: \n");
	
	for(i=0; i<TAM; i++){
		printf("%d, ", vet[i]);
	}
	
	return 0;
}

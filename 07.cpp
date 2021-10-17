//07) Faça um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a intersecção entre os 2 vetores
//anteriores, ou seja, que conte um apenas os números que estão em ambos os vetores. Nao deve conter numeros repetidos.
#include <iostream>
#include <stdio.h>
#define TAM 4
using namespace std;

int main() {
	int vet1[TAM], vet2[TAM], vet3[TAM], i, j, a, k, repetido;
	printf("\nDigite os elementos do primeiro vetor\n");
	for(i=0; i<TAM; i++){
		printf("Informe o elemento %d: ", i);
		scanf("%d", &vet1[i]);
	}
	printf("\n\n");
	
	printf("O primeiro vetor tem os seguintes numeros: \n");
	for(i=0; i<TAM; i++){
		printf("[%d]", vet1[i]);
	}
	printf("\n\n");
	
	printf("\nDigite os elementos do segundo vetor\n");
	for(i=0; i<TAM; i++){
		printf("Informe o elemento %d: ", i);
		scanf("%d", &vet2[i]);
	}
	printf("\n\n");
	
	printf("O segundo vetor tem os seguintes numeros: \n");
	for(i=0; i<TAM; i++){
		printf("[%d]", vet2[i]);
	}
	printf("\n\n");
	
	for(i = 0, a = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			if(vet1[i] == vet2[j]){
				repetido=0;
					for(k = 0; k < a; k++){
						if(vet1[i] == vet3[k]){
                        repetido = 1;
                   		}
					}
					if(!repetido){
                    vet3[a]=vet1[i];
                    printf("Nao repetido\n");
                    printf("%d | %d\n", vet3[a], vet1[i]);
                    a++;
            		}
			}
        }
    }
    printf("\n\n");
        //Mostrar intersecção
	printf("<< Vetor Insterseccao >>\n\n");
	for(i = 0; i < a; i++){
        printf("Vetor %d: [%d]\n", i, vet3[i]);
    }
	
	return 0;
}
	

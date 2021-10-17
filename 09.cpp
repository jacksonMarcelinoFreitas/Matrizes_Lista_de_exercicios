//09 )Leia um vetor com 10 números reais, ordene os elementos deste vetor,
//e no final escreva os elementos do vetor ordenado.
#include <iostream>
#include <stdio.h>
#define TAM 10

using namespace std;

int main() {
	
	int vetor[TAM], i, j, auxiliar;
	
	printf(">> Escreva os elementos que deseja ordenar <<\n\n");
	for(i=0; i<TAM; i++){
		printf("Posicao >> [%d] Elemento >> ", i);
		scanf("%d", &vetor[i]);
	}
	for(i=0; i<TAM; i++){
		for(j=i+1; j<TAM; j++){ 			//Para j = posição seguinte de i, incrementa
			if(vetor[i] > vetor[j]){		//Se o elemento de i for maior que o de j(que é i+1) a posição seguinte de i	
				auxiliar = vetor[i];		//O valor de i passa para o vetor auxiliar
				vetor[i] = vetor[j];		//O elemento em i passa para j(posição seguinte de i)
				vetor[j] = auxiliar;		//O elemento em j(na posição seguinte de i ) vira vai para o vetor auxiliar.
			}								//Acontece uma troca (aux se torna i, i se torna j, e j se torna auxiliar
		}	
	}
	printf("\n\n << VETOR ORDENADO DE FORMA CRESCENTE >>\n ");
	for(i=0; i<TAM; i++){
		printf("%d | ", vetor[i]);
	}
	
	for(i=0; i<TAM; i++){
		for(j=i+1; j<TAM; j++){
			if(vetor[i] < vetor[j]){
				auxiliar = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = auxiliar;
			}
		}
	}
	printf("\n\n << VETOR ORDENADO DE FORMA DECRESCENTE >>\n ");
	for(i=0; i<TAM; i++){
		printf("%d | ", vetor[i]);
	}

	
	return 0;
}


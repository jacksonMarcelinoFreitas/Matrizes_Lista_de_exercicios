//10)Peça ao usuário para digitar dez valores numéricos e ordene por ordem crescente, guardando-os
// num vetor. Ordene o valor assim que ele for digitado. Mostre ao final na tela os valores em ordem.
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
	
	return 0;
}

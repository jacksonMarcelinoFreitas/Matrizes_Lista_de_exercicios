//08) Fa�a um programa que leia um vetor de 15 posi��es e o compacte, ou seja, elimine as posi��es com valor zero.
//Para isso, todos os elementos a` frente do valor zero, devem ser movidos uma posi��o para tr�s no vetor.
#include <iostream>
#include <stdio.h>
#define TAM 15
using namespace std;

int main() {
	int vetor[TAM], i, posicao;
	
	printf("Digite os elementos do vetor:\n"); 
	for(i=0; i<TAM; i++){
		printf("Posicao >>%d, elemento>> ", i);
		scanf("%d", &vetor[i]); //Preenche o vetor
		if (vetor[i]==0){ 		//Se o vetor preenchido conter 0, ele tira essa posi��o.
			i--;
		}
	}
	for(i=0; i<TAM; i++){
		printf("Posicao - %d [%d]\n", posicao, vetor[i]);//Aqui mosta o vetor
	}
	
	
	return 0;
}

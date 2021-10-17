//Faça um programa que preenche uma matriz 4 x 4 com o produto do valor da 
//linha e da coluna de cada elemento. Em seguida, imprima na tela a matriz.
#include <iostream>
#include <stdio.h>
#define TAM 4
using namespace std;

int main() {
	int matriz[TAM][TAM], c, l;
	
	// Faz-se o produto do valor da linha e da coluna naquala posicao e preenche a matriz.
	printf(" << Matriz preenchida automaticamente >> \n");
	printf("\t<< matriz[l][c] = l * c >> \n\n");
	for(l = 0; l < TAM; l++){
		for(c = 0; c < TAM; c++){
			matriz[l][c] = l * c;
			printf("[%d]", matriz[l][c]);
		}
		printf("\n\n");
	}
	
	return 0;
}

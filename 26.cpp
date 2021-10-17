// 26)Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posição das matrizes lidas.
#include <iostream>
#include <stdio.h>
#define TAM 4

using namespace std;

int main() {
	int matriz1[TAM][TAM], matriz2[TAM][TAM], matriz3[TAM][TAM], l, c, maior;
	//Preenche a matriz 1
	
	printf("<< Preencha a matriz 1 >>\n\n");
	for(l = 0; l < TAM; l++){
		for(c = 0; c < TAM; c++){
			printf("Matriz 1 - Linha %d | Coluna %d | Elemento > ", l, c);
			scanf("%d", &matriz1[l][c]);		
		}	
	}
	printf("\n\n");
	
	printf(" << Matriz 1 >>\n\n");
	for(l = 0; l < TAM; l++){
		for(c = 0; c < TAM; c++){
			printf("[%d]", matriz1[l][c]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	printf("<< Preencha a matriz 2 >>\n\n");
	for(l = 0; l < TAM; l++){
		for(c = 0; c < TAM; c++){
			printf("Matriz 2 - Linha %d | Coluna %d | Elemento > ", l, c);
			scanf("%d", &matriz2[l][c]);
		}
	}
	printf("\n\n");
	
	printf(" << Matriz 2 >>\n\n");
	for(l = 0; l < TAM; l++){
		for(c = 0; c < TAM; c++){
			printf("[%d] ", matriz2[l][c]);
		}
		printf("\n");
	}
	
	for(l = 0; l < TAM; l++){
		for(c = 0; c < TAM; c++){
			if (matriz1[l][c] >= matriz2[l][c]){
				matriz3[l][c] = matriz1[l][c];
			}
			else {
				matriz3[l][c] = matriz2[l][c];
			}
		}
	}
	printf("\n\n");
	
	//Matriz 3
	printf(" << Matriz 3 >> \n\n");
	for(l = 0; l < TAM; l++){
		for(c = 0; c < TAM; c++){
			printf("[%d]", matriz3[l][c]);
		}
		printf("\n");
	}
	
	return 0;
}

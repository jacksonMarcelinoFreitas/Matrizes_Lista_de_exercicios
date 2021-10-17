//24)Leia uma matriz 4 x 4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.
#include <iostream>
#include <stdio.h>
#define TAM 4
using namespace std;

int main() {
	int matriz[TAM][TAM], l, c, maior, linha, coluna;

	printf("<< Preencha a matriz >>\n\n");
	for(l = 0; l < TAM; l++){
		for(c = 0; c < TAM; c++){
			printf("Linha %d | Coluna %d | Elemento > ", l,c);
			scanf("%d", &matriz[l][c]);
		}
	}
	printf("\n\n");
	
	//Lógica
	maior=matriz[0][0];
	for(l = 0; l < TAM; l++){
		for(c = 0; c < TAM; c++){
			if(matriz[l][c] > maior){
				maior = matriz[l][c];
				coluna = c;
				linha = l;
			}
		}
	}
	printf("Na Linha [%d] Coluna[%d] esta o maior elemento >> %d << ", linha, coluna, maior);
	printf("\n\n");
	
	printf (" << Matriz >> \n");
	//Mostra matriz
	for(l = 0; l < TAM; l++){
		for(c = 0; c < TAM; c++){
			printf("[%d]", matriz[l][c]);
		}
		printf("\n");
	}
	
	return 0;
}

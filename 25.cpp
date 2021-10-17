//25)Leia uma matriz 5 x 5. Leia também um valor  X. O programa devera fazer uma busca desse valor na matriz
// e, ao final, escrever a localização (linha e coluna) ou uma mensagem de "não encontrado".
#include <iostream>
#include <stdio.h>
#define TAM 3

using namespace std;

int main() {
	int matriz[TAM][TAM], l, c, x, linha, coluna;
	//Preenche matriz
	printf("<< Preencha a matriz >>\n\n");
	for(l = 0; l < TAM; l++){
		for(c = 0; c < TAM; c++){
			printf("Linha %d | Coluna %d | Elemento > ", l,c);
			scanf("%d", &matriz[l][c]);
		}
	}
	//Mostra matriz
	printf("\n<< Matriz >>\n");
	for(l = 0; l < TAM; l++){
		for(c = 0; c < TAM; c++){
			printf("[%d] ", matriz[l][c]);
		}
		printf("\n");
	}
	printf("\n\n");
	//Solicita o valor X
	printf(" Agora digite um valor X > ");
	scanf("%d",&x);
	printf("\n\n");
	//Localizacao
	for(l = 0; l < TAM; l++){
		for(c = 0; c < TAM; c++){
			if(x == matriz[l][c]){
				linha  =l;
				coluna =c;
				printf(" O elemento >> %d << esta na Linha  %d  e Coluna  %d .\n", x , l , c);
			}
			else{
				printf("Elemento NAO encontrado na Linha %d e Coluna %d \n", l, c);
			}
		}
	}

	return 0;
}

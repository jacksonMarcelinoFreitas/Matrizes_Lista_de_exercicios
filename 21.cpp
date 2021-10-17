// 21)Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.
#include <iostream>
#include <stdio.h>

using namespace std;



int main() {
	int c, l, matriz[4][4], maior, quant;
	//Preencher matriz
	
	printf("<< Digite os elementos da matriz >>\n\n");
	for(l = 0; l < 4; l++){
		for(c = 0; c < 4; c++){
		scanf("%d", &matriz[l][c]);
		}
	}
	system("cls");
	//Mostrar matriz
	printf("<< A matriz eh >>\n\n");
	for(l = 0; l < 4; l++){
		for(c = 0; c < 4; c++){
		printf("[%d] ",matriz[l][c]);
		}
		printf("\n");
	}
	printf("\n\n");
	//Valores maiores que 10.
	for(l = 0; l < 4; l++){
		for(c = 0; c < 4; c++){
			if(matriz[l][c] > 10){
			maior = matriz[l][c];
			quant++;
			}
		}
	}
	
	printf("A quantidade de numeros maiores que 10 eh >> %d <<\n", quant);
	printf("Os numeros maiores que 10 eh >>\n\n");
	//Mostrar maiores que 10.
	for(l = 0; l < 4; l++){
		for(c = 0; c < 4; c++){
			if(matriz[l][c] > 10){
			printf("[%d]", matriz[l][c]);
			}
		}
		printf("\n");
	}
	
	
	
	
	return 0;
}

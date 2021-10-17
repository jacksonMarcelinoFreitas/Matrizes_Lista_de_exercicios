//22)Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal
// e com 0 os demais elementos. Escreva ao final a matriz obtida. 
#include <iostream>
#include <stdio.h>
#define MAT 5

using namespace std;


int main() {
	int c, l, matriz[MAT][MAT];
	
	printf("<< Preenchimento automatico da matriz >>\n\n");
	for(l = 0; l < MAT; l++){
		for(c = 0; c < MAT; c++){
			if(l == c){
				matriz[l][c] = 1; //Diagonal principal
			}
            else{
            	matriz[l][c] = 0;
			}	
		}	
	}
	//Mostrar matriz
	for(l = 0; l < MAT; l++){
		for(c = 0; c < MAT; c++){
			printf("[%d] ", matriz[l][c]);
		}	
		printf("\n");
	}
	return 0;
}

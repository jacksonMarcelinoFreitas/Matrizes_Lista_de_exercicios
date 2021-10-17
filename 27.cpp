//27)Leia uma matriz 5 x 10 que se refere respostas de 10 questões de múltipla escolha,
//referentes a 5 alunos. Leia também um vetor de 10 posições contendo o gabarito de respostas
//que podem ser a, b, c ou d. Seu programa devera comparar as respostas de cada candidato com o gabarito
//e emitir um vetor denominado resultado, contendo a pontuação correspondente a cada aluno.

#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#define TAM1 2 //Alunos
#define TAM2 3 //Questão

using namespace std;

int main (){
	int l, c, certo, errado;
	char gabarito[TAM2], matriz[l][c], respostas[TAM2];
	//Gabarito 
	printf(" << Digite o gabarito >>\n\n");
	for(c = 0; c < TAM2; c++){
		printf("Questao > %d | Resposta > ", c+1);
		scanf("%c", &gabarito[c]);
		getchar();
	}
	//Matriz
	printf("\n\n<< Informe as respostas >>\n\n");
	for(l = 0; l < TAM1; l++){
		for(c = 0; c < TAM2; c++){
			printf("Aluno %d | Questão %d | Resposta > ", l+1, c+1);
			scanf("%c", &matriz[l][c]);
			getchar();
		}
	}
	//Mostra vetor
	printf("\n\n<< Vetor >>\n\n");
	for(l = 0; l < TAM1; l++){
		for(c = 0; c < TAM2; c++){
			printf("[%c]", matriz[l][c]);
		}
		printf("\n");
	}
	//Comparando com o gabarito
	for(l = 0; l < TAM1; l++){
		for(c = 0; c < TAM2; c++){
			if(matriz[l][c] == gabarito[c]){
			certo++;
			}
			else{
			errado++;
			}
		}
	}
	//Mostrando os valores no vetor de respostas
	for(l = 0; l < TAM1; l++){
		for(c = 0; c < TAM2; c++){
			if(matriz[l][c] == gabarito[c]){
			certo++;
			}
			else{
			errado++;
			}
		}
	}
	for (l = 0; l < TAM2 ; l++)
    {
        printf("O aluno %d obteve %d acertos \n", l, certo);
    }


	return 0;
}




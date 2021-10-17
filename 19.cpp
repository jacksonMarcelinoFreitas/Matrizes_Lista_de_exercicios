//19) Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a media geral.

#include <iostream>
#include <stdio.h>
#define TAM 15

using namespace std;

int main() {
	int i;
	float vetor[TAM], mediaNota, somaNota;
	
	printf(" Digite a nota dos alunos:\n\n");
	for(i = 0; i < TAM; i++){
		printf("Aluno > %d < | Nota >> ", i);
		scanf("%f", &vetor[i]);
		somaNota += vetor[i];
	}
	mediaNota = somaNota/i;
	printf("A media de notas dos alunos eh : %.2f ", mediaNota);
	return 0;
}

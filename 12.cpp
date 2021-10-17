// 12) Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor,
//armazenando o resultado em outro vetor. Os conjuntos tem 10 elementos cada. Imprimir todos os conjuntos.
#include <iostream>
#include <stdio.h>
#include <math.h>
#define TAM 10

using namespace std;

int main() {
	int i,j, auxiliar;
	float vetor[TAM], vetor2[TAM];
	
	printf("<< Informe os valores dentro do conjunto dos reais >>\n\n");
	for(i = 0; i < TAM; i++ ){
		printf("Posicao > %d | Elemento > ",i);
		scanf("%f",&vetor[i]);
	}
	printf("\n\n<< Os numeros digitados sao >>\n");
	for (i=0; i < TAM; i++){
		printf(" [%.2f] ", vetor[i]);
	}
	//Troca
	for (i=0; i < TAM; i++){
		auxiliar = vetor[i]*vetor[i];
		vetor2[i] = auxiliar;
	}
	
	printf("\n\n<< O quadrado dos numeros sao >> \n");
	for (i=0; i < TAM; i++){
		printf(" [%.2f] ", vetor2[i]);
	}
	return 0;
}


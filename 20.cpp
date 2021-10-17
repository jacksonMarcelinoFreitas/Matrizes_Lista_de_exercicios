//20) Faça um programa que preencha um vetor com 10 números reais, calcule e mostre
//a quantidade de números negativos e a soma dos números positivos desse vetor.
#include <iostream>
#include <stdio.h>
#define TAM 10

using namespace std;

int main(){
	int i;
	float vetor[TAM], somaPos=0, somaNeg=0, positivos, negativos;
	
	printf("<< Digite os elementos do vetor >>\n\n");
	for(i = 0; i < TAM; i++){
		printf("Posicao > %d | Elemento > ",i);
		scanf("%f", &vetor[i]);
		if(vetor[i] < 0){
			negativos++;
			somaNeg += vetor[i];
		}
		else{
			somaPos += vetor[i];
		}
	}
	
	printf("\nOs a quantidade de numeros negativos eh > %.1f", negativos);
	printf("\nA soma dos numeros negativos eh > %.2f", somaNeg);
	printf("\nOA soma dos numeros positivos eh > %.2f", somaPos);
	
		
	return 0;
}

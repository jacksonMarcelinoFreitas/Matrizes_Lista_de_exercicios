// 01) Crie um programa capaz de ler os dados de uma matriz quadrada de inteiros. Ao final da leitura
// o programa dever� imprimir o n�mero da linha que cont�m a menor (posi��o) dentre todos os n�meros lidos.
#include<stdio.h>
#include<stdlib.h>
#define TAM 4

int main () {
	int i, j, maior, menor, posMenor, dimensao;
	printf("Digite a dimensao quadrada da matriz:");
	scanf("%d", &dimensao);
	
	int vet[dimensao][dimensao];
	for (i = 0; i < dimensao; i++){ 
		for(j = 0; j< dimensao; j++){
			scanf("%i", &vet[i][j]); //Aqui pega os valores digitados.
			}
	}
	//menor valor
	menor = vet[0][0];
	posMenor = 0;
	for (i = 1; i < dimensao; i++){
		for(j = 0; j< dimensao; j++){
			if (vet[i][j] < menor){
				menor = vet[i][j];   //entender i e sua fun��o aqui 
				posMenor = vet[i][j];
			}
		}
	}
	//mostra o vetor
	
	printf("Vetor:");
	for (i = 1; i < dimensao; i++){
		for(j = 0; j < dimensao; j++){
			printf("%d ",vet[i][j]);
		}
		printf("\n");
	}
	printf("\n Menor valor: %i - posicao: %i", menor, posMenor+1);
				
	return 0;
}



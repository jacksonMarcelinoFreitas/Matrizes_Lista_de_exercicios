//13) Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois
// valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa
// devera escrever a soma dos valores encontrados nas respectivas posições X e Y.
#include <iostream>
#include <stdio.h>
#define TAM 8

using namespace std;

int main() {
	int vet[TAM], i, x, y, soma;
	
	printf("<< Informe os valores do vetor de %d posicoes >>\n\n", TAM);
	for (i = 0; i < TAM; i++){
		printf("\nPosicao > %d | Elemento > ", i);
		scanf("%d", &vet[i]);
	}
	printf("\nInforme o valor de ""X"" >> ");
	scanf("%d", &x);
	printf("\n");
	
	while(x < 0 || x > TAM){
		printf("O numero deve ser igual a 0 e menor que 8\n");
		printf("Digite ""X"" novamente: ");
		scanf("%d", &x);
		printf("\n");
	}
	
	printf("\nInforme o valor de Y >> ");
	scanf("%d", &y);
	
	while(y < 0 || y > TAM){
		printf("O número deve ser igual a 0 e menor que 8)\n");
		printf("Digite ""Y"" novamente: ");
		scanf("%d", y);
		printf("\n");
	}
	
	soma = vet[x] + vet[y]; //Vetor que estiver na posição de x e y
	
	printf("A soma de %d e %d eh > %d ",x ,y ,soma);
	
	return 0;
}

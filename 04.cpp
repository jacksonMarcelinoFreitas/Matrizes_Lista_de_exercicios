
//04 Crie um programa que receba dois números X e Y, sendo X < Y. Calcule e mostre:
//"	a soma dos números pares desse intervalo de números, incluindo os números digitados;
//"	a multiplicação dos números ímpares desse intervalo, incluindo os digitados;
#include <iostream>
#include <stdio.h>

using namespace std;

int x, y, i, somaPar=0, multImpar=1;
int main() {
	
	printf ("Digite o primeiro número:\n");
	scanf("%d", &x);
	printf ("Digite um número maior que o primeiro:\n");
	scanf("%d", &y);
	
	while(y < x){
		printf("Numero digitado inválido!\n");
		printf("Digite novamente o segundo número\n");
		scanf("%d", &y);
	}
	printf("Os números digitados foram, %d, e %d.\n\n\n", x,y );
	printf("O intervalo de numeros pares entre %d, e %d eh este:\n ", x,y);
	for (i = x; i <= y; i++){
		if(i%2 == 0){
		somaPar+=i;
		printf("%d,", i);
		}		
	}
	printf("\nA soma dos pares eh: %d\n", somaPar);
	
	printf("\n\n\nO intervalo de numeros impares entre %d, e %d eh este:\n ", x,y);
	for (i = x; i <= y; i++){
		if(i%2 != 0){
		multImpar*=i;
		printf("%d,", i);
		}
	}
	printf("\nA multiplicacao dos impares eh: %d\n", multImpar);
	
	return 0;
}


//04 Crie um programa que receba dois n�meros X e Y, sendo X < Y. Calcule e mostre:
//"	a soma dos n�meros pares desse intervalo de n�meros, incluindo os n�meros digitados;
//"	a multiplica��o dos n�meros �mpares desse intervalo, incluindo os digitados;
#include <iostream>
#include <stdio.h>

using namespace std;

int x, y, i, somaPar=0, multImpar=1;
int main() {
	
	printf ("Digite o primeiro n�mero:\n");
	scanf("%d", &x);
	printf ("Digite um n�mero maior que o primeiro:\n");
	scanf("%d", &y);
	
	while(y < x){
		printf("Numero digitado inv�lido!\n");
		printf("Digite novamente o segundo n�mero\n");
		scanf("%d", &y);
	}
	printf("Os n�meros digitados foram, %d, e %d.\n\n\n", x,y );
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

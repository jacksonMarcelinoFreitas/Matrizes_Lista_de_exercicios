//05) Crie um programa que, para um número indeterminado de pessoas: leia a idade de cada uma, 
//sendo que a idade 0 (zero) indica o fim da leitura e não deve ser considerada. A seguir calcule:
//"	o número de pessoas;
//"	a idade média do grupo;
//"	a menor idade e a maior idade.

#include <iostream>
#include <stdio.h>

using namespace std;
int main(){
	
	int idade = 0, soma = 0, pessoas=0, menor=999, maior=1;
	float media;
	
	printf("Informe as idades que deseja:\n");
	
	do{
		pessoas++;
		soma += idade;
		scanf("%d",&idade);
		if(idade < menor && idade != 0 ){
			menor=idade;
		}
		if(idade>maior)
			maior=idade;

	}while (idade!=0);
	
	
	media = (float)soma / (float)pessoas;
	printf("Idade Media de idade eh: %.2f\n",media);
	printf("O número de pessoas eh:%d\n", pessoas);
	printf("A menor idade declarada eh: %d\n", menor);
	printf("A maior idade declarada eh: %d\n", maior);

return 0;
}

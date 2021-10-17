//03) Crie um programa capaz de multiplicar uma linha de uma matriz de inteiros
//por um dado número. Faça o mesmo para uma coluna. A matriz deve ser lida de teclado
#include <iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;


int main () {
    int linha , coluna, i, m, opcao, n, j;

    printf("Digite a dimensao da matriz\n");
    scanf("%d %d", &linha, &coluna);

	int matriz[linha][coluna];

    printf("Digite os valores da matriz\n");
    for (i=0; i<linha; i++){
        printf("Digite os valores para a %d linha\n", i+1);
        for (j=0; j<coluna ; j++)
            scanf("%d", &matriz[i][j]);
}

    printf("A matriz digitada é\n");
    for (i=0; i<linha; i++){
        for (j=0; j<coluna; j++){
            printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }

    printf("Se você quer multiplicar uma linha entre 1 e se quer multiplicar uma coluna entre 2.\n");
    scanf("%d",&opcao);
    if(opcao> 2 || opcao < 1)
        printf("Entrada invalida\n");
    else {  

        if (opcao== 1)   {     

            printf("Digite qual a linha que vai ser multiplicada\n");
            scanf("%d",&m);  

            printf("Digite o valor pelo qual quer multiplicar\n");
            scanf("%d",&n);

	        for (i=0; i<coluna; i++) {
	            matriz[m-1][i] = n * matriz[m-1][i]; //usa-se somente a matriz a percorrendo as colunas (limite: variável c).
            }

            printf("A matriz multiplicada é\n");
	        for (i=0; i<linha; i++) {
	            for (j=0; j<coluna; j++) {
	                printf("%d ", matriz[i][j]); //imprime-se a matriz já multiplicada.
                }
                printf("\n");
	        }
	    }   

        if (opcao == 2){

            printf("Digite qual a coluna que vai ser multiplicada\n");
            scanf("%d",&m);  

            printf("Digite o valor pelo qual quer multiplicar\n");
            scanf("%d",&n);

         	for (j=0; j<linha; j++) {
	            matriz[j][m-1] = n * matriz[j][m-1]; //usa-se somente a matriz a percorrendo as linhas (limite: variável k).
            }

            printf("A matriz multiplicada é\n");
	        for (i=0; i<linha; i++) {
	            for (j=0; j<coluna; j++) {
                    printf("%d ", matriz[i][j]);
                 }
                printf("\n");
	        }  

        }   
    }

system("pause"); 
return 0; 
}


/*
02) Faça o programa que apresenta a seguinte saída, perguntando ao
 usuário o número máximo este número deve ser sempre ímpar.
1 2 3 4 5 6 7 8 9
2 3 4 5 6 7 8
3 4 5 6 7
4 5 6
5
*/

#include <iostream>

	int main(void) {

    int n, i, j;

    printf("Digite o numero maximo do triangulo.\n");
    printf("\n");
    printf("Atencao, o numero deve ser impar.\n");
    scanf("%d", &n);  // Registra  o número máximo
    printf("\n");

    if (n % 2 ==0){ //Se par
       printf("Numero invalido.\n");
       return 1;
    }
    else{
        for( i = 0; i<= (n / 2) + 1; i++){
            for ( j = i + 1; j <= n - i; j++ ){
                printf("%d ",j);
            }
            printf("\n");
            for ( j = 0; j < (i + 1) * 2; j++ ){
              printf(" ");
         	}
    	}
    }


    return 0;
}
	

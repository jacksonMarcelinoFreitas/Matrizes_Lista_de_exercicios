//28) Fa�a um programa para corrigir uma prova com 10 quest�es de m�ltipla escolha ( � a, b, c, d ou e), em uma turma com 3 alunos.
//Cada quest�o vale 1 ponto. Leia o gabarito, e � para cada aluno leia sua matricula (numero inteiro) e suas respostas.
//Calcule e escreva: Para cada aluno, escreva sua matr�cula, suas respostas, e sua nota. O percentual de aprova��o, assumindo media 7.0.
#include <iostream>
#include <conio.h>
#define QUESTAO 10 //Total de quest�es
#define ALUNO 2 //Total de alunos

using namespace std;

int main() {
	
	char gabarito[QUESTAO];
	int alunos[ALUNO], notas[ALUNO], x, a, totalnota=0, aprovados=0;
	
	//Preenche o gabarito
	for(x = 0; x < QUESTAO; x++){
		printf("Resposta Questao %i: ",x+1);
		gabarito[x] = getche();
		printf("\n");
	}
	//Preenche questoes
	for(x = 0; x < ALUNO; x++){
		printf("Informe o numero do aluno : ");
		scanf("%i", &alunos[x]);
		totalnota=0;
		for(a = 0; a < QUESTAO; a++){
			printf("Resposta do questao %i: ",a+1);
			if(gabarito[a] == getche()){
				totalnota++;
			}
			printf("\n");
		}
		notas[x] = totalnota;
	}
	//Aprovados
	for(a = 0; a < ALUNO; a++){
		printf("Aluno %i nota = %i \n",alunos[a], notas[a]);
		if( notas[a] >= 7){
			aprovados++;
		}		
	}
	printf(" %% de aprovados = %f", float((aprovados*100)/ALUNO)); //Para for�ar a constante como float
	
	return 0;
}



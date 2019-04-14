/*
	Aluno: Luis Henrique Moraes Pequeno.
	Matrícula: 17045029.
	Aluno(a):
	Matrícula:
	Turma: CIN01S1.
	Curso: Ciência da Computação.
	Matéria: Estrutura de Dados.
	Professora: Erika.
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

	int rest(int a, int b){
		int resto;
		
		resto = a % b;
		
		return resto;	
	}
	
	void main(){
		int x, a, b;
		
		setlocale(LC_ALL, "Portuguese");
		printf("Informe o primeiro valor: ");
		scanf("%d", &a);
		printf("Informe o segundo valor: ");
		scanf("%d", &b);
		
		x = rest(a,b);
		printf("O resto da divisão é: %d\n", x);	
	}

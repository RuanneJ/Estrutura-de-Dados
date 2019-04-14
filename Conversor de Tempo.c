/*
	Aluno(a): Luis Henrique Moraes Pequeno.
	Matrícula: 17045029.
	Turma: CIN01S1.
	Curso: Ciência da Computação.
	Matéria: Estrutura de Dados.
	Professora: Erika.
*/
#include<stdio.h>
#include<locale.h>

int main(){
	int hr, min, seg, seg_2;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Informe os valores em S(Segundos), para transformalos em:\nHoras, Minutos e Segundos: ");
	scanf("%d", &seg);
	
	hr=seg/3600;
	min=(seg/60)/60;
	seg_2=(seg-(3600*hr)-(min*60));
	
	if(seg_2 <0){
		seg_2 = 0;
	}
	
	printf("É Exatamente: ");
	printf("%dH %dM %dS", hr, min, seg_2);
}

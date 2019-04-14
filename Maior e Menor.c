/*Ruanne Rosa Jardim Cruz	
17240174, CIN03S1
	Curso: Ciência da Computação.
	Matéria: Estrutura de Dados.
	Professora: Erika.
*/

#include<stdio.h>
#include<locale.h>

	int main(){
		
		int vetor[5], i=0, x=0, a, b;
		
		while(x < 5){
			printf("Informe o valor: ");
			scanf("%d", &vetor[i]);
			i++;
			x++;
			if(a < vetor[i]){
				a = vetor[i];
			}
			if(vetor[i] > b){
				b = vetor[i];
			}
		}
		printf("%d %d", a, b);
		
	}

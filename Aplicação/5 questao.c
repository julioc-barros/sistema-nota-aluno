#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


int main () {
	setlocale(LC_ALL,"");
	
//	Declarando as variaveis
	char nome[5][10];
	float N1[5],N2[5],media[5];
	int i=1,j=1;

//	Entrada de dados
	for (i=1; i<=5;i++){
//		recebendo nome
			printf("\nDigite o nome do %d° aluno: ",i);
			scanf(" %s", &nome[i]);
		
//			Recebendo nota 1
			printf("\nDigite a 1° nota: ");
			scanf("%f", &N1[i]);
			
//			Condição de nota
			while ((N1[i] > 10) || (N1[i]<0)){
				
				printf("\nDigite uma nota válida: ");
				scanf("%f", &N1[i]);
				
			}
			
//			Recebendo nota 2
			printf("\nDigite a 2° nota: ");
			scanf("%f", &N2[i]);
			
//			Condição de nota
			while ((N2[i] > 10) || (N2[i]<0)){
				
				printf("\nDigite uma nota válida: ");
				scanf("%f", &N2[i]);
				
			}
		system("cls");
			
		media[i] = (N1[i]+N2[i])/2;
		}
		
	system("cls");

	//	Saída de dados
	printf(" NOME	");
	printf("	NOTA 1		");
	printf("NOTA 2		");
	printf("MÉDIA\n");
	
	for(i=1;i<=5;i++){
		
		printf(" %s	",nome[i]);
		printf("	%.1f	",N1[i]);
		printf("	%.1f	",N2[i]);
		printf("	%.1f\n", media[i]);
		
	}
	printf("\n\n");
	system("pause");
	return 0;
	}

	

/* -------------------------------------------------------------------------------------------------------- *
   
   gaby corr (gaby.corr.developer@gmail.com)						
 																		
                                                                        
  LIVRO ESTRUTURA DE DADOS COM ALGORÍTMOS E C ---> CAPÍTULO 1 - Exercício 1												
  		              
  		Fazer um programa em C que implemente o algoritmo para acessar	
  		elementos de vetores via ponteiros. Crie uma função:			
 																		
  			imprime_array_elemento (int *aArray, int iElemento);		
 																		
 * --------------------------------------------------------------------------------------------------------- */


#include <stdlib.h>
#include <stdio.h>
#include <time.h>


void menu(void);
void imprime_array_elemento (int *aArray, int iElemento);

int main (void){

	// VARIAVEIS

		// VARIAVEIS AUXILIARES
		int i, j;
		int m;

		// VARIAVEIS MATRIZES
		int *po[5];
		int matriz[5];

		//Inicializa gerador com valores aleatórios
		srand(time(NULL));

		// INICIALIZA A MATRIZ
		for(i = 0; i < 5; i++){
			po[i] = &matriz[i];
			matriz[i] = rand() %5;
		}

	/* Teste para ver se o vetor esta sendo impresso
	 * printf("%i, %i, %i, %i, %i", *po[0], *po[1],*po[2],*po[3],*po[4]);*/

	// LAÇO MENU
	do{
		menu();
		scanf("%i",&m);

		if (m == 1){
			printf("\n\tQual valor da matriz deseja ver?");
			scanf ("%i",&j);
			imprime_array_elemento(*po, j);
		}

	}while(m != 0);

	return 0;

}

void menu (void){
	printf("\n\tMENU\n");
	printf("\n\tEsse é um vetor de cinco unidades. Abaixo segue o menu:");
	printf("\n\t0 - Sair;");
	printf("\n\t1 - Busca.");
}

void imprime_array_elemento (int *aArray, int iElemento){
	int a = iElemento - 1;
	printf("\n\tO valor do elemento %i é %i", iElemento, aArray[a]);
}

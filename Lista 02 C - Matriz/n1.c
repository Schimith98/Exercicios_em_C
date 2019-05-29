//1) Faça um algoritmo para ler pelo teclado uma matriz 4 x 3 com valores 
//reais e imprimir o maior elemento da matriz e a sua localização 
//(linha e coluna). Utilize dois procedimentos: um para a leitura
//da matriz e outro para imprimir as informações.

#include<stdio.h>
#include<stdlib.h>

#define linha 4
#define coluna 3

void preencher(float matriz[linha][coluna]){
	int i, j;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			printf("Matriz[%d][%d]:", i, j);
			scanf("%f", &matriz[i][j]);
			
		}
	}
}

void imprimir(float matriz[linha][coluna]){
	int i, j, posicaoL, posicaoC;
	float maior = matriz[0][0];
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			if(maior < matriz[i][j]){
				maior = matriz[i][j];
				posicaoL = i;
				posicaoC = j;
 			}	
		}
	}
	
	printf("O maior elemento da matriz: %f, esta na posicao[%d][%d]", maior, posicaoL, posicaoC);
}
int main(){
	float matriz[linha][coluna];
	
	preencher(matriz);
	imprimir(matriz);
	
	return 0;
}


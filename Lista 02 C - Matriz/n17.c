//17) Na teoria dos sistemas, define-se como elemento minimax de uma matriz 
//o menor elemento de uma linha onde se encontra o maior elemento da matriz. 
//Faça um algoritmo para gerar uma matriz quadrada 10 x 10 com números aleatórios 
//de 1 até 50 e imprimir o seu elemento minimax. Utilize um procedimento para a 
//geração da matriz e uma função para retornar o elemento minimax. A impressão 
//desse elemento tem que ser na função main.

#include<stdio.h>
#include<time.h>
#define linha 10
#define coluna 10

void preencher(int matriz[linha][coluna]){
	srand(time(NULL));
	int i,j;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			matriz[i][j] = rand()%50+1;
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
}

int calcular(int matriz[linha][coluna]){
	int i, j, minimax = matriz[0][0], maiorLinha;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			if(matriz[i][j] >= minimax){
				minimax = matriz[i][j];
				maiorLinha = i;
			}
		}
	}
	for(j = 0; j < coluna; j++){
		if(matriz[maiorLinha][j] < minimax){
			minimax = matriz[maiorLinha][j];
		}
	}
	return minimax;
}

int main(){
	int matriz[linha][coluna];
	preencher(matriz);
	printf("\n  Minimax:%d  \n", calcular(matriz));
	
	return 0;
}

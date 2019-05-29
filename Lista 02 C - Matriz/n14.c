//14) Faça um algoritmo para calcular a multiplicação dos elementos que estão 
//abaixo da diagonal principal de uma matriz quadrada 6 x 6 gerada aleatoriamente 
//com números de 1 até 10. Utilize um procedimento para a geração da matriz e uma 
//função para realizar a multiplicação. O resultado da multiplicação tem que ser impresso na função main

#include<stdio.h>
#include<time.h>
#define linha 6
#define coluna 6

void preencher(int matriz[linha][coluna]){
	int i, j;
	srand(time(NULL));
	for(i = 0; i < linha; i ++){
		for(j = 0; j < coluna; j++){
			matriz[i][j] = rand()%10+1;
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
}

double calcular(int matriz[linha][coluna]){
	int i,j;
	double aux = 1;
	for(i = 0; i < linha; i ++){
		for(j = 0; j < coluna; j++){
			if(i > j){
				aux *= matriz[i][j];
			}
		}
	}
	return aux;
}
int main(){
	int matriz[linha][coluna];
	preencher(matriz);
	printf("multiplicação dos elementos que estão abaixo da diagonal principal %.0lf", calcular(matriz));
	
	return 0;
}

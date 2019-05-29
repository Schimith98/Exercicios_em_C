//14) Fa�a um algoritmo para calcular a multiplica��o dos elementos que est�o 
//abaixo da diagonal principal de uma matriz quadrada 6 x 6 gerada aleatoriamente 
//com n�meros de 1 at� 10. Utilize um procedimento para a gera��o da matriz e uma 
//fun��o para realizar a multiplica��o. O resultado da multiplica��o tem que ser impresso na fun��o main

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
	printf("multiplica��o dos elementos que est�o abaixo da diagonal principal %.0lf", calcular(matriz));
	
	return 0;
}

//8) Fa�a um algoritmo para calcular e imprimir a matriz transposta 
//de uma matriz 7 x 3 gerada aleatoriamente com n�meros de 1 at� 25. 
//A matriz que ir� receber o resultado da transposta deve ser criada 
//na fun��o main. Utilize tr�s procedimentos: um para a gera��o da matriz, 
//outro para calcular a transposta e um terceiro para imprimir a matriz transposta.
#include<stdio.h>
#include<time.h>
#define linha 7
#define coluna 3

void preencher(int matrizA[linha][coluna]){
	srand(time(NULL));
	int i, j;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			matrizA[i][j] = rand()%25+1;
			printf("%d\t", matrizA[i][j]);
		}
		printf("\n");
	}
}
void calcular(int matrizA[linha][coluna], int matrizB[coluna][linha]){
	int i, j;
	for(i = 0; i < coluna; i++){
		for(j = 0; j < linha; j++){
			matrizB[i][j] = matrizA[j][i];
		}
	}
}
void imprimir(int matrizB[coluna][linha]){
	int i, j;
	printf("\n");
	for(i = 0; i < coluna; i++){
		for(j = 0; j < linha; j++){
			printf("%d\t", matrizB[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int matrizA[linha][coluna], matrizB[coluna][linha];
	preencher(matrizA);
	calcular(matrizA, matrizB);
	imprimir(matrizB);
	
	return 0;
}

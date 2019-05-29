//6) Faça um algoritmo para imprimir o resultado da multiplicação de 
//um número lido pelo teclado (lido na função main) por uma matriz de 
//inteiros 2 × 8 gerada aleatoriamente com números de 0 até 29. 
//A matriz que irá receber o resultado da multiplicação do número pela 
//matriz deve ser criada na função main. Utilize três procedimentos: 
//um para a geração da matriz, outro para calcular a multiplicação e um terceiro 
//para imprimir a matriz com o resultado da multiplicação

#include<stdio.h>
#define linha 2
#define coluna 8

void preencher(int matrizA[linha][coluna]){
	srand(time(NULL));
	int i, j;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			matrizA[i][j] = rand()%30;
		}
	}
}
void calcular(int matrizA[linha][coluna], int matrizB[linha][coluna], int n){
	int i, j;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			matrizB[i][j] = matrizA[i][j] * n;
		}
	}
}

void imprimir(int matrizB[linha][coluna]){
	int i, j;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			printf(" %d", matrizB[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int matrizA[linha][coluna], matrizB[linha][coluna], n;
	preencher(matrizA);
	printf("Numero:");
	scanf("%d", &n);
	calcular(matrizA, matrizB, n);
	imprimir(matrizB);
	
	return 0;
}

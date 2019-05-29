//6) Fa�a um algoritmo para imprimir o resultado da multiplica��o de 
//um n�mero lido pelo teclado (lido na fun��o main) por uma matriz de 
//inteiros 2 � 8 gerada aleatoriamente com n�meros de 0 at� 29. 
//A matriz que ir� receber o resultado da multiplica��o do n�mero pela 
//matriz deve ser criada na fun��o main. Utilize tr�s procedimentos: 
//um para a gera��o da matriz, outro para calcular a multiplica��o e um terceiro 
//para imprimir a matriz com o resultado da multiplica��o

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

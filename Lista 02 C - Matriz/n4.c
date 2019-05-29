//4) Faça um algoritmo para ler pelo teclado duas matrizes de reais 5 × 3 
//e imprimir a soma dessas matrizes. A matriz que irá receber a soma das 
//outras duas deve ser criada na função main. Utilize três procedimentos: 
//um para a leitura das matrizes, outro para calcular a soma e um terceiro 
//para imprimir a matriz com o resultado da soma.

#include<stdio.h>

#define linha 5
#define coluna 3

void preencher(float matrizA[linha][coluna], float matrizB[linha][coluna]){
	int i, j;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			printf("MatrizA[%d][%d]:", i, j);
			scanf("%f", &matrizA[i][j]);
			printf("MatrizB[%d][%d]:", i, j);
			scanf("%f", &matrizB[i][j]);
		}
	}
}
void somar(float matrizA[linha][coluna], float matrizB[linha][coluna], float matrizC[linha][coluna]){
	int i, j;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
		}
	}
}

void imprimir(float matrizC[linha][coluna]){
	int i, j;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			printf(" %.2f", matrizC[i][j]);
		}
		printf("\n");
	}
}

int main(){
	float matrizA[linha][coluna], matrizB[linha][coluna], matrizC[linha][coluna];

	preencher(matrizA, matrizB);
	somar(matrizA, matrizB, matrizC);
	imprimir(matrizC);
	
	return 0;
}

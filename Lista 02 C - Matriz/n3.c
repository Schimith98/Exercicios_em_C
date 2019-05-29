//3) Faça um algoritmo para ler pelo teclado uma matriz 4 x 4 
//com valores inteiros e também um número inteiro x. Ao final, 
//o algoritmo tem que imprimir se o número x pertence ou não à matriz.
//O número x tem que ser lido na função main. Utilize um procedimento 
//para a leitura da matriz e uma função para realizar a busca. 
//A impressão da informação (se x está presente ou não na matriz) deve ser na função main.

#include<stdio.h>

#define linha 4
#define coluna 4

void preencher(int matriz[linha][coluna]){
	int i, j;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			printf("Matriz[%d][%d]:", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
}

int verificar(int matriz[linha][coluna], int x){
	int i, j;
	for(i = 0; i < linha; i++){
		for( j = 0; j < coluna; j++){
			if(matriz[i][j] == x){
				return 1;
			}
		}
	}
	return 0;
}

int main(){
	int matriz[linha][coluna], x;
	preencher(matriz);
	printf("X:");
	scanf("%d", &x);
	if(verificar(matriz, x) == 1){
		printf("X esta presente na matriz");
	}else{
		printf("X NAO esta presente na matriz");
	}
	return 0;
}

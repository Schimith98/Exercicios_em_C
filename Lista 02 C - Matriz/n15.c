//15) Fa�a um algoritmo para calcular a soma dos elementos que est�o em uma coluna 
//x de uma matriz 10 x 4 gerada aleatoriamente com n�meros de 1 at� 15. 
//A coluna a ser somada (coluna x) deve ser lida pelo teclado na fun��o main. 
//Utilize um procedimento para a gera��o da matriz e uma fun��o para realizar a soma. 
//O resultado da soma tem que ser impresso na fun��o main.

#include<stdio.h>
#include<time.h>
#define linha 10
#define coluna 4

void preencher(int matriz[linha][coluna]){
	int i, j;
	srand(time(NULL));
	for(i = 0; i < linha; i ++){
		for(j = 0; j < coluna; j++){
			matriz[i][j] = rand()%15+1;
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
}
int calcular(int matriz[linha][coluna], int x){
	int i, aux = 0;
	for(i = 0; i < linha; i ++){
		aux += matriz[i][x];
	}
	return aux;
}

int main(){
	int matriz[linha][coluna], x;
	preencher(matriz);
	printf("coluna a ser somada:");
	scanf("%d", &x);
	printf("soma da coluna %d: %d", x, calcular(matriz, x));
	return 0;
}


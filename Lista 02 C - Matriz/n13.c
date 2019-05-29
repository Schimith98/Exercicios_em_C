//13) Fa�a um algoritmo para calcular a soma dos elementos que est�o acima da diagonal 
//principal de uma matriz quadrada 5 x 5 gerada aleatoriamente com n�meros de 1 at� 40. 
//Utilize um procedimento para a gera��o da matriz e uma fun��o para realizar a soma. 
//O resultado da soma tem que ser impresso na fun��o main.


#include<stdio.h>
#include<time.h>
#define linha 5
#define coluna 5

void preencher(int matriz[linha][coluna]){
	int i, j;
	srand(time(NULL));
	for(i = 0; i < linha; i ++){
		for(j = 0; j < coluna; j++){
			matriz[i][j] = rand()%40+1;
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
}

int calcular(int matriz[linha][coluna]){
	int i,j, aux = 0;
	for(i = 0; i < linha; i ++){
		for(j = 0; j < coluna; j++){
			if(i < j){
				aux += matriz[i][j];
			}
		}
	}
	return aux;
}

int main(){
	int matriz[linha][coluna];
	preencher(matriz);
	printf("soma dos elementos que est�o acima da diagonal principal: %d", calcular(matriz));
	
	return 0;
}


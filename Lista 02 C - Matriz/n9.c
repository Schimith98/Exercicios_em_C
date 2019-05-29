//9) Fa�a um algoritmo para verificar se uma dada matriz quadrada 10 x 10 
//gerada aleatoriamente com n�meros de 0 at� 19 � uma matriz identidade. 
//Em uma matriz identidade, todos os elementos da diagonal principal 
//s�o iguais a 1 e os demais s�o iguais a 0. Utilize um procedimento 
//para a gera��o da matriz e uma fun��o para a verifica��o. De acordo com o 
//retorno da fun��o deve-se imprimir na fun��o main: MATRIZ IDENTIDADE ou MATRIZ N�O E IDENTIDADE.

#include<stdio.h>
#include<time.h>
#define linha 10
#define coluna 10

void preencher(int matriz[linha][coluna]){
	srand(time(NULL));
	int i, j;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			matriz[i][j] = rand()%20;
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
}
int verificar(int matriz[linha][coluna]){
	int i, j;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			if(i == j && matriz[i][j] != 1){
				return 0;
			}
			if(i != j && matriz[i][j] != 0){
				return 0;
			} 
		}
	}
	return 1;
}
int main(){
	int matriz[linha][coluna];
	preencher(matriz);
	if(verificar(matriz) == 1){
		printf("MATRIZ IDENTIDADE");
	}
	else{
		printf("MATRIZ N�O E IDENTIDADE");
	}
	return 0;
}

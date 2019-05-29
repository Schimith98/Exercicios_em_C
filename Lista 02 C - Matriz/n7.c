//7) Fa�a um algoritmo para verificar se uma matriz quadrada 6 x 6 
//gerada aleatoriamente com n�meros de 1 at� 50 � sim�trica. 
//Utilize um procedimento para a gera��o da matriz e uma fun��o para 
//a verifica��o. De acordo com o retorno da fun��o deve-se imprimir 
//na fun��o main: MATRIZ SIMETRICA ou MATRIZ NAO SIMETRICA.

#include<stdio.h>
#include<time.h>

#define linha 6
#define coluna 6

void preencher(int matriz[linha][coluna]){
	srand(time(NULL));
	int i, j;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			matriz[i][j] = rand()%50+1;
		}
	}
}
int verificar(int matriz[linha][coluna]){
	int i, j;
	for(i = 0; i < linha; i++){
		for( j = 0; j < coluna; j++){
			if(matriz[i][j] != matriz[j][i]){
				return 0;
			}
		}
	}
	return 1;
}
int main(){
	int matriz[linha][coluna];
	preencher(matriz);
	if(verificar(matriz) == 1)
		printf("MATRIZ SIMETRICA");
	else
		printf("MATRIZ NAO SIMETRICA");
	return 0;
}


//7) Faça um algoritmo para verificar se uma matriz quadrada 6 x 6 
//gerada aleatoriamente com números de 1 até 50 é simétrica. 
//Utilize um procedimento para a geração da matriz e uma função para 
//a verificação. De acordo com o retorno da função deve-se imprimir 
//na função main: MATRIZ SIMETRICA ou MATRIZ NAO SIMETRICA.

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


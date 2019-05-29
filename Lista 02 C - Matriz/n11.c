//11) Fa�a um algoritmo que verifique se uma dada matriz quadrada 8 x 8 
//gerada aleatoriamente com n�meros de 0 at� 14 � uma matriz triangular inferior. 
//Em uma matriz triangular inferior, todos os elementos acima da diagonal principal 
//s�o iguais a 0. Os elementos da diagonal principal ou abaixo dela podem assumir 
//valores quaisquer. Utilize um procedimento para a gera��o da matriz e uma fun��o para 
//a verifica��o. De acordo com o retorno da fun��o deve-se imprimir na fun��o main: 
//MATRIZ TRIANGULAR INFERIOR ou MATRIZ NAO TRIANGULAR INFERIOR.

#include<stdio.h>
#include<time.h>
#define linha 8
#define coluna 8

void preencher(int matriz[linha][coluna]){
	int i, j;
	srand(time(NULL));
	for(i = 0; i < linha; i ++){
		for(j = 0; j < coluna; j++){
			matriz[i][j] = rand()%15;
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
}

int verificar(int matriz[linha][coluna]){
	int i, j;
	for(i = 0; i < linha; i ++){
		for(j = 0; j < coluna; j++){
			if(i < j && matriz[i][j] != 0){
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
		printf("MATRIZ TRIANGULAR INFERIOR");
	}
	else{
		printf("MATRIZ NAO TRIANGULAR INFERIOR");
	}
	
	return 0;
}

//9) Faça um algoritmo para verificar se uma dada matriz quadrada 10 x 10 
//gerada aleatoriamente com números de 0 até 19 é uma matriz identidade. 
//Em uma matriz identidade, todos os elementos da diagonal principal 
//são iguais a 1 e os demais são iguais a 0. Utilize um procedimento 
//para a geração da matriz e uma função para a verificação. De acordo com o 
//retorno da função deve-se imprimir na função main: MATRIZ IDENTIDADE ou MATRIZ NÃO E IDENTIDADE.

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
		printf("MATRIZ NÃO E IDENTIDADE");
	}
	return 0;
}

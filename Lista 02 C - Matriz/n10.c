//10) Faça um algoritmo que, dadas duas matrizes quadradas A e B de tamanho 6 x 6 
//geradas aleatoriamente com números de 1 até 10, verifique se B é a inversa de A, 
//isto é, se B é igual a A-1 . Se B for a inversa, a multiplicação de A por B resulta 
//em uma matriz identidade. Utilize uma função para verificar se a matriz resultante de 
//A x B é uma matriz identidade e dois procedimentos: um para a geração das matrizes e 
//outro para realizar a multiplicação delas. De acordo com o retorno da função deve-se 
//imprimir na função main: B E INVERSA DE A ou B NAO E INVERSA DE A.
#include<stdio.h>
#include<time.h>
#define linha 6
#define coluna 6

void imprimir(int matriz[linha][coluna]){
	int i, j;
	printf("\n**************************************************\n");
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
}

void preencher
(int matrizA[linha][coluna], int matrizB[linha][coluna]){
	srand(time(NULL));
	int i, j;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			matrizA[i][j] = rand()%10+1;
			matrizB[i][j] = rand()%10+1;
		}
	}
}

void calcular(int matrizA[linha][coluna], int matrizB[linha][coluna], int matrizC[linha][coluna]){
	int i, j, k,aux = 0;
	for(i = 0; i < linha; i ++){
		for(j = 0; j < coluna; j++){
			aux = 0;
			for(k = 0; k < coluna; k++){
				aux += matrizA[i][k] * matrizB[k][j];
			}
			matrizC[i][j] = aux;
		}
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
	int matrizA[linha][coluna], matrizB[linha][coluna], matrizC[linha][coluna];
	
	preencher(matrizA, matrizB);
	imprimir(matrizA);
	imprimir(matrizB);
	calcular(matrizA, matrizB, matrizC);
	imprimir(matrizC);
	if(verificar(matrizC) == 1){
		printf("B E INVERSA DE A");
	}
	else{
		printf("B NAO E INVERSA DE A");
	}
	
	return 0;
}





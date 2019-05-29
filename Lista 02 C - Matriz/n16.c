//16) Fa�a um algoritmo que leia uma matriz de ordem 4 com valores reais 
//e imprima a soma dos valores contidos em sua diagonal secund�ria. 
//Utilize um procedimento para ler a matriz e uma fun��o para realizar a soma. 
//O resultado da soma tem que ser impresso na fun��o main.
#include<stdio.h>
#define linha 2
#define coluna 2

void preencher(float matriz[linha][coluna]){
	int i,j;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			printf("Matriz[%d][%d]:", i, j);
			scanf("%f", &matriz[i][j]);
		}
	}
}

float calcular(float matriz[linha][coluna]){
	int i,j;
	float aux = 0;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			if(i+j == linha -  1){
				aux += matriz[i][j];
			}
		}
	}
	return aux;
}

int main(){
	float matriz[linha][coluna];
	preencher(matriz);
	printf("soma dos valores contidos em sua diagonal secund�ria: %.2f", calcular(matriz));
	
	return 0;
}

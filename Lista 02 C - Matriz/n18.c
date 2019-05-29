//18) Faça um algoritmo que leia uma matriz 3 x 3 de números inteiros. 
//Depois, calcule e armazene na posição i de um vetor de tamanho 3 a soma 
//dos valores da coluna i da matriz (0 = i = 2), imprimindo em seguida o vetor.
//Utilize dois procedimentos: um para ler a matriz e outro para preencher e 
//imprimir o vetor. O vetor também deve ser declarado na função main

#include<stdio.h>
#define linha 3
#define coluna 3

void preencher(int matriz[linha][coluna], int vetor[linha]){
	int i,j;
	for(i = 0; i < linha; i++){
		vetor[i] = 0;
		for(j = 0; j < coluna; j++){
			printf("Matriz[%d][%d]:", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
}
void calcularEimprimir(int matriz[linha][coluna], int vetor[linha]){
	int i, j;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			vetor[j] += matriz[i][j];
		}
	}
	for(i = 0; i < linha; i++){
		printf("%d -", vetor[i]);
	}
}
int main(){
	int matriz[linha][coluna], vetor[linha];
	preencher(matriz, vetor);
	calcularEimprimir(matriz,vetor);
	return 0;
}

//19) Considere uma matriz quadrada de ordem 6 gerada aleatoriamente com números de 1 até 30. 
//Faça um algoritmo que calcule e imprima a soma dos elementos dessa matriz que não pertençam 
//à diagonal principal nem à diagonal secundária. Utilize um procedimento para a geração da matriz 
//e uma função para retornar a soma. A impressão da soma tem que ser na função main.

#include<stdio.h>
#include<time.h>
#define linha 6
#define coluna 6

void preencher(int matriz[linha][coluna]){
	srand(time(NULL));
	int i,j;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			matriz[i][j] = rand()%30+1;
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
}
int calcular(int matriz[linha][coluna]){
	int i, j, aux = 0;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			if(i!=j && i+j!=linha-1){
				aux += matriz[i][j];
			}
		}	
	}
	return aux;
}
int main(){
	int matriz[linha][coluna];
	preencher(matriz);
	printf("soma dos elementos dessa matriz que não pertençam a diagonal principal nem a diagonal secundaria: %d", calcular(matriz));
	
	return 0;
}

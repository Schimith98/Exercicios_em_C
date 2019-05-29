//2) Fa�a um algoritmo para ler pelo teclado uma matriz 3 x 5 
//com valores reais e imprimir quantos valores maiores do que 20
//ela possui. Utilize um procedimento para a leitura da matriz e 
//uma fun��o para fazer o c�lculo. A impress�o da informa��o 
//(quantos valores maiores do que 20) deve ser na fun��o main.

#include<stdio.h>
#define linha 3
#define coluna 5

void preencher(float matriz[linha][coluna]){
	int i, j;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			printf("Matriz[%d][%d]:", i, j);
			scanf("%f", &matriz[i][j]);
		}
	}
}
int verificar(float matriz[linha][coluna]){
	int i, j, aux = 0;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			if(matriz[i][j] > 20){
				aux++;
			}
		}
	}
	return aux;
}
int main(){
	float matriz[linha][coluna];
	preencher(matriz);
	printf("%d", verificar(matriz));
	return 0;
}


//12) Faça um algoritmo para gerar e imprimir uma matriz quadrada A de tamanho 10 x 10, 
//onde seus elementos são: 2.i + 7.j + 2, se i < j; 3.i2 – 1, se i = j ; 4.i3 – 5.j2 + 1, se i > j. 
//Utilize dois procedimentos: um para gerar a matriz e outro para imprimir a matriz.

#include<stdio.h>
#include<math.h>
#define linha 10+1
#define coluna 10+1

void preencher(double matriz[linha][coluna]){
	int i, j;
	for(i = 1; i < linha; i ++){
		for(j = 1; j < coluna; j++){
			if(i < j){
				matriz[i][j] = 2 * i + 7 * j + 2;
			}
			if(i = j){
				matriz[i][j] = 3 * pow(i,2) - 1;
			}
			if(i > j){
				matriz[i][j] = 4 * pow(i,3) - 5 * pow(j,2) + 1;		
			}
		}
	}
}
void imprimir(double matriz[linha][coluna]){
	int i, j;
	for(i = 1; i < linha; i ++){
		for(j = 1; j < coluna; j++){
			printf("%lf\t", matriz[i][j]);
		}
		printf("\n");
	}
}

int main(){
	double matriz[linha][coluna];
	preencher(matriz);
	imprimir(matriz);
	return 0;
}

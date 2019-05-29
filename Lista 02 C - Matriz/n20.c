//20) Faça um algoritmo que leia uma matriz 10 x 3, onde as linhas representam 
//os alunos e as colunas as 3 provas de cada aluno. Em seguida, imprima a maior 
//nota e a menor nota da prova 1, da prova 2 e da prova 3. Utilize dois procedimentos: 
//um para ler a matriz e outro para imprimir as informações.

#include<stdio.h>
#define linha 10
#define coluna 3

void preencher(int matriz[linha][coluna]){
	int i, j;
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			printf("Aluno[%d]prova[%d]:", i+1, j+1);
			scanf("%d", &matriz[i][j]);
		}
	}
}

void imprimir(int matriz[linha][coluna]){
	int i, j, maiorP1 = matriz[0][0], maiorP2 = matriz[0][1], maiorP3 = matriz[0][2];
	int menorP1 = matriz[0][0], menorP2 = matriz[0][1], menorP3 = matriz[0][2];
	for(i = 0; i < linha; i++){
		for(j = 0; j < coluna; j++){
			if(maiorP1 < matriz[i][j] && j == 0){
				maiorP1 = matriz[i][j];
			}
			if(maiorP2 < matriz[i][j] && j == 1){
				maiorP2 = matriz[i][j];
			}
			if(maiorP3 < matriz[i][j] && j == 2){
				maiorP3 = matriz[i][j];
			}
			if(menorP1 > matriz[i][j] && j == 0){
				menorP1 = matriz[i][j];
			}
			if(menorP2 > matriz[i][j] && j == 1){
				menorP2 = matriz[i][j];
			}
			if(menorP3 > matriz[i][j] && j == 2){
				menorP3 = matriz[i][j];
			}
		}
	}
	printf("\n Maior nota p1: %d \n", maiorP1);
	printf("\n Maior nota p2: %d \n", maiorP2);
	printf("\n Maior nota p3: %d \n", maiorP3);
	
	printf("\n Menor nota p1: %d \n", menorP1);
	printf("\n Menor nota p2: %d \n", menorP2);
	printf("\n Menor nota p3: %d \n", menorP3);
}

int main(){
	int matriz[linha][coluna];
	
	preencher(matriz);
	imprimir(matriz);
	
	return 0;
}

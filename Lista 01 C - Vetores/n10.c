//10) Fa�a um algoritmo para ler pelo teclado dois vetores A e B, 
//cada um contendo 15 n�meros inteiros, e em seguida preencher um vetor C,
// sendo que C[i] = 2*A[i] + B[i], onde 0 = i = 14. Utilize tr�s procedimentos: 
//um para ler os elementos dos vetores A e B, outro para preencher o vetor C e 
//um terceiro para imprimir o vetor C ap�s o preenchimento.

#include<stdio.h>

void preencherAeB(int *vetA,int *vetB){
	int i;
	for(i = 0; i < 15; i++){
		printf("Insira um numero para posicao [%d] do vetorA: ", i);
		scanf("%d", &vetA[i]);
		printf("Insira um numero para posicao [%d] do vetorB: ", i);
		scanf("%d", &vetB[i]);
	}
}

void preencherC(int *vetA, int *vetB, int *vetC){
	int i;
	for(i = 0; i < 15; i++){
		vetC[i] = 2 * vetA[i] + vetB[i];
	}
}

void imprimir(int *vetC){
	int i;
	for(i = 0; i < 15; i++){
		printf("\nVetor C posicao: [%d], numero: %d", i, vetC[i]);
	}
}
int main(){
	int vetA[15], vetB[15], vetC[15];
	preencherAeB(vetA, vetB);
	preencherC(vetA, vetB, vetC);
	imprimir(vetC);
	
	return 0;
}


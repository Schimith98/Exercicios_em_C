//11) Considere um vetor A com 50 números inteiros positivos gerados aleatoriamente de 1 a 100. 
//Faça um algoritmo para preencher outros dois vetores B e C, onde o vetor B deve conter apenas 
//os números pares do vetor A e o vetor C deve conter apenas os números ímpares do vetor A. 
//Utilize três procedimentos: um para preencher o vetor A, outro para preencher o vetor B e C, 
//e um terceiro para imprimir os vetores B e C após o preenchimento

#include<stdio.h>
#include<time.h>

void preencherA(int *A){
	int i;
	srand(time(NULL));
	for(i = 0; i < 50; i++){
		A[i] = rand()%100+1;
	}
}

void preencherBeC(int *A, int *B, int *C){
	int i;
	for(i = 0; i < 50; i++){
		if(A[i] % 2 == 0){
			B[i] = A[i];
			C[i] = 0;
 		}
		else{
			C[i] = A[i];
			B[i] = 0;
		}
	}
}

void imprimir(int *B,int *C){
	int i;
	for(i = 0; i < 50; i++){
		printf("\n[%d]B = %d", i, B[i]);
	}
	printf("\n");
	for(i = 0; i < 50; i++){
		printf("\n[%d]C = %d", i, C[i]);
	}
}

int main(){
	int A[50], B[50], C[50];
	preencherA(A);
	preencherBeC(A,B,C);
	imprimir(B,C);
	
	return 0;
}

//7) Faça um algoritmo que leia pelo teclado os 15 números de 
//um vetor do tipo inteiro e imprima na tela o maior elemento desse 
//vetor e a posição em que ele se encontra. Utilize dois procedimentos: 
//um para preencher o vetor e outro para imprimir as informações. Obs.: 
//Caso o maior elemento apareça mais de uma vez no vetor, a posição a ser impressa é a do último maior elemento.

#include<stdio.h>

void preencher(int *vet){
	int i;
	for(i = 0; i < 15; i++){
		printf("Insira um numero para posicao [%d] do vetor: ", i);
		scanf("%d", &vet[i]);
	}
}

void imprimir(int * vet){
	int i, maior = vet[0], posicao = 0;
	for(i= 0; i < 15; i++){
		if(vet[i] >= maior){
			maior = vet[i];
			posicao = i;
		}
	}
	printf("Maior elemento: %d, posicao: [%d]", maior, posicao);
}

int main(){
	int vet[15];
	
	preencher(vet);
	imprimir(vet);
	
	return 0;
}

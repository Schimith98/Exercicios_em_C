//2) Fa�a um algoritmo para ler (pelo teclado) um vetor com 15 elementos inteiros e
//depois inverter este mesmo vetor, sem usar um vetor auxiliar. Utilize tr�s
//procedimentos: um para preencher o vetor, outro para invert�-lo e o terceiro para
//imprimi-lo ap�s a invers�o.
//Obs.: O objetivo desse exerc�cio n�o � imprimir o vetor em ordem inversa, mas
//sim colocar os elementos dentro do vetor em ordem inversa.

#include<stdio.h>

void preencher(int *vet){
	int i;
	for(i = 0; i < 15; i++){
		printf("Insira um numero para posicao [%d] do vetor: ", i);
		scanf("%d", &vet[i]);
	}
}
void inverter(int *vet){
	int i, j, aux = 0;
	for(i = 0, j = 14; i < j;i++, j--){
		aux = vet[i];
		vet[i] = vet[j];
		vet[j] = aux;
	}
}
void imprimir(int *vet){
	int i;
	for(i = 0; i < 15; i++){
		printf("Vetor posicao[%d] : %d \n", i, vet[i]);
	}
}

int main(){
	int vet[15];
	
	preencher(vet);
	inverter(vet);
	imprimir(vet);
	
	return 0;
}

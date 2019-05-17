//6) Faça um algoritmo para preencher um vetor (de tamanho 10) 
//com elementos gerados aleatoriamente de 1 a 20, de maneira que não 
//sejam inseridos números iguais no vetor, ou seja, todos os números contidos no 
//vetor têm que ser distintos. Utilize dois procedimentos: um para preencher o vetor e outro para imprimi-lo.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void preencher(int *vet){
	int i, j, aux;
	srand(time(NULL));
	for(i = 0; i < 10; i++){
		aux = rand()% 20 + 1;
		for(j = 0; j <= i; j++){
			if(aux != vet[j])
				vet[i] = aux;
			else
				i = j;	
		}
	}
}

void imprimir(int *vet){
	int i;
	for(i = 0; i < 10; i++){
		printf("\nvetor:[%d] / numero: %d", i, vet[i]);
	}
}

int main(){
	int vet[10];
	preencher(vet);
	imprimir(vet);
	
	return 0;
}

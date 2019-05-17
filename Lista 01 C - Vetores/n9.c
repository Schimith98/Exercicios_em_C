//9) Considere um vetor com 20 números inteiros positivos gerados 
//aleatoriamente de 0 a 49. Faça um algoritmo que imprima na tela a 
//quantidade de números pares e de números ímpares presentes no vetor. 
//Utilize dois procedimentos: um para preencher o vetor e outro para imprimir as informações

#include<stdio.h>

void preencher(int *vet){
	int i;
	srand(time(NULL));
	for(i = 0; i < 20; i++){
		vet[i] = rand()% 50;
	}
}

void imprimir(int *vet){
	int i, pares = 0, impares = 0;
	for(i = 0; i < 20; i++){
		if(vet[i] % 2 == 0){
			pares++;
		}
		else{
			impares++;
		}
	}
	printf("Pares: %d, Impares: %d", pares, impares);
}

int main(){
	int vet[20];
	
	preencher(vet);
	imprimir(vet);
	
	return 0;
}

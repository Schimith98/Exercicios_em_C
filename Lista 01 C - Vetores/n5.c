//5) Faça um algoritmo para ler (pelo teclado) os 10 elementos de um vetor do 
//tipo inteiro e verificar se os mesmos formam uma progressão aritmética. 
//Utilize um procedimento para preencher o vetor e uma função para a verificação. 
//A impressão da informação (se os elementos do vetor formam ou não uma progressão aritmética) deve ser na função main. 

#include<stdio.h>

void preencher(int *vet){
	int i;
	for(i = 0; i < 10; i++){
		printf("Insira um numero para posicao [%d] do vetor: ", i);
		scanf("%d", &vet[i]);
	}
}

int verificar(int *vet){
	int i, razao;
	razao = vet[1] - vet[0];
	for(i = 1; i < 10; i++){
		if(vet[i] != vet[i-1] + razao){
		return 0;
		}
	}
	return 1;
}

int main(){
	int vet[10];
	
	preencher(vet);
	
	if(verificar(vet) == 1)
	printf("Os elementos do vetor formam uma PA");
	else
	printf("Os elementos do vetor NAO formam uma PA");
	
	return 0;
}

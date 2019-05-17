//4) Faça um algoritmo para ler (pelo teclado) os 25 elementos de um vetor do 
//tipo inteiro e verificar se o mesmo está em ordem crescente. Utilize um procedimento 
//para preencher o vetor e uma função para a verificação. A impressão da informação 
//(se o vetor está ou não em ordem crescente) deve ser na função main.


#include<stdio.h>

void preencher(int *vet){
	int i;
	for(i = 0; i < 25; i++){
		printf("Insira um numero para posicao [%d] do vetor: ", i);
		scanf("%d", &vet[i]);
	}
}

int verificar(int *vet){
	int i;
	for(i = 1; i < 25; i++){
		if( vet[i] < vet[i-1])
		return 0;
	}
	return 1;
}

int main(){
	int vet[25];
	
	preencher(vet);
	
	if(verificar(vet) == 1)
	printf("O vetor esta em ordem crescente");
	else
	printf("O vetor NAO esta em ordem crescente");
	
	return 0;
}

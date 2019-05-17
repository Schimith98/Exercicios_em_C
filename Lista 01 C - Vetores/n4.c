//4) Fa�a um algoritmo para ler (pelo teclado) os 25 elementos de um vetor do 
//tipo inteiro e verificar se o mesmo est� em ordem crescente. Utilize um procedimento 
//para preencher o vetor e uma fun��o para a verifica��o. A impress�o da informa��o 
//(se o vetor est� ou n�o em ordem crescente) deve ser na fun��o main.


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

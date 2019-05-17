//1) Faça um algoritmo para verificar se um número real lido pelo teclado encontra-se ou
//não em um vetor com 30 números reais (também lido pelo teclado). Utilize um
//procedimento para preencher o vetor e uma função para verificar se o número pertence
//ou não ao vetor. A impressão desta informação (se o número pertence ou não ao vetor)
//deve ser na função main.
#include<stdio.h>


int calcular(float *vet, float aux){
	int i;
	for(i = 0; i < 30; i++){
		if(vet[i] == aux)
		return 1;
	}
	return 0;
}

void preencherVetor(float *vet){
	int i;
	for(i = 0; i < 30; i++){
		printf("Insira um numero para posicao [%d] do vetor: ", i);
		scanf("%f", &vet[i]);
	}
}
int main(){
	float vet[30], aux; 
	int i;
	
	preencherVetor(vet);
	
	printf("Digite um numero para verificacao: ");
	scanf("%f", &aux);
	
	if(0 == calcular(vet, aux))
		printf("numero nao encontrado");
	else
		printf("numero encontrado");
		
	return 0;
}

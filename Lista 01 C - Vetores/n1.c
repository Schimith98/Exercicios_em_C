//1) Fa�a um algoritmo para verificar se um n�mero real lido pelo teclado encontra-se ou
//n�o em um vetor com 30 n�meros reais (tamb�m lido pelo teclado). Utilize um
//procedimento para preencher o vetor e uma fun��o para verificar se o n�mero pertence
//ou n�o ao vetor. A impress�o desta informa��o (se o n�mero pertence ou n�o ao vetor)
//deve ser na fun��o main.
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

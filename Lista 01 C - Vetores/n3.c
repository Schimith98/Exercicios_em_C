//3) Considere um vetor com 40 n�meros inteiros positivos gerados aleatoriamente de
//1 a 100. Fa�a um algoritmo para verificar o n�mero de vezes que um n�mero inteiro
//positivo n lido pelo teclado aparece neste vetor. O programa tamb�m deve informar em
//quais posi��es (�ndices) do vetor o n�mero aparece, caso ele perten�a ao vetor. Utilize
//dois procedimentos: um para preencher o vetor e outro para realizar a verifica��o.
//Obs. 1: O seu programa deve verificar primeiro quantas vezes o n�mero n
//aparece no vetor. Depois, se ele aparecer alguma vez no vetor, imprimir as posi��es que
//ele aparece. Se ele n�o pertencer ao vetor, seu programa deve imprimir: �N�mero n�o
//pertence ao vetor�

#include<stdio.h>

void preencher(int *vet){
	int i;
	srand(time(NULL));
	for(i = 0; i < 40; i++){
		vet[i] = rand()% 100 + 1;
		printf("_%d", vet[i]);
	}
}

void verificar(int *vet, int num){
	int  i, cont = 0;
	for(i = 0; i < 40; i++){
		if(vet[i] == num){
			cont++;
		}
	}
	if(cont > 0){
		printf("O numero %d aparece %d vezes nas seguintes posicoes:", num, cont);
		for(i = 0; i < 40; i++){
			if(vet[i] == num)
				printf(" [%d]", i);
		}
	}
	else
		printf("o numero %d nao pertence ao vetor", num);	
}

int main(){
	int vet[40], num;

	preencher(vet);
	
	printf("\nDigite um numero para verificacao: ");
	scanf("%d", &num);
	
	verificar(vet, num);
	
	return 0;
}

//3) Considere um vetor com 40 números inteiros positivos gerados aleatoriamente de
//1 a 100. Faça um algoritmo para verificar o número de vezes que um número inteiro
//positivo n lido pelo teclado aparece neste vetor. O programa também deve informar em
//quais posições (índices) do vetor o número aparece, caso ele pertença ao vetor. Utilize
//dois procedimentos: um para preencher o vetor e outro para realizar a verificação.
//Obs. 1: O seu programa deve verificar primeiro quantas vezes o número n
//aparece no vetor. Depois, se ele aparecer alguma vez no vetor, imprimir as posições que
//ele aparece. Se ele não pertencer ao vetor, seu programa deve imprimir: “Número não
//pertence ao vetor”

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

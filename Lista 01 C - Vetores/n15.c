//15) Faça um algoritmo que leia algumas palavras (com no máximo 10 caracteres) 
//e calcule quantas palavras Sim e Nao foram digitadas. O programa deve parar de 
//ler as palavras quando o usuário digitar Fim. O seu programa também deve informar
//a porcentagem de cada uma (Sim e Nao) em relação ao total de palavras digitadas.

#include<stdio.h>
#include<string.h>

int main(){
	
	char palavra[10];
	int i = 0, j, sim = 0, nao = 0, qtdPalavras = 0;
	float Psim, Pnao;
	
	do{
		printf("digite uma palavra:");
		scanf("%s", palavra);
		qtdPalavras++;
		for(j = 0; j < strlen(palavra); j++){
			palavra[j] = tolower(palavra[j]);
		}
		if(palavra[0] == 's' && palavra[1] == 'i' && palavra[2] == 'm'){
			sim++;
		}
		if(palavra[0] == 'n' && palavra[1] == 'a' && palavra[2] == 'o'){
			nao++;
		}
		if(palavra[0] == 'f' && palavra[1] == 'i' && palavra[2] == 'm'){
			i = 1;
		}
	}while(i == 0);
	Psim = 100 * sim / qtdPalavras;
	Pnao = 100 * nao / qtdPalavras;
	
	printf("\nQuantidade de Sim: %d, Porcentagem: %f", sim, Psim);
	printf("\nQuantidade de Nao: %d, Porcentagem: %f", nao, Pnao);
	
	return 0;
}

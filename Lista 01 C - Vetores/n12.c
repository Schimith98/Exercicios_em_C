//12) Faça um algoritmo que leia uma frase (considerando os espaços) 
//com no máximo 50 caracteres e imprima esta mesma frase sem os espaços.
//Faça dois procedimentos: um para ler a frase e outro para a impressão da mesma sem os espaços.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void preencher(char *frase){
	printf("digite uma frase para ser impressa sem espaco:");
	scanf(" %[^\n]s", frase);
}
void imprimir(char *frase){
	int i = 0;
	while(i < strlen(frase)){
		if(frase[i] == ' '){
			i++;
		}
		else{
			printf("%c", frase[i]);
			i++;
		}
	}
}
int main(){
	char frase[50];
	
	preencher(frase);
	imprimir(frase);
	
	return 0;
}

//12) Fa�a um algoritmo que leia uma frase (considerando os espa�os) 
//com no m�ximo 50 caracteres e imprima esta mesma frase sem os espa�os.
//Fa�a dois procedimentos: um para ler a frase e outro para a impress�o da mesma sem os espa�os.

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

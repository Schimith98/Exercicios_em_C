//13) Faça um algoritmo que leia uma frase (considerando os espaços) 
//com no máximo 100 caracteres e calcule o número de vogais e consoantes
//existentes na frase. Faça dois procedimentos: um para ler a frase e 
//outro para imprimir as informações. Obs.: Lembre-se que o usuário 
//pode digitar letras maiúsculas e minúsculas.

#include<stdio.h>
#include<string.h>

void preencher(char *frase){
	printf("digite uma frase:");
	scanf(" %[^\n]s", frase);
}

void imprimir(char *frase){
	int i, vogal = 0, consoante = 0;;
	for(i = 0; i < strlen(frase); i ++){
		frase[i] = tolower(frase[i]);
		if(
		frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || 
		frase[i] == 'o' || frase[i] == 'u' || frase[i] == 'y'){
			vogal++;
		}
		else if(
		frase[i] == 'b' || frase[i] == 'c' || frase[i] == 'd' || 
		frase[i] == 'f' || frase[i] == 'g' || frase[i] == 'h' || 
		frase[i] == 'j' || frase[i] == 'k' || frase[i] == 'l' || 
		frase[i] == 'm' || frase[i] == 'n' || frase[i] == 'p' || 
		frase[i] == 'q' || frase[i] == 'r' || frase[i] == 's' || 
		frase[i] == 't' || frase[i] == 'v' || frase[i] == 'x' || 
		frase[i] == 'w' || frase[i] == 'z'){
			consoante++;
		}
	}
	printf("\nVogais: %d \nConsoantes: %d", vogal, consoante);	
}

int main(){
	char frase[100];
	
	preencher(frase);
	imprimir(frase);
	
	return 0;
}


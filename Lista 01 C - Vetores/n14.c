//14) Faça um algoritmo que leia uma frase (considerando os espaços) 
//com no máximo 30 caracteres e verifique se uma letra (lida pelo teclado na função main) 
//existe na frase. Faça um procedimento para ler a frase e uma função para a verificação. 
//A impressão da informação tem que ser feita na função main. 
//Obs.: Lembre-se que o usuário pode digitar letras maiúsculas e minúsculas.

#include<stdio.h>
#include<string.h>

void preencher(char *frase){
	printf("digite uma frase:");
	scanf(" %[^\n]s", frase);
}

int verificar(char *frase, char letra){
	int i;
	for(i = 0; i < strlen(frase); i++){
		frase[i] = tolower(frase[i]);
		if(frase[i] == letra){
			return 1;
		}
	}
	return 0;
}

int main(){
	char frase[30], letra;
	preencher(frase);
	
	printf("Insira a letra para vetificacao:");
	scanf(" %c", &letra);
	letra = tolower(letra);
	
	if(verificar(frase, letra) == 1){
		printf("a letra %c esta na frase", letra);
	}
	else{
		printf("A letra %c NAO esta na frase", letra);
	}
	
	return 0;
}


//14) Fa�a um algoritmo que leia uma frase (considerando os espa�os) 
//com no m�ximo 30 caracteres e verifique se uma letra (lida pelo teclado na fun��o main) 
//existe na frase. Fa�a um procedimento para ler a frase e uma fun��o para a verifica��o. 
//A impress�o da informa��o tem que ser feita na fun��o main. 
//Obs.: Lembre-se que o usu�rio pode digitar letras mai�sculas e min�sculas.

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


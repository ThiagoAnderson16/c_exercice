#include <stdio.h>
#include <string.h>

int main(){
	char palavra[501] = {0};

	int a, r, total_palavras, tamanho_palavra;

	a = r = total_palavras = tamanho_palavra = 0;

	FILE *arquivo;

	arquivo = fopen("resumo.txt", "r");

	if(arquivo == NULL){
		printf("Erro ao abrir!\n");
	} else {

		while(fscanf(arquivo, "%s", palavra) != EOF){
			if(palavra[0] == 'A' || palavra[0] == 'a'){
				a++;
			} 

		}

	}


	return 0;
}
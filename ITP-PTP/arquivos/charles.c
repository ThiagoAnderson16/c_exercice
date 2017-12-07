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

			tamanho_palavra = strlen(palavra);

			if(palavra[0] == 'A' || palavra[0] == 'a'){
				a++;
			} 

			if(palavra[tamanho_palavra - 1] == 'R' || palavra[tamanho_palavra - 1] == 'r'){
				r++;
			}

			total_palavras++;

		}

	}

	fclose(arquivo);

	//printf("%d, %d, %d\n", total_palavras, a, r);

	if(total_palavras > 10){
		if(a >= 3 && r >= 2){
			printf("Nota: 10\n");
		} else if(a >= 2 && r >= 2){
			printf("Nota: 7.5\n");
		} else {
			printf("Nota: 5\n");
		}
	} else {
		printf("Nota: 2\n");
	}


	return 0;
}
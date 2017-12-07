#include <stdio.h>
#include <string.h>
int main(){

	char palavra[10];
	int cont = 0, qtd_palavras, tam_palavra, two = 0;

	FILE *arquivo;

	arquivo = fopen("irmao.txt", "r");

	if(arquivo == NULL){
		printf("erro ao abrir\n");
	} else {

		while(!feof(arquivo)){
			if(cont == 0){
				fscanf(arquivo, "%s", palavra);
				qtd_palavras = palavra[0]-48;
			} else {
				fscanf(arquivo, "%s", palavra);

				tam_palavra = (int) strlen(palavra);
				
				if(tam_palavra > 3){
					printf("3\n");
				} else {
					if(palavra[0] == 't') two++;
					if(palavra[1] == 'w') two++;
					if(palavra[2] == 'o') two++;

					if(two >= 2){
						printf("2\n");
						two = 0;
					} else {
						printf("1\n");
					}
					
				}

			}

			cont++;
		}

	}

	fclose(arquivo);


	return 0;
}
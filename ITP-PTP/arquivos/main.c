#include <stdio.h>

void entrada(){
	FILE *arquivo = fopen("txt.txt", "w+");

	if(arquivo == NULL){
		printf("Erro na abertura\n");
	} else {

		for (int i = 0; i < 10; i++){
			fprintf(arquivo ,"linha: %d\n", i);
		}

	}

	fclose(arquivo);
}


int main(){

	entrada();
	
	return 0;
}
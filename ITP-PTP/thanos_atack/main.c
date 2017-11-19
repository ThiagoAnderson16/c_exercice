#include <stdio.h>
#include <stdlib.h>

char* leitura_arquivo(int cont){

	char temp[100];
	char* linha;
	int i = 0;

	FILE *arquivo = fopen("resultados.txt", "r");

	if(arquivo == NULL){
		printf("Erro na abertura\n");
	} else {
		while (!feof(arquivo)) {
        	fgets(temp, 100, arquivo);
        	if(i == cont){
        		break;
        	}
			i++;
		}
		
	}

	fclose(arquivo);
	linha = temp;	

	return linha;

}

int main(){

	char* vetor[100];
	char* vetor2[100];

	
	vetor[0] = leitura_arquivo(1);

	vetor2[0] = leitura_arquivo(3);

	printf("%s \n", vetor[0]);

	printf("%s \n", vetor2[0]);
	
	
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

void leitura_imagem(){
	char tipo[2], comentario[100];
	int largura, altura, j, tam_vetor = 1, temp;
	int* vetor;
	int* aux;
	FILE *arquivo = fopen("img/Catarata.ppm", "r");

	vetor = malloc(tam_vetor*sizeof(int));

	if(arquivo == NULL){
		printf("Erro na abertura\n");
	} else {
		int i = 1;
		while (!feof(arquivo)) {
			if(i == 1){
				fgets(tipo, 100, arquivo);
			} else if (i == 2){
				fgets(comentario, 100, arquivo);
			} else if (i == 3){
				fscanf(arquivo, "%d %d", &largura, &altura);
				//break;
			} else {
				tam_vetor++;
				vetor = realloc(vetor, sizeof(int)*tam_vetor);

            	fscanf(arquivo, "%d", &temp);
            	vetor[i-4] = temp;
			}
			i++;
		}
	}

	fclose(arquivo);

	printf("%s", tipo);
	printf("%s", comentario);
	printf("%d %d\n", largura, altura);

	for(int i = 2311150; i<2311157; i++){
		printf("%d\n", vetor[i]);
	}

	free(vetor);	

}

int main(){

	leitura_imagem();
	
	return 0;
}
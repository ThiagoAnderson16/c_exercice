#include <stdio.h>
#include <stdlib.h>

// Criando a estrutura da imagem. Inicialmente só precisarei desses 3 valores.
typedef struct imagem{
	int largura;
	int altura;
	int *vetor_pixels;
} Imagem;


// Função que lerá o arquivo da imagem.
// Passo tudo como ponteiro para poder ter acesso no main.
int *leitura_imagem(int *largura, int *altura){
	
	char tipo[2], comentario[100]; // Primeira e segunda linha do arquivo PPM
	int j, tam_vetor = 1, temp; // Contadores
	int* vetor_pixels;
	// Abrindo o arquivo e dizendo que é apenas para leitura
	FILE *arquivo = fopen("img/Catarata.ppm", "r");

	// Alocando inicialmente o tamanho do ponteiro
	vetor_pixels = malloc(tam_vetor*sizeof(int));

	if(arquivo == NULL){
		printf("Erro na abertura\n");
	} else {
		// Esse 'i' representará as linhas do meu arquivo PPM
		int i = 1;
		while (!feof(arquivo)) {

			if(i == 1){
				// Na linha 1 teremos apenas a informação do tipo da imagem 
				fgets(tipo, 100, arquivo);
			} else if (i == 2){
				// Na linha 2 teremos apenas um comentário lá
				fgets(comentario, 100, arquivo);
			} else if (i == 3){
				// Na linha 3 temos a largura e altura da imagem
				fscanf(arquivo, "%d %d", largura, altura);
				//break;
			} else {
				// Na linha 4 começa os pixels da imagem
				tam_vetor++;
				vetor_pixels = realloc(vetor_pixels, sizeof(int)*tam_vetor);

            	fscanf(arquivo, "%d", &temp);
            	vetor_pixels[i-4] = temp;
			}

			i++;
		}
	}

	// Fechando o arquivo
	fclose(arquivo);

	// Esses prints são apenas para minha verificação. Se o que foi programado está correto
	printf("%s", tipo);
	printf("%s", comentario);
	printf("%d %d\n", largura[0], altura[0]);

	for(int i = 0; i<5; i++){
		printf("%d\n", vetor_pixels[i]);
	}

	// Não dei o free no vetor pois quero poder acessá-lo no main
	//free(vetor_pixels);

	return vetor_pixels;

}

int main(){
	int pixels, largura = 0, altura = 0;

	// Inicializando ("instanciando") a imagem
	Imagem imagem = {largura, altura, &pixels};

	// Passando os valores para função de leitura de imagem
	imagem.vetor_pixels = leitura_imagem(&imagem.largura, &imagem.altura);

	// Imprimindo os valores para veriicar se realmente posso tratá-los a partir da estrutura definida
	printf("%d %d %d\n", imagem.largura, imagem.altura, imagem.vetor_pixels[2]);

	/* 
	Problema encontrado: nessa print acima, em "imagem.vetor_pixels[0]", o valor esperado 
	era o primeiro pixels da imagem PPM lida, porém o que é impresso é 0.
	*/
	
	return 0;
}
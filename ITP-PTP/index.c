#include <stdio.h>

int main() {
	int linhas = 18, colunas = 30;
	int predios[linhas][colunas], predios_new[linhas][colunas];

	int inicio, fim, altura, qtd_predios; 

	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){

			predios[i][j] = 0;

		}
	}

	//Quantidade de prédios
    scanf("%d", &qtd_predios);

	//for de 0 até qtd de prédios
    for (int k = 0; k<qtd_predios; k++){

        //lendo cada prédio
        scanf("%d %d %d", &inicio, &fim, &altura);

        //CRUCIAL: Comparando se o tamanho do prédio inserido é maior do que está gravado no vetor "predios[]" na casa 'i'
        for (int i = inicio; i <= fim; i++){
            predios[(18-altura)][i] = 1;
            //predios[maximo - altura][variacao de i]
        }

    }

    //primeiro print
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){

			printf("%d", predios[i][j]);

		}
		printf("\n");
	}

	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){

			predios_new[i][j] = 0;

		}
	}

	// verificando onde aparece o primeiro 1 na coluna. Quando aparecer, coloque na nova coluna, na posiçao [i][j] e dê break
	// para que o 1 seguinte da coluna n seja colocado tbm na nova coluna.
	for(int j = 0; j < colunas; j++){
		for(int i = 0; i < linhas; i++){

			if(predios[i][j] == 1){
				predios_new[i][j] = 1;
				break;
			}
		}
	}

	printf("\n");
	printf("\n");
	printf("\n");

	// segundo print
	for(int i = 0; i < linhas; i++){
		for(int j = 0; j < colunas; j++){

			printf("%d", predios_new[i][j]);

		}
		printf("\n");
	}



	return 0;
}
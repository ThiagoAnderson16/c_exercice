#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char words[101], *tubaroes[] = {"Tubarão Branco", "Tubarão Martelo", "Tubarão Touro", "Tubarão Baleia", "Tubarão Lixa", "Tubarão Frade", "Tubarão Tigre", "Tubarão Cabeça-Chata", "Tubarão Serra", "Tubarão de Pontas Negras", "Tubarão Raposa", "Tubarão Mako", "Tubarão Bruxa", "Tubarão Azul"};

	int fotos[101] = {0}, qtd_fotos = 0, especies = 0;

	
    while(scanf("%100s", words) != EOF){
       fotos[qtd_fotos] = atoi(words);
       qtd_fotos++;
    }



	for (int i = 0; i < qtd_fotos; i++){
		for (int j = i+1; j < qtd_fotos - i; j++){
			if(fotos[i] == fotos[j]){
				fotos[j] = 0;
			}
		}
		if(fotos[i] != 0){
			especies++;
		}
	}


	// Bubble sort ;) 
	for (int fim = qtd_fotos-1; fim > 0; --fim) {
        for (int i = 0; i < fim; ++i) {
            if (fotos[i] > fotos[i+1]) {
                int aux = fotos[i];
                fotos[i] = fotos[i+1];
                fotos[i+1] = aux;
            }
        }
    }


	printf("%d espécies diferentes.\n", especies);
	for (int i = 0; i < qtd_fotos; i++){
		if(fotos[i] != 0){
			printf("%s\n", tubaroes[fotos[i]-1]);
		}
	}


    

    return 0;

}
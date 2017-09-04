#include <stdio.h>

int main() {

	// Matriz com 1 linha 30 colunas:
	/*
    int juncao_predios[1][30];

    int qtd_predios, i;

    scanf("%s\n", qtd_predios);


    for (i = 0; i<qtd_predios; i++){

    	int predio[1][3];
    	scanf("%s\n", qtd_predios);

    }

    */
	
    char nome[1][25];
	
	strcpy(nome[0], "s04/09/2017");


    char **mat = split(nome[0],'/');

    for(i=0;i<3;i++){
	   printf("%s\n",mat[i]);
    }


    return 0;
}
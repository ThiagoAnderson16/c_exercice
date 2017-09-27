#include <stdio.h>

int main() {
	
	char vingadores[6][7] = {0}, letra;
	int cont, maior = 0;


	for (int i = 0; i < 6; i++){ 
		for (int j = 0; j < 7; j++){ 
			scanf("%c ", &vingadores[i][j]);
		}
	}

	for (int i = 0; i < 6; i++){
		cont = 0; 
		for (int j = 0; j < 7; j++){ 
			if(vingadores[i][j] == 'W'){
				cont++;
			}
			if(cont > maior){
				maior = cont;
				letra = vingadores[i][0];
			}
		}
	}

	switch(letra){
		case 'C':
			printf("%capitão América é o vencedor\n", letra);
			break;
		case 'G':
			printf("%cavião Arqueiro é o vencedor\n", letra);
			break;
		case 'T':
			printf("%chor é o vencedor\n", letra);
			break;
		case 'I':
			printf("Homem de Ferro é o vencedor\n");
			break;
		case 'H':
			printf("%culk é o vencedor\n", letra);
			break;
		case 'V':
			printf("%ciúva Negra é a vencedora\n", letra);
			break;
	}

	return 0;
}
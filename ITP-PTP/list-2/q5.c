#include <stdio.h>

int main() {
	int n_jogadas, vida_dragao, dano, casa;
	char *nomes[] = {"Alyson", "Isaac", "Rafaela", "Wellington", "Salgado", "Careca"};
	char letra;

	scanf("%d %d", &n_jogadas, &vida_dragao);
	getchar();

	for (int i = 0; i < n_jogadas; i++){
		
		scanf("%c %d", &letra, &dano);
		getchar();

		if(dano > 14){
			switch(letra){
				case 'A':
					vida_dragao -= 10;
					casa = 0;
					break;
				case 'I':
					vida_dragao -= 10;
					casa = 1;
					break;
				case 'R':
					vida_dragao -= 6;
					casa = 2;
					break;
				case 'W':
					vida_dragao -= 8;
					casa = 3;
					break;
				case 'S':
					vida_dragao -= 4;
					casa = 4;
					break;
				case 'C':
					vida_dragao -= 1;
					casa = 5;
					break;
			}
		}

		if(vida_dragao <= 0){
			break;
		}

	}

	if(vida_dragao <= 0){
		printf("%s derrotou o dragão!\n", nomes[casa]);
	} else {
		printf("Casa caiu!\n");
	}


	return 0;
	
}
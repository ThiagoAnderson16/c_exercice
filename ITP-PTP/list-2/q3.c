#include <stdio.h>

int main() {

	int qtd_dias = 31, ano;

	scanf("%c ", &vingadores[i][j]);

	for (int i = 1; i <= 12; i++){ 
		
		switch(i){
			case 1:
				printf("\nJANEIRO\n");
				break;
			case 2:
				printf("\n\nFEVEREIRO\n");

				break;
			case 3:
				printf("\n\nMARÇO\n");
				break;
			case 4:
				printf("\n\nABRIL\n");
				qtd_dias = 30;
				break;
			case 5:
				printf("\n\nMAIO\n");
				break;
			case 6:
				printf("\n\nJUNHO\n");
				qtd_dias = 30;
				break;
			case 7:
				printf("\n\nJULHO\n");
				break;
			case 8:
				printf("\n\nAGOSTO\n");
				break;
			case 9:
				printf("\n\nSETEMBRO\n");
				qtd_dias = 30;
				break;
			case 10:
				printf("\n\nOUTUBRO\n");
				break;
			case 11:
				printf("\n\nNOVEMBRO\n");
				qtd_dias = 30;
				break;
			case 12:
				printf("\n\nDEZEMBRO\n");
				break;
		}

		
		for (int j = 1; j <= qtd_dias; j++){
			if(j%7 == 0){
				printf("%d\n", j);	
			} else {
				if(j < 10){
					printf("%d  ", j);
				} else {
					printf("%d ", j);
				}

			}
		}


	}

	printf("\n\n");
	

	

	return 0;
}
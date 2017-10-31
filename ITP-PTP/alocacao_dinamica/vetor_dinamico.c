#include <stdio.h>
#include <stdlib.h>

int main(){

	int tam_vetor = 2;
	int* vetor = malloc(tam_vetor*sizeof(int));
	int* aux = malloc(tam_vetor*sizeof(int));

	for(int i = 0; i < 5; i++){
		
		if(i >= tam_vetor){
			tam_vetor++;
			aux = malloc(tam_vetor*sizeof(int));

			for(int j = 0; j <= i; j++){
				aux[j] = vetor[j];
			}

			vetor = aux;
		}


		printf("Meu vetor: ");
		for(int j = 0; j <= i; j++){
			printf("%d ", vetor[j]);
		}
		

		scanf("%d", &vetor[i]);

		printf("%d\n", sizeof(vetor));
	}

	return 0;
}

#include <stdio.h>

int main(){

	int qtd_leds[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
	char numeros_leds[20] = {0};
	int repeticoes, cont = 0;

	scanf("%d", &repeticoes);


	for(int i = 0; i < repeticoes; i++){
		scanf("%s", numeros_leds);

		for (int j = 0; j<20; j++){
			if(numeros_leds[j] != 0){
				switch(numeros_leds[j]){
					case '0':
						cont += 6;
						break;
					case '1':
						cont += 2;
						break;
					case '2':
						cont += 5;
						break;
					case '3':
						cont += 5;
						break;
					case '4':
						cont += 4;
						break;
					case '5':
						cont += 5;
						break;
					case '6':
						cont += 6;
						break;
					case '7':
						cont += 3;
						break;
					case '8':
						cont += 7;
						break;
					case '9':
						cont += 6;
						break;
				}
			} else {
				break;
			}
		}

		printf("%d leds\n", cont);
		cont = 0;

	}

	return 0;
}
#include <stdio.h>

int main() {

	int val;
	char letra;

	scanf("%d %c", &val, &letra);

	if(val%2 == 1){
		if(letra == 'B'){
			printf("Bem me quer!\n");
		} else {
			printf("Mal me quer...\n");
		}
	} else {
		if(letra == 'B'){
			printf("Mal me quer...\n");
		} else {
			printf("Bem me quer!\n");
		}
	}

	return 0;
}
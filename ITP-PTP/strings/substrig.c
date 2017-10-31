#include <stdio.h>

int main(){

	char nome[50] = {0}, nominho[50] = {0};
	int valor_i = 0;
	bool esta = false;

	printf("%s", nome);
	printf("%s", nominho);

	for (int i = 0; i < 50; i++){
		valor_i = i
		for (int j = 0; j < 50; j++){
			if(nominho[j] == nome[i]){
				esta = true;
				break;
			} else {
				break;
			}
		}
	}

	return 0;
}
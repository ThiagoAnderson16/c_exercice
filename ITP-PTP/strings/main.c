#include <stdio.h>

int main(){

	char string[50] = {'s', 't', 'r', 'i', 'g', 'g', '\0'};

	printf("%s\n", string);


	for (int i = 0; i<6; i++){
		printf("%c\n", string[i]);
	}

	return 0;
}
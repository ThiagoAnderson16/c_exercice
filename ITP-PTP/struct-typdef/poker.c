#include <stdio.h>

int main(){
	char num[5], naipe[5];

	for(int i=0; i<5; i++){
		scanf("%c%c ", &num[i], &naipe[i]);	
	}

	for (int i = 0; i < 5; i++){
		printf("%c-%c\n", num[i], naipe[i]);
	}
	

	return 0;
}
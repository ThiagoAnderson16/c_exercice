#include <stdio.h>

int main(){

	char string[5][50] = {'0', '0', '0', '\0'};;

	for (int i = 0; i<6; i++){
		string[i] = 'a\0';
	}

	return 0;
}
#include <stdio.h>

int main(){

	char a_str[50] = {'c', 'a', 'b', '\0'}, b_str[50] = {'a', 'n', 'a', '\0'};
	char c_str[50] = {'0', '0', '0', '0', '0', '0', '\0'}; 

	
	for (int i = 0; i < 3; i++){
		c_str[i] = a_str[i];
	}

	
	for (int i = 0; i < 3; i++){
		c_str[i+3] = b_str[i];
	}
	
	printf("%s\n", c_str);

	return 0;
}
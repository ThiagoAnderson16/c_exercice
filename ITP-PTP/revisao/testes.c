#include <stdio.h>

int main(){
		int a = 4;
		int *b;
		b = &a;

		printf("%d\n", a);
		printf("%p\n", b);

		*b = a;

		printf("%p\n", b);
}
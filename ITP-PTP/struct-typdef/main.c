#include <stdio.h>

int main(){

	struct aluno{
		int idade;
		char sexo;
	};

	struct aluno new_Felipe = {20, 'F'};
	struct aluno new_Davi = {19, 'F'};

	printf("%c %d\n", new_Felipe.sexo, new_Felipe.idade);
	// F

	typedef struct turma{
		int numero;
		char campos[5];
	} Turma;

	Turma new_turma = {4401, "IFZN\0"};

	printf("%s\n", new_turma.campos);


	return 0;
}
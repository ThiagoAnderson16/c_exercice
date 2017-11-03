#include <stdlib.h>
#include <stdio.h>

int main(){
    int** imagem;
    int altura, largura;
    int i;

    scanf("%d %d", &altura, &largura);

    imagem = (int**) malloc(sizeof(int*) * altura);

    for(i=0; i<altura; i++){
        imagem[i] = (int*) malloc(sizeof(int)*largura);
    }

    return 0;
}

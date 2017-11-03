#include <stdio.h>
#include <stdlib.h>

/* Ah os ponteiros :)*/

int main(){
    int* vetor;
    int* aux;
    int vetor2[200];
    int tam_vetor = 2;
    int i, j;

    // sizeof imprime o tamanho certo, porque o vetor estático (tamanho definido) tem seu tamanho atribuído em tempo de compilação!
    //Quer dizer que ele está alocado na pilha, não na heap. Então sizeof funciona
    //Quando usamos ponteiros, o sizeof só retorna o tamanho do ponteiro, sempre! Não funciona como no caso dos vetores estáticos
    //Ou seja, sempre 4 ou 8 bytes (dependendo se o sistema operacional é 32 ou 64 bits), o tamanho necessário para guardar um endereço.
    //Vetores alocados dinamicamente na heap, a gente tem que fazer o controle do tamanho na mão mesmo!
    printf("Tamanho Vetor 2: %d\n", sizeof(vetor2));

    vetor = malloc(tam_vetor*sizeof(int));

    for(i=0; i<5; i++){
        if(i >= tam_vetor){
            tam_vetor++;
            //Então o realloc tava funcionando, o que tava bagunçando era o free no final
            vetor = realloc(vetor, sizeof(int)*tam_vetor);

            //Versão com malloc
            //Nesse caso, precisamos do auxiliar porque o uso do malloc faria a criação da nova área sem salvar os valores anteriores
            /*aux = malloc(sizeof(int)*tam_vetor);

            for(j=0; j<tam_vetor; j++){
                aux[j] = vetor[j];
            }

            vetor = aux;*/
        }

        scanf("%d", &vetor[i]);

        printf("Meu vetor: ");
        for(j=0; j<=i; j++){
            printf("%d ", vetor[j]);
        }
        printf("\n");

        printf("Tamanho do vetor: %d\n", sizeof(vetor)); //sempre o mesmo tamanho, o tamanho do ponteiro
    }

    //Limpando a memória quando terminar
    free(aux);
    free(vetor);

    return 0;
}

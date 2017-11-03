#include <stdio.h>
#include <stdlib.h>

/* Ah os ponteiros :)*/

int main(){
    int* vetor;
    int* aux;
    int vetor2[200];
    int tam_vetor = 2;
    int i, j;

    // sizeof imprime o tamanho certo, porque o vetor est�tico (tamanho definido) tem seu tamanho atribu�do em tempo de compila��o!
    //Quer dizer que ele est� alocado na pilha, n�o na heap. Ent�o sizeof funciona
    //Quando usamos ponteiros, o sizeof s� retorna o tamanho do ponteiro, sempre! N�o funciona como no caso dos vetores est�ticos
    //Ou seja, sempre 4 ou 8 bytes (dependendo se o sistema operacional � 32 ou 64 bits), o tamanho necess�rio para guardar um endere�o.
    //Vetores alocados dinamicamente na heap, a gente tem que fazer o controle do tamanho na m�o mesmo!
    printf("Tamanho Vetor 2: %d\n", sizeof(vetor2));

    vetor = malloc(tam_vetor*sizeof(int));

    for(i=0; i<5; i++){
        if(i >= tam_vetor){
            tam_vetor++;
            //Ent�o o realloc tava funcionando, o que tava bagun�ando era o free no final
            vetor = realloc(vetor, sizeof(int)*tam_vetor);

            //Vers�o com malloc
            //Nesse caso, precisamos do auxiliar porque o uso do malloc faria a cria��o da nova �rea sem salvar os valores anteriores
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

    //Limpando a mem�ria quando terminar
    free(aux);
    free(vetor);

    return 0;
}

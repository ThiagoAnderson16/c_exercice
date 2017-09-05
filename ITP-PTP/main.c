#include <stdio.h>

int main() {

    int tam = 30;
    int predios[tam], i, j, qtd_predios, inicio, fim, altura;

    // Atribuindo 0 a todos os elementos do vetor
    for(i = 0; i<tam; i++){
        predios[i] = 0;
    }

    // for(i = 0; i<tam; i++){
    //     printf("%d\n", predios[i]);
    // }

    //Quantidade de prédios
    scanf("%d", &qtd_predios);

    //for de 0 até qtd de prédios
    for (i = 0; i<qtd_predios; i++){

        //lendo cada prédio
        scanf("%d %d %d", &inicio, &fim, &altura);

        //CRUCIAL: Comparando se o tamanho do prédio inserido é maior do que está gravado no vetor "predios[]" na casa 'i'
        for (j = inicio; j <= fim; j++){
            if(predios[j] < altura){
                predios[j] = altura;
            }
        }

    }

     for(i = 0; i<tam; i++){
        
        printf("%d ", predios[i]);
    }
    
    printf("\n");

    for(i = 0; i<tam; i++){

        if(predios[i] != predios[i+1]){

            if(predios[i] < predios[i+1]){
                printf("%d %d ", (i+1), predios[i+1]);
            } else {
                printf("%d %d ", i, predios[i+1]);
            }
            
        }
        
        // printf("%d ", predios[i]);
    }



    return 0;
}
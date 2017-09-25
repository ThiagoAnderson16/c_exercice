#include <stdio.h>

int main() {

    int tam = 5000;
    int predios[tam], i, j, qtd_predios, inicio, fim, altura;

    // Atribuindo 0 a todos os elementos do vetor
    for(i = 0; i<tam; i++){
        predios[i] = 0;
    }

    //Quantidade de prédios
    scanf("%d", &qtd_predios);

    //for de 0 até qtd de prédios
    for (i = 0; i<qtd_predios; i++){

        //lendo cada prédio
        scanf("%d %d %d", &inicio, &fim, &altura);

        //CRUCIAL: Comparando se o tamanho do prédio inserido é maior do que está gravado no vetor "predios[]" na casa 'i'
        for (j = inicio; j < fim; j++){
            if(predios[j] < altura){
                predios[j] = altura;
            }
        }

    }


    for(i = 0; i<tam-1; i++){
        if(predios[i] != predios[i+1]){

            if(i > 2){
                if(predios[i] < predios[i+1]){
                    printf("%d %d ", (i+1), predios[i+1]);
                } else {
                    printf("%d %d ", (i+1), predios[i+1]);
                }
            } else {
                if(predios[i] < predios[i+1]){
                    printf("%d %d ", (i+1), predios[i+1]);
                } else {
                    printf("%d %d ", i, predios[i+1]);
                }
            }

        }
    }

    printf("\n");

    return 0;
}
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// COMPILAR COMO: gcc -o main *.c -lm

int main() {
    int x;
    printf ("Digite o número da questão: ");
    scanf("%d", &x);

    switch (x){
        case 1:
            questao1();
            break;
        case 2:
            questao2();
            break;
        case 3:
            questao3();
            break;
        case 4:
            questao4();
            break;
        case 5:
            questao5();
            break;
        case 6:
            questao6();
            break;
        case 7:
            questao7();       
            break;
        case 8:
            questao8();       
            break;
        case 9:
            questao9();       
            break;
        case 10:
            questao10();       
            break;
        case 11:
            questao11();
            break;
        case 12:
            questao12();
            break;
        case 13:
            questao13();
            break;
    }
    
    return 0;
}

int questao13(){
    char x[100];
 
    printf("Capital do Brasil: ");
    scanf("%s",x);

}

int questao12(){
    float n1, n2, media;
    printf("n1: ");
    scanf("%f", &n1);
    printf("n2: ");
    scanf("%f", &n2);
    media = (n1+n2)/2;
    if(media > 7){
        printf("AP\n");
    } else if(media > 3){
        printf("RP\n");
    } else {
        printf("PF\n");
    }
}

int questao11(){
    /*
    int x, raiz_inteira;
    float raiz;
    printf("x: ");
    scanf("%d", &x);
    raiz = sqrt(x);
    raiz_inteira = (int) raiz;
    
    if(raiz - raiz_inteira > 0) {
        printf("NÃO é inteiro\n");
    } else {
        printf("É inteiro\n");
    }*/
}

int questao10(){
    int x;
    printf("x: ");
    scanf("%d", &x);
    if(x > 10){
        x = x/10;
        if(x%2 == 0){
            printf("Número da dezena é par.\n");
        } else {
            printf("Número da dezena é ímpar.\n");
        }
    } else {
        printf("Número sem dezena.\n");
    }
   
}

int questao9(){
    int x;
    printf("x: ");
    scanf("%d", &x);
    if(x < 20){
        printf("menor do que 20\n");
    } else if(x == 20){
        printf("é igual a 20\n");
    } else {
        printf("é menor que 20\n");
    }
}

int questao8(){
    /*
    int x;
    printf("x: ");
    scanf("%d", &x);
    if(x > 0){
        printf("%f\n", sqrt(x));
    } else {
        printf("%d\n", (x*x));
    }
    */
}

int questao1(){
    int x;
    printf("x: ");
    scanf("%d", &x);
    if(x>20){
        printf("%d\n", x);
    }
}

int questao2(){
    int x, y;
    
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    
    if((x+y) > 10){
        printf("%d\n", (x+y));
    }
}

int questao3(){
    int x;
    
    printf("x: ");
    scanf("%d", &x);
    
    if(x%2 == 0){
        printf("par\n");
    } else {
        printf("ímpar\n");
    }
}

int questao4(){
    int x;
    
    printf("x: ");
    scanf("%d", &x);
    
    if(x%5 == 0){
        printf("É divisível por 5\n");
    } else {
        printf("NÃO é divisível por 5\n");
    }
}

int questao5(){
    int x;
    
    printf("x: ");
    scanf("%d", &x);
    
    if((x%5 == 0) && (x%3 == 0)){
        printf("É divisível por 3 e 5\n");
    } else {
        printf("NÃO é divisível por 3 e 5\n");
    }
}

int questao6(){
    int x;
    
    printf("x: ");
    scanf("%d", &x);
    
    if(x%10 == 0){
        printf("É divisível por 10 e consequentemente por 5 e por 2\n");
    } else if  (x%5 == 0){
        printf("É divisível por 5\n");
    } else if(x%2 == 0){
        printf("É divisível por 2\n");
    } else {
        printf("Não é divisível por 10, nem por 5 e nem por 2\n");
    }
}

int questao7(){
    int x;
    printf("x: ");
    scanf("%d", &x);
    if(x>20 && x<90){
        printf("Esta entre 20 e 90\n");
    } else {
        printf("Não está entre 20 e 90\n");
    }
}

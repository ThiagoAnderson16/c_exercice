#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

// COMPILAR COMO: gcc -o main *.c -lm
int questao40(){
    
}

int questao39(){
    
}

int questao38(){
    
}

int questao37(){
    
}

int questao36(){
    
}

int questao35(){
    
}

int questao34(){
    
}

int questao33(){
    
}

int questao32(){
    
}

int questao31(){
    
}

int questao30(){
    
}

int questao29(){
    
}

int questao28(){
    
}

int questao27(){
    
}

void questao26(){

    int aux, i, j, tamanho = 5;
    int vetor[5] = {0, 0, 0, 0, 0};
    printf("Num 1: ");
    scanf("%d", &vetor[0]);
    printf("Num 2: ");
    scanf("%d", &vetor[1]);
    printf("Num 3: ");
    scanf("%d", &vetor[2]);
    printf("Num 4: ");
    scanf("%d", &vetor[3]);
    printf("Num 5: ");
    scanf("%d", &vetor[4]);

    for(j=tamanho-1; j>=1; j--){
        for(i=0; i<j; i++){
            if(vetor[i]>vetor[i+1]){
                    aux=vetor[i];
                    vetor[i]=vetor[i+1];
                    vetor[i+1]=aux;
            }
        }
    }

    printf("Menor: %d\n", vetor[0]);
    printf("Maior: %d\n", vetor[4]);
}

void questao25(){
    int x, y, z, menor, intermediario, maior;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    printf("z: ");
    scanf("%d", &z);
    
    if(x > y){
        if(x > z){
            if(y > z){
                menor = z;
                intermediario = y;
                maior = x;
            } else {
                menor = y;
                intermediario = z;
                maior = x;                
            }
        } else {
            menor = y;
            intermediario = x;
            maior = z;
        }
    } else if(y > x) {
        if(y > z){
            if(x > z){
                menor = z;
                intermediario = x;
                maior = y;
            } else {
                menor = x;
                intermediario = z;
                maior = y;
            }
        } else {
            menor = x;
            intermediario = y;
            maior = z;
        }
    }
}

void questao24(){
    int x, y, z;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    printf("z: ");
    scanf("%d", &z);

    if(x<y){
        if(x<z){
            if(y<z){
                printf("%d,%d,%d\n", z, y, x);
            } else {
                printf("%d,%d,%d\n", y, z, x);
            }
        } else {
            printf("%d,%d,%d\n", y, x, z);
        }
    } else if(y<x){
        if(y<z){
            if(x<z){
                printf("%d,%d,%d\n", z, x, y);
            } else {
                printf("%d,%d,%d\n", x, z, y);
            }
        } else {
            printf("%d,%d,%d\n", x, y, z);
        }

    }
}

void questao23(){
    int x, y, z;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    printf("z: ");
    scanf("%d", &z);
    
    if(x > y){
        if(x > z){
            if(y > z){
               printf("%d,%d,%d\n", z, y, x); 
            } else {
                printf("%d,%d,%d\n", y, z, x); 
            }
        } else {
           printf("%d,%d,%d\n", y, x, z);  
        }
    } else if(y > x) {
        if(y > z){
            if(x > z){
                printf("%d,%d,%d\n", z, x, y);     
            } else {
                printf("%d,%d,%d\n", x, z, y);
            }
        } else {
            printf("%d,%d,%d\n", x, y, z);
        }
    }
}

void questao22(){
    int x, y, z, maior;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    printf("z: ");
    scanf("%d", &z);
    
    if(x > y){
        if(x > z){
            maior = x;
        } else {
            maior = z;
        }
    } else if(y > x) {
        if(y > z){
            maior = y;
        } else {
            maior = z;
        }
    } else {
        maior = z;
    }
}



void questao21(){
    int x, y, z;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    printf("z: ");
    scanf("%d", &z);
    
    if(x > y){
        if(x > z){
            printf("%d\n", x);
        } else {
            printf("%d\n", z);
        }
    } else if(y > x) {
        if(y > z){
            printf("%d\n", y);
        } else {
            printf("%d\n", z);
        }
    } else {
        printf("%d\n", z);
    }
}

void questao20(){
    int x, y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    
    if(x > y){
        printf("%d, %d\n", y, x);
    } else {
        printf("%d, %d\n", x, y);
    }
}

void questao19(){
    int x, y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    
    if(x > y){
        printf("%d, %d\n", x, y);
    } else {
        printf("%d, %d\n", y, x);
    }
}

void questao18(){
    int x, y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    
    if(x < y){
        printf("%d\n", x);
    } else {
        printf("%d\n", y);
    }
}

void questao17(){
    int x, y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    
    if(x > y){
        printf("%d\n", x);
    } else {
        printf("%d\n", y);
    }
}

void questao16(){
    int x, y;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    
    if(x == y){
        printf("Iguais\n");
    } else {
        printf("Diferentes\n");
    }
   
    
}

void questao15(){
    int x, y, a;
    float b;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    
    a = x/y;
    b = (float) x/y;
    
    if ((b-a) > 0){
        printf("Não é inteiro\n");    
    } else {
        printf("É inteiro\n"); 
    }
    
}

void questao14(){
    int x, y, a;
    float b;
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    
    a = x/y;
    b = (float) x/y;
    
    if ((b-a) > 0){
        printf("Não divisível\n");    
    } else {
        printf("É divisível\n"); 
    }
    
}

void questao13(){
    char x[100];
    int i, j;
 
    printf("Capital do Brasil: ");
    scanf("%s", x);
    
    if ((strcmp (x, "brasília") == 0) || (strcmp (x, "BRASÍLIA") == 0)){
        printf("PARABÉNS\n");
    } else {
        printf("ERROU\n");
    }
}

void questao12(){
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

void questao11(){
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
    }
}

void questao10(){
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

void questao9(){
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

void questao8(){
    int x;
    printf("x: ");
    scanf("%d", &x);
    if(x > 0){
        printf("%f\n", sqrt(x));
    } else {
        printf("%d\n", (x*x));
    }
}

void questao1(){
    int x;
    printf("x: ");
    scanf("%d", &x);
    if(x>20){
        printf("%d\n", x);
    }
}

void questao2(){
    int x, y;
    
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    
    if((x+y) > 10){
        printf("%d\n", (x+y));
    }
}

void questao3(){
    int x;
    
    printf("x: ");
    scanf("%d", &x);
    
    if(x%2 == 0){
        printf("par\n");
    } else {
        printf("ímpar\n");
    }
}

void questao4(){
    int x;
    
    printf("x: ");
    scanf("%d", &x);
    
    if(x%5 == 0){
        printf("É divisível por 5\n");
    } else {
        printf("NÃO é divisível por 5\n");
    }
}

void questao5(){
    int x;
    
    printf("x: ");
    scanf("%d", &x);
    
    if((x%5 == 0) && (x%3 == 0)){
        printf("É divisível por 3 e 5\n");
    } else {
        printf("NÃO é divisível por 3 e 5\n");
    }
}

void questao6(){
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

void questao7(){
    int x;
    printf("x: ");
    scanf("%d", &x);
    if(x>20 && x<90){
        printf("Esta entre 20 e 90\n");
    } else {
        printf("Não está entre 20 e 90\n");
    }
}

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
        case 14:
            questao14();
            break;
        case 15:
            questao15();
            break;
        case 16:
            questao16();
            break;
        case 17:
            questao17();
            break;
        case 18:
            questao18();
            break;
        case 19:
            questao19();
            break;
        case 20:
            questao20();
            break;
        case 21:
            questao21();
            break;
        case 22:
            questao22();
            break;
        case 23:
            questao23();
            break;
        case 24:
            questao24();
            break;
        case 25:
            questao25();
            break;
        case 26:
            questao26();
            break;
        case 27:
            questao27();
            break;
        case 28:
            questao28();
            break;
        case 29:
            questao29();
            break;
        case 30:
            questao30();
            break;
        case 31:
            questao31();
            break;
        case 32:
            questao32();
            break;
        case 33:
            questao33();
            break;
        case 34:
            questao34();
            break;
        case 35:
            questao35();
            break;
        case 36:
            questao36();
            break;
        case 37:
            questao37();
            break;
        case 38:
            questao38();
            break;
        case 39:
            questao39();
            break;
        case 40:
            questao40();
            break;
    }
    
    return 0;
}
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

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
    }
    
    return 0;
}

int questao23(){
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

int questao22(){
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



int questao21(){
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

int questao20(){
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

int questao19(){
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

int questao18(){
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

int questao17(){
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

int questao16(){
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

int questao15(){
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

int questao14(){
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

int questao13(){
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


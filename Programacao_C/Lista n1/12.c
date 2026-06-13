/* 12. Faça um programa que imprima os 20 primeiros itens da sequência de Fibonacci. Sequência: 0,1,
1, 2, 3, 5, 8, 13, 21, 34, 55, 89...   */

#include <stdio.h>

int main () {

    int y = 1;
    int x = 0;
    int i = 0;
    int z;
    
    printf("\n######################\nEste programa ira calcular e devolver os 20 primeiro itens da sequencia de fibonacci!\n");
    printf("\nSequencia: ");

    while (i < 20) {

        if (i<19){
            printf("%d,",x);
        } else {
            printf("%d.",x);
        }

        z = x + y;
        x = y;
        y = z;
        i++;

    }


    printf("\n");
    printf("\n");
    getchar();
    return 0;
}


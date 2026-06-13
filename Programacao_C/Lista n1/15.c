//Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200;

#include <stdio.h>

int main () {

    int x = 101;

    printf("\n######################\nEste programa gera e retorna os numeros impares entre 100 e 200.\n");
    printf("\nSequencia: ");



    while (x < 200) {

    if (x == 199) {
        printf("%d.",x);
   } else {
        printf("%d,",x);
    }

    x += 2;

    }

    getchar();
    return 0;
}
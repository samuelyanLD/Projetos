/*
Escreva um algoritmo que calcule a média dos números digitados pelo usuário, se eles forem
pares. Termine a leitura se o usuário digitar zero (0);
*/

#include <stdio.h>

int main () {

    int x;
    int soma = 0;
    int i = 1;

    printf("\n######################\nEste programa calcula a media dos numeros pares que forem digitados, caso zero seja digitado o programa calcula o resultado.\n");
    printf("Digite os valores desejados: [0 para parar] [x y]  ");
    
    do {
    
    scanf("%d",&x);

        if (x % 2 == 0 && x != 0) {
            soma = (x + soma)/i;
            i++;
        }

    } while (x != 0);

    printf("A media dos valores pares digitados eh de: %d",soma);

    getchar();
    getchar();
    return 0;
}
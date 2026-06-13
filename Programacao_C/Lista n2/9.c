/*
Fazer um programa para ler 5 valores e em seguida, mostrar a posição onde se entram o maior e o menor valor.
*/

#include <stdio.h>

int main () {
    
    int x[5],maior,menor,vmaior,vmenor;

    printf("/////////////\nEste programa registra 5 numeros e retorna a posicao onde o maior e o menor valor se encontram.\n");
    printf("Digite os 5 numeros: [x y z...]  ");

    for (int i = 0; i < 5; i++) {

        if (scanf("%d",&x[i]) != 1) { 
            printf("Valor digitado invalido!");
            return 0;
        }

        if (i == 0) {
            maior = x[i];
            menor = x[i];
            vmaior = i;
            vmenor = i;
        }

        if (maior < x[i]) {
            maior = x[i];
            vmaior = i;
        }
        
        if (menor > x[i]) {
            menor = x[i];
            vmenor = i;
        }

    }

    printf("O menor valor eh %d e se encontra na posicao %d\nO maior valor eh %d e se encontra na posicao %d",menor,vmenor + 1,maior,vmaior + 1);

    return 0;
}
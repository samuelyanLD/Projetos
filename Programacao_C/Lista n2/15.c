/*
Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz e, ao
final, escrever a localização (linha e coluna) ou uma mensagem de “não encontrado”.
*/

#include <stdio.h>

int main () {
    
    int x[5] [5],valor,linha [25],coluna [25],h = 0;

    printf("/////////////\nEste programa registra uma matriz 5x5, apos o usuario escolher\num valor x o programa retorna a localizacao desse valor na matriz.\n");

    printf("\nDigite a matriz\n");
    for (int i = 0; i < 5; i++ ) {
        
        printf("Digite os 5 valores da linha %d: ",i + 1);

        for (int j = 0; j < 5; j++) {
            if (scanf("%d",&x[i][j]) != 1) {
                printf("Valor digitado invalido");
            return 0;
            }
        }
    }

    printf("Digite agora o numero que deseja ser encontrado: ");
    scanf("%d",&valor);

    for (int i = 0; i < 5; i++ ) {
        for (int j = 0; j < 5; j++) {
            if (x [i] [j] == valor) {
                linha [h] = i;
                coluna [h]= j;
                h++;
            } 
        }
    }

    if (h == 0) {
        printf("Numero nao encontrado.");
    } else {
        printf("O numero %d foi encontrado nas posicoes: \n",valor);
        for (int i = 0; i < h; i++) {
            printf("linha %d coluna %d\n",linha [i] + 1, coluna [i] + 1);
        }
    }

    return 0;
}
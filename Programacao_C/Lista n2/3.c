/*
Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado dos componentes deste vetor,
armazenando o resultado em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.
*/

#include <stdio.h>

int main ( ) {

    int x [10],z [10];

    printf("/////////////\nEste programa registra 10 valores inteiros, calcula seu quadrado e os retorna.\n");
    printf("Digite os 10 numeros: [x y z...]  ");
    
    for (int i = 0; i < 10; i++) {
        if (scanf("%d",&x [i]) != 1) {
            printf("O valor %d digitado eh invalido!\n",i);
            return 0;
        }
        z [i] = x [i] * x [i];
    }

    printf("\nValores digitados: ");
    
    for (int i = 0; i < 10; i++) {
        printf("%d ",x[i]);
    }

    printf("\nQuadrado dos valores: ");

    for (int i = 0; i < 10; i++) {
        printf("%d ",z[i]);
    }
    
    getchar();
    getchar();
    return 0;
}   
/*
 Faça um programa que leia um vetor de 5 posições para números reais e, depois, um código inteiro. Se o código for
zero, finalize o programa; se for 1, mostre o vetor na ordem direta; se for 2, mostre o vetor na ordem inversa. Caso,
o código for diferente de 1 e 2 escreva uma mensagem informando que o código e inválido.
*/

#include <stdio.h>

int main () {
    
    int x[5],suite;

    printf("/////////////\nEste programa registra 5 valores um codigo.\nCaso o codigo seja 0 o programa finaliza.\nCaso o codigo seja 1 ele mostra o vetor.\nCaso o codigo seja 2 mostra o vetor na ordem inversa.\nOutros valores nao sao validos.\n");
    printf("Digite os 5 numeros: [x y z...]  ");

    for (int i = 0; i < 5; i++ ) {
        if (scanf("%d",&x[i]) != 1) {
            printf("Valor digitado invalido");
            return 0;
        }
    }

    printf("Digite o codigo: ");
    scanf("%d",&suite);

    switch (suite) {
        case 0:
            printf("Finalizando o programa...");
            break;
        case 1:
            printf("A ordem do vetor digitado fica: ");
                for (int i = 0; i < 5; i++){
                    printf("%d ",x[i]);
                }
            break;
        case 2:
            printf("O vetor digitado na ordem inversa fica: ");
                    for (int i = 4; i > -1; i--){
                    printf("%d ",x[i]);
                }
            break;
        default:
            printf("Opcao invalida!");
            break;
    }

    return 0;
}
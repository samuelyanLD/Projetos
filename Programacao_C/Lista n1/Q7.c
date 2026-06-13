/*
Implemente um código que, dada a idade de uma pessoa, informe se ela tem maioridade
*/

#include <stdio.h>

int main () {

    int idade;

    printf("######################\nEste programa informa se voce possui maioridade.\n");
    
    printf("Digite sua idade: ");
    scanf("%d",&idade);

    if (idade >= 18) {
        printf("Voce eh de maior!");
    } else {
        printf("voce nao eh de maior.");
    }

    return 0;
}
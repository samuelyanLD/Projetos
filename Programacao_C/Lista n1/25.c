/*
Em um concurso de miss, os jurados precisam digitar o nome das 16 candidatas e suas respectivas
notas (0 a 10). Crie um programa que leia estas informações e que, ao final do programa,
apresente apenas o nome e a nota da vencedora.
*/


// evandro to tentando usar isso pra aprender array, nao sei como fazer isso sem array e deixar
// o codigo pequeno


#include <stdio.h>
#include <string.h>

int main () {

// x = qntdade participantes || n [] = nome

    char n [16] [20], nome[20];  //16 espacos no array, cada um com 20 caracteres
    float k [16], t[16];
    int x,nota,p = 0;
    
    printf("\n######################\nEste programa permite que voce digite a quantidade de participantes, \nseus nomes e suas notas, retornando assim a ganhardora\n");

    printf("Quantidade de participantes (max 16): ");
    scanf("%d", &x);

    for (int i = 0; i < x; i++) {
        printf("Nome e nota: ");
        scanf("%s %f", n[i], &k[i]);
    }

    float maior = k[0];
    int indice = 0;

    for (int i = 1; i < x; i++) {
        if (k[i] > maior) {
            maior = k[i];
            indice = i;
        }
    }

    printf("Vencedora: %s com nota %.2f\n", n[indice], maior);

    getchar();
    getchar();
    return 0;
}

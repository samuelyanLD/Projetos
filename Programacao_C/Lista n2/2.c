/*
Faça um programa que lê três palavras do teclado e imprime as três palavras na ordem inversa.
*/

#include <stdio.h>

int main () {

    char p1 [25], p2 [25] , p3 [25];

    printf("/////////////\nEste programa retorna 3 palavras digitas na ordem inversa!\n");
    
    printf("Digite as 3 palavras: [palavra1 palavra 2 palavra 3]  ");
    scanf(" %24s %24s %24s", p1, p2, p3); /*dar um espaco antes ajuda a evitar bug de espaco ou enter (eu acho)
                                                         o %24s ajuda a separar o /0 que ficaria no final do array
                                                         lembrar que string nao precisa de & */

    printf("As palavras sao: %s %s %s",p3,p2,p1);

    return 0;
}
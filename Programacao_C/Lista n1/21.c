/*
Escreva um programa que lê o sexo de uma pessoa. O sexo deverá ser com o tipo de dado
caractere e o programa deverá aceitar apenas os valores “M” ou “F”
*/

#include <stdio.h>
#include <string.h>

int main () {

    char x[1];

    printf("\n######################\nEste programa retorna o seu sexo.\n");
    printf("\nDigite seu genero: [M/F] ");
    scanf(" %c",x);

    if (strcmp(x,"M") == 1 || strcmp(x,"F") == 1 ) {
        
        if ((strcmp(x,"M") == 1 )) {
            printf("Voce eh do sexo masculino!");
        } else {
            printf("Voce eh do sexo feminino!");
        }
    
    } else {
        printf("Caractere digitado invalido!");
    }

    getchar ();
    getchar ();
    return 0;
}

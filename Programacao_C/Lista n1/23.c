/*
23. Escreva um programa que lido um número, calcule e informe o seu fatorial.
Ex.: 5!= 5 * 4 * 3 * 2 * 1 = 120.
*/

#include <stdio.h>

int main () {

    int x;
    int f = 1;
    
    printf("\n######################\nEste programa permite que voce digite um valor e receba seu fatorial.\n");



    printf("Digite o numero: ");
    scanf("%d", &x);

    int i = x;  //deixar aqui pq precisa pegar o valor do x pra dps o i copiar

    while (i != 0) {
        f = f * i;
        i--;
    }

    printf("O fatorial de %d eh %d\n", x, f);

    getchar();
    getchar();
    return 0;
}


 

/* 

i 
numero * i = fatorial
i-- ou i++ 
repetir
somar


    i--;
    if (i == 0) {
        break;
    }
*/   
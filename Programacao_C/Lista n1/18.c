/*
Faça o mesmo que antes, porém, ao invés de ler 10 números, o programa deverá ler e somar
números até que o valor digitado seja zero ( 0 ).
*/

#include <stdio.h>

int main () {

    int x;
    int soma = 0;

    printf("\n######################\nEste programa soma os numeros digitados sendo que digitar 0 resultara em retornar o resultado.\n");
    printf("\nDigite os numeros (0 para parar): ");

    do {

        scanf("%d", &x);
        soma = soma + x;

    } while (x != 0);

    printf("A soma dos numeros resulta em: %d\n", soma);

    getchar ();
    getchar ();
    return 0;
}


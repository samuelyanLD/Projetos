/*
Informe se um número digitado é primo. Caso não for, informe por quais números ele é divisível;
*/

#include <stdio.h>

int main () {

    int x,primo;
    int f = 1;
    
    printf("\n######################\nEste programa analisa se um numero é primo ou nao, caso nao for retorna seus divisores.\n");
    printf("Digite o numero: ");
    scanf("%d",&x);

    if (x <= 1) {
        printf("Nao eh primo\n");
        return 0;
    }

    for (int i = 2; i < x; i++) {
    if (x % i == 0) {   //% eh pra resto de divisao
        primo = 0;
        break;
    }
}

    if (primo)
        printf("Eh primo\n");
    else
        printf("Nao eh primo\n");

    getchar();
    return 0;
}
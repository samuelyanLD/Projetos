/*
27. Digitados dois números (base e expoente –b^e),
 calcule o resultado utilizando apenas
multiplicações;
*/

#include <stdio.h>

int main () {

    int b, e;
    int r = 1,i = 0;

    printf("Digite a base e o expoente: ");
    scanf("%d %d",&b,&e);

    while (i < e) {
        r = r * b;
        i++;
    }

    printf("Resultado: %d\n", r);


    getchar ();
    getchar ();
    return 0;
}
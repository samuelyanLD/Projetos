/*
Faça um algoritmo que escreva na tela os números de um número inicial a um número final. Os
números inicial e final devem ser informados pelo usuário;
*/

#include <stdio.h>

int main () {

    int x,y,z;

    printf("\n######################\nEste programa permite que voce digite um intervalo e receba os numeros presentes no mesmo.\n");
    printf("Digite o intervalo: [x y] ");
    scanf("%d %d",&x,&y);

    printf("\nOs numeros nesse intervalo sao: ");

    if (y < x){
        z = x;
        x = y;
        y = z;
    }

    while (x <= y) {
        
            if (x < y ) {
                printf("%d,",x);
            } else {
                printf("%d.\n",x);
            }

        x++;
    }


    getchar();
    getchar();
    return 0;
}
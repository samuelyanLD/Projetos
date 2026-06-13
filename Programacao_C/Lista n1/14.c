// Escrever um algoritmo que imprima a tabuada de um número informado pelo usuário;

#include <stdio.h>

int main () {

    int x,z,y,h;
    int i = 0;

    printf("\n######################\nEste programa retorna a tabuada (de 10) de um valor digitado\n");
    printf("Digite o numero: ");
    scanf("%d",&x);

    printf("A tabuada de %d eh: \n",x);

    h = x * 10;

    while (i <= 10){
    z = x * i;
    printf("%d * %d = %d\n",x,i,z);
    
    i++;
    }



    getchar();
    getchar();
    return 0;
}
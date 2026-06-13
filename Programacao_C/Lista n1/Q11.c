//  Ler 3 números em qualquer ordem e escrevê-los em ordem crescente.

#include <stdio.h>

int main ( ) {

    int x,y,z,a;

    printf("\n######################\nEste programa permite que voce digite 3 numeros inteiros e os receba em ordem crescente!\n");
    printf("Digite 3 numeros inteiros: [x y z]  ");
    scanf("%d %d %d",&x,&y,&z);


    if (x == y && x == z) {
        printf("Todos os valores digitados são iguais!");
        return 0;
    }




    if (x == y) {
        if (x < z) { // z maior a x e y
            printf("O maior valor eh %d e os valores %d e %d sao os menores e iguais entre si.",z,y,x);
        }
        else {
            printf("Os valores %d e %d sao iguais entre si e maiores que %d.",x,y,z);
        }
        return 0;
    }

    if (x == z) {
        if (x < y) { // y maior a x e z
            printf("O maior valor eh %d e os valores %d e %d sao menores e iguais entre si.",y,z,x);
        }
        else {
            printf("Os valores %d e %d sao iguais entre si e maiores que %d.",x,z,y);
        }
        return 0;
    }

    if (y == z) {
        if (y < x) { // x maior eh maior que y e z
            printf("O maior valor eh %d e os valores %d e %d sao menores e iguais entre si.",x,z,y);
        }
        else {
            printf("Os valores %d e %d sao iguais entre si e maiores que %d.",y,z,x);
        }
        return 0;
    }
    


    
    if (x < y) { // y é maior ou igual a x
        int a = y; 
        int y = x; // X é o maior valor até entao
        int x = a; 
    }

    if (x < z) { // z é maior ou igual a x (que é o maior valor)
        int a = z; 
        int x = z; // X é o maior valor
        int z = a;  
    }

    if (y < z) { // z é maior ou igual a y
        int a = y; 
        int z = y; // X é o maior valor, Y vira o segundo maior e Z o terceiro
        int y = a; 
    }

    printf("O sequencia em ordem crescente fica: %d,%d,%d",x,y,z);


    getchar();
    getchar();
    return 0;
}
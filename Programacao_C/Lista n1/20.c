/*
Escreva um algoritmo que leia valores inteiros e encontre o maior e o menor deles. Termine a
leitura se o usuário digitar zero (0);
*/

#include <stdio.h>

int main () {

    int x,menor,maior;
    int valor = 1;

    printf("\n######################\nEste programa retorna o maior e o menor valor inteiro digitados, digitar 0 apresentara os resultados\n");
    
    printf("Digite os valores: (0 para parar) \n");

    do {

        scanf("%d",&x);

        if (x != 0) {
            
            if (valor) {  // esse valor é pra rodar só uma vez
                menor = x;
                maior = x;
                valor = 0;  // isso vai excluir essa parte do if
            } else { 
                if (x < menor) menor = x;  //quando excluir as variaveis só serao atualizadas por isso aqui
                if (x > maior) maior = x;
            }
        }
    } while (x != 0);

    if (!valor){
        printf("O maior valor eh: %d\n",maior);
        printf("O menor valor eh: %d\n",menor);
    } else {
        printf("Nenhum numero valido foi digitado!");
    }

    getchar ();
    getchar ();
    return 0;
}
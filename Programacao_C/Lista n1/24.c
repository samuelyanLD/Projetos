/* 
24. Escreva um programa que leia um valor correspondente ao número de jogadores de um time de
vôlei. O programa deverá ler uma altura para cada um dos jogadores e, ao final, informar a altura
média do time
  */

#include <stdio.h>

int main () {

    int x,j;
    float y,s, z = 0;
    int i = 0;
    
    printf("\n######################\nEste programa permite que voce digite a quantidade de jogadores de um time e suas alturas, ele retornara a altura media.\n");

    printf("Digite o valor correspondente ao numero de jogadores: ");  //correspondente ao número de jogadores
    scanf("%d",&x);

    if (x <= 0) {
        printf("Numero invalido de jogadores.\n");
        return 0;
    }
 
    i = x;
    j = i;

    printf("Digite a altura dos %d jogadores: [x y z...]  ",j);

    do {

    scanf("%f",&y);

    z = z + y;
    i--;
    } while (i != 0);

    s = z / j;

    printf("A media de altura dos %d jogadores eh de : %.2f ",j,s);


    getchar ();
    getchar ();
    return 0;
}
/* 
. Escrever um programa de computador que leia 10 números inteiros e, ao final, apresente a soma
de todos os números lidos;
*/

#include <stdio.h>

int main () {

    int a,b,c,d,e,f,g,h,i,j,x,y,z;

    printf("\n######################\nEste programa permite que voce digite 10 numeros inteiros e recebe a soma de todos eles.\n");
    printf("\nDigite os 5 primeiros numeros: [x y z ...]  ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    printf("\nDigite os proximos 5 numeros: [x y z ...]  ");
    scanf("%d %d %d %d %d",&f,&g,&h,&i,&j);

    x = (a+b+c+d+e);
    y = (f+g+h+i+j);
    z = x + y;

    printf("A soma dos numeros resulta em: %d",z);

    getchar ();
    getchar ();
    return 0;
}
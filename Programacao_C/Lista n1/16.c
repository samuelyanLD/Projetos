/* Em uma turma há 10 alunos. Cada aluno tem 2 notas.
Um professor precisa calcular a média das duas notas de cada aluno. Crie um programa que resolve este problema. */


#include <stdio.h>
#include <string.h>

int main () {

    float x, y, media[10];
    int h = 0;          //quantidade de alunos
    int i = 0;
    char z[4];

    printf("\n######################\nEste programa permite que voce descubra a media das duas notas de seu aluno.\n");
    printf("\nDigite as duas notas do aluno 1: ");
    scanf("%f %f",&x,&y);

    media[h] = (x + y) / 2;
    h++;

    do  {
        printf("Deseja digitar a nota de mais um aluno? [sim/nao] ");
        scanf("%s", z);
        
        if (strcmp(z, "sim") == 0 && h < 10) {
            printf("Digite as duas notas do %d aluno: ", h+1);
            scanf("%f %f",&x,&y);

            media[h] = (x + y) / 2;
            h++;
        }

    } while (strcmp(z, "sim") == 0 && h < 10);

    printf("\nA media das notas de cada aluno eh:\n");

    while (i < h) {
        printf("Aluno %d: %.2f\n", i+1, media[i]);
        i++;
    }

    getchar();
    return 0;
}
/*
 Crie um programa em C que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes informações sobre
alunos de uma disciplina, sendo todas as informações do tipo inteiro:
• Primeira coluna: número de matrícula (use um inteiro)
• Segunda coluna: média das provas;
• Terceira coluna: media dos trabalhos;
• Quarta coluna: nota final.
Elabore um programa que:
A. Leia as três primeiras informações de cada aluno;
B. Calcule a nota final como sendo a soma da média das provas e da média dos trabalhos;
C. Imprima a matrícula do aluno que obteve a maior nota final (assuma que só existe uma maior nota);
D. Imprima a média aritmética das notas finais
*/

#include <stdio.h>

int main () {

    int x[5][4];
    int maior, matriculaMaior;
    float soma = 0, media;

    printf("///////////////\nEste programa registra respectivamente:\n* O numero de matricula de 5 alunos\n*    A media de suas provas\n*   A media de seus trabalhos\nAo final calcula a nota final como sendo a soma da média das provas e da média\ndos trabalhos, alem de imprimir a media aritmetica das notas finais.");

    for (int i = 0; i < 5; i++) {

        printf("\nAluno %d\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &x[i][0]);

        printf("Media das provas: ");
        scanf("%d", &x[i][1]);

        printf("Media dos trabalhos: ");
        scanf("%d", &x[i][2]);

        x[i][3] = x[i][1] + x[i][2];

        soma = soma + x[i][3];

        if (i == 0) {
            maior = x[i][3];
            matriculaMaior = x[i][0];
        }

        if (x[i][3] > maior) {
            maior = x[i][3];
            matriculaMaior = x[i][0];
        }
    }

    media = soma / 5;

    printf("\nMaior nota final: %d", maior);

    printf("\nMatricula do aluno com maior nota: %d", matriculaMaior);

    printf("\nMedia das notas finais: %.2f", media);

    return 0;
}
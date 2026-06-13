/*
Faça um programa para corrigir uma prova com 10 questões de múltipla escolha (a, b, c, d). Cada questão vale um
ponto. Primeiro solicite ao usuário que digite o gabarito, depois peça para digitar as respostas dos alunos.
Calcule e escreva: A nota do aluno e se ele foi aprovado (média 7).
*/

/*
solicitar o gabarito
digitar resposta do aluno
retornar nota do aluno e se foi aprovado
*/

#include <stdio.h>

int main () {

    char gabarito[10],resposta[10];
    int alunos,nota;

    printf("/////////////\nEste programa exige o gabarito com as correcoes e o gabarito da prova de 1 (ou mais) alunos.\nApos isso retorna se o aluno foi aprovado (media 7).");

    printf("\nDigite o gabarito da prova (a b c d):\n");

    for (int i = 0; i < 10; i++) {

        printf("Questao %d: ", i + 1);

        scanf(" %c", &gabarito[i]);
    }

    printf("\nDeseja corrigir a prova de quantos alunos? ");

    scanf("%d", &alunos);

    for (int i = 0; i < alunos; i++) {

        nota = 0;

        printf("\nAluno %d\n", i + 1);

        for (int j = 0; j < 10; j++) {

            printf("Resposta da questao %d: ", j + 1);

            scanf(" %c", &resposta[j]);

            if (resposta[j] == gabarito[j]) {
                nota++;
            }
        }

        printf("\nNota do aluno: %d\n", nota);

        if (nota >= 7) {
            printf("Situacao: APROVADO\n");
        }
        else {
            printf("Situacao: REPROVADO\n");
        }
    }

    return 0;
}
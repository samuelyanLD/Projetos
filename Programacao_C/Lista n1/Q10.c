/*
 Ler 4 notas de um aluno. Fazer a média e informar “Aprovado” caso seja maior ou igual a 7. Caso
seja menor que 7, deve-se solicitar a nota da avaliação de recuperação e fazer média novamente.
*/
#include <stdio.h>
#include <math.h>

int main () {

    printf("#########################\nEste programa permite que voce digite suas 4 notas e descubra se passou na respectiva matéria.");

    float n1,n2,n3,n4,r,calculo,calculo_r;

    printf("\nDigite suas notas: [w x y z] ");
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);

    calculo = ceil(n1+n2+n3+n4)/4;

    if (calculo >= 7) {
        printf("Voce foi aprovado com a nota de :%.2f. ",calculo);
    } else {
        printf("Voce nao foi aprovado, digite a nota de sua recuperacao: ");
        scanf("%f",&r);

        calculo_r = ceil(n1+n2+n3+n4+r)/5;

        if (calculo_r >= 7 ){ 
            printf("Com a recuperacoa voce foi aprovado com a nota de %.2f. ",calculo_r);
        } else {
            printf("Com a nota de %.2f mesmo com a recuperacao voce nao foi aprovado.",calculo_r);
        }
    }

    return 0;
}
/*
Implemente um código para aprovar empréstimo bancário. O código deve pedir 3 informações:
valor do empréstimo, número de parcelas e salário do solicitante. 
Aprovar empréstimo caso o valor das parcelas represente no máximo 30%do salário do solicitante
*/

#include <stdio.h>

int main () {

    float emprestimo,salario,conta,conta2;
    float porcentagem = 30;
    int parcelas

    printf("##########################\nEste programa permite saber se seu emprestimo sera aprovado.\n");

    printf("Primeiro, digite o valor do emprestimo e o numero de parcelas: ");
    scanf("%f %d",&emprestimo,&parcelas);
    
    printf("Agora digite o valor de seu salario: ");
    scanf("%f",&salario);

    conta = salario * (porcentagem/100);
    conta2 = emprestimo / parcelas;

    if (conta2 <= conta){
        printf("Voce pode solicitar esse emprestimo!\n");
    } else if (parcelas <= 0) {
    printf("Numero de parcelas invalido.\n");
    return 0;
    }else  {
        printf("Voce nao pode solicitar esse emprestimo.\n");
    }

    return 0;
}

if (parcelas <= 0) {
    printf("Numero de parcelas invalido.\n");
    return 0;
}
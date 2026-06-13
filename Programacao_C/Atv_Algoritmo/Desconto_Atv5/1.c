/*
Contexto: Uma loja deseja calcular o total a ser pago por um cliente, levando em consideração o valor dos produtos comprados, a quantidade de cada produto e o desconto aplicado.

Atividade:
Crie uma função chamada "calcularTotal" que recebe como parâmetros o valor de cada produto (float), 
a quantidade de cada produto (int) e o desconto aplicado (float). 
Essa função deve calcular e retornar o total a ser pago pelo cliente, considerando o valor dos produtos, a quantidade e o desconto. 
Considere que os valores e as quantidades dos produtos são armazenados em arrays.

No programa principal, crie um array "valores" para armazenar os valores dos produtos e um array 
"quantidades" para armazenar as quantidades de cada produto. Preencha esses arrays com valores de sua escolha.

Solicite ao usuário que informe o valor do desconto a ser aplicado.

Chame a função "calcularTotal" passando como argumentos os arrays "valores" e "quantidades" e o valor do desconto informado pelo usuário.

Exiba na tela o total a ser pago pelo cliente.
*/

#include <stdio.h>

float calcularTotal(float valores[], int quantidades[], float desconto, int tamanho) {

    float total = 0;

    for(int i = 0; i < tamanho; i++) {

        total = total + (valores[i] * quantidades[i]);
    }

    total = total - desconto;

    return total;
}

int main() {

    int quantidadeProdutos;

    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &quantidadeProdutos);

    float valores[quantidadeProdutos];
    int quantidades[quantidadeProdutos];

    for(int i = 0; i < quantidadeProdutos; i++) {

        printf("\nProduto %d\n", i + 1);

        printf("Digite o valor do produto: ");
        scanf("%f", &valores[i]);

        printf("Digite a quantidade comprada: ");
        scanf("%d", &quantidades[i]);
    }

    float desconto;

    printf("\nDigite o valor do desconto: (em reais) ");
    scanf("%f", &desconto);

    float totalFinal;

    totalFinal = calcularTotal(
        valores,
        quantidades,
        desconto,
        quantidadeProdutos
    );

    printf("\nTotal a pagar: R$ %.2f\n", totalFinal);

    return 0;
}
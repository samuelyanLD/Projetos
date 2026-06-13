/*
Criar um menu de opções de um banco com as seguintes opções:

1 - Mostrar Saldo

2 - Depositar Dinheiro

3 - Sacar  Dinheiro

4 - Transferir Dinheiro

5 - Sair

6 - Opção inválida

Começar saldo em R$ 1000,00;
Mostra saldo mostra saldo atual;
Ao depositar dinheiro mostrar novo saldo = saldo atual + valor depositado;
Sacar e transferir dinheiro mostrar novo saldo = saldo atual  -  Valor do saque / Valor da transferência;
Sair = mostra mensagem de muito obrigado e sai do programa;
Opção inválida Caso digite qualquer valor que não esteja no menu;
Não deixar sacar ou transferir valor maior que o saldo atual!
*/

#include <stdio.h>

float menu (int opcao,float saldo) {

    float deposito,saque;

    switch (opcao) {

    case 1:
        printf("\nSeu saldo atual eh igual a: %.2f",saldo);
        break;
    
    case 2:
        printf("\nQuanto deseja Depositar?  ");
        scanf("%f",&deposito);
        saldo = saldo + deposito;
        printf("\nSeu novo saldo eh de %.2f ",saldo);
        break;

    case 3:
        printf("\nQuanto deseja sacar?  ");
        scanf("%f",&saque);
            if (saque > saldo) {
                printf("Voce nao pode sacar mais do que esta atualmente em sua conta!");
                break;
            }
        saldo = saldo - saque;
        printf("\nSeu novo saldo eh de %.2f ",saldo);    
        break;

    case 4:
        printf("\nQuanto deseja tranferir?  ");
        scanf("%f",&saque);
            if (saque > saldo) {
                printf("Voce nao pode sacar mais do que esta atualmente em sua conta!");
                break;
            }
        saldo = saldo - saque;
        printf("\nSeu novo saldo eh de %.2f ",saldo);    
        break;

    case 5:
        printf("\nMuito Obrigado!\nFinalizando o programa...");
        break;
        
    default:
        printf("\nOpcao invalida!\n");
        break;
    }

    return saldo;
}

int main () {

    int opcao;
    float saldo = 1000.00;

    printf("\n//////////////////////////////\n");
    printf("\nMenu de Opcoes - Banco\n");
    printf("\nSaldo inicial = R$ %.2f\n\n", saldo);

    printf("1. Mostrar saldo\n");
    printf("2. Depositar dinheiro\n");
    printf("3. Sacar dinheiro\n");
    printf("4. Transferir dinheiro\n");
    printf("5. Sair\n");

    do  {

        printf("\n\nDigite a opcao desejada: ");
        scanf("%d", &opcao);

        saldo = menu(opcao,saldo);
    
    } while (opcao > 0 && opcao < 5);

    return 0;
}
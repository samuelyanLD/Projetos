/*
Implemente um código que receba três números inteiros e retorne uma destas três mensagens:
• Os três valores são iguais;
• Não há valores iguais; ou
• Há dois valores iguais e um diferente
*/

//Evandro eu achei mais divertido fazer com numero quebrado :)

#include <stdio.h>
#include <stdlib.h>


int main ( ) {

    void pausar() {
    printf("\nPressione Enter para continuar...");
    getchar();
}
    float n1,n2,n3;
    int status,c;

    printf("##########################\nEste programa permite que voce digite 3 numeros e descubra quais sao iguais\n");
    
    while (1){
        printf("Digite os 3 valores [x y z] : ");
        status = scanf("%f %f %f",&n1,&n2,&n3);
            
        if (status != 3) {    
            printf("Valor digitado invalido\n");

            while ((c = getchar()) != '\n' && c != EOF);  // o getchar vai limpar o terminal e o buffer até a primeira quebra de linha dps repetir
            
            pausar() ;                                   
            continue; //esse pause é so pro usuario dar enter antes do programa refazer
            }   
        break;
        }

    if(n1 == n2 && n2 == n3){
        printf("Os tres valores sao iguais!\n");
    } else if (n1 == n2 && n2 != n3) {
        printf("Apenas os dois primeiros valores sao iguais.\n");  //se fizesse um n1==n2||n2==n3||n3==n1 ficaria mais  
    } else if (n1 != n2 && n1 == n3) {                          //organizado mas acho assim mais completo
        printf("Apenas os dois ultimos valores sao iguais.\n");
    } else if (n1 != n2 && n2 != n3) {
        printf("Todos os valores sao diferentes.\n");
    } else {
    printf("Todos os valores sao diferentes.\n");
    }   

    return 0;
}


/* nota pessoal = diferenca do getchar e do system cls
o getchar limpa tudo incluindo o que ta no buffer
o system limpa todo o terminal mas nao mexe no buffer
*/
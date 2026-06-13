/*
f(x) = e ^ x + x

Xi = (a + b) / 2  bissetriz
Xi = (a * F(b) - b * F(a)) / (F(b) - F(a))  falsa posicao

*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void pausar() {
    printf("\nPressione Enter para continuar...\n");
    while (getchar() != '\n'); 
    getchar();
}

int main () {

    int interacoes = 0;
    int interacoes2 = 0;
    float a,b,fa,fb,fx,xi,xif,e,e2;

    while (1) {
        printf("Digite o interavalo inteiro desejado: [x y] ");
        scanf("%f %f",&a,&b);
        
        if (a > b) {
            float temp = a;
            a = b;
            b = temp;
        }   

        fa = exp(a) + a;
        fb = exp(b) + b;
    
        if (fa * fb > 0) {
            printf("Intervalo digitado nao possui raiz! \n");
            pausar();
            continue;
        }
        break;
    }

    float a0 = a;
    float b0 = b;

    printf("\n ########################\nPara o metodo de bissetriz \n");

    do {

        e = fabs(b - a);
        xi = (a + b) / 2;
        fa = exp(a) + a;
        fb = exp(b) + b;
        fx = exp(xi) + xi;

        printf("a = %.3f || b = %.3f || fa = %.3f || fb = %.3f || e = %.4f || xi = %.3f || fx = %.3f \n",a,b,fa,fb,e,xi,fx);

        // se fx e fa têm sinais opostos, a raiz está entre a e xi → substitui b
        if (fx * fa < 0) {
            b = xi;
        } else {  
            a = xi;
        }
        
        ++interacoes;

    } 
    while (e > 0.001 || fabs(fx) > 0.001);

    printf("\n ########################\nPara o metodo de falsa posicao \n");

    a = a0;
    b = b0;

    do {
        fa = exp(a) + a;
        fb = exp(b) + b;
        xif = (a * fb - b * fa) / (fb - fa);
        fx = exp(xif) + xif;
        e2 = fabs(b - a);

        printf("a = %.3f || b = %.3f || fa = %.3f || fb = %.3f || e = %.4f || xi = %.3f || fx = %.3f \n",
                a, b, fa, fb, e2, xif, fx);

        if (fx * fa < 0) {
            b = xif;
        } else {
            a = xif;
        }

        ++interacoes2;
    } 
    while (fabs(fx) > 0.001);

    printf("\nPara Bissetriz o erro esta igual %.3f com %d interacoes.\n",e,interacoes);
    printf("\nPara falsa Posicao |f(x)| = %.6f com %d interacoes.\n",fabs(fx),interacoes2);
    printf("Raiz aproximada (falsa posicao): %.6f\n", xif);
    printf("f(x) = %.6f\n", fx);

    pausar();

    return 0;

}
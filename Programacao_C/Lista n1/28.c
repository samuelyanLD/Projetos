/*
Calcule a soma de todos os números primos existentes entre 1 e 100;
*/

#include <stdio.h>

int main () {

    int s = 0;

    for (int n = 2; n <= 100; n++) {

        int primo = 1;

        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                primo = 0;
            }
        }

        if (primo == 1) {
            s = s + n;
        }
    }

    printf("Soma dos primos: %d\n", s);

    getchar();
    getchar();
    return 0;
}
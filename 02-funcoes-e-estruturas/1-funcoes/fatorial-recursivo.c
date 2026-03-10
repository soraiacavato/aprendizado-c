#include <stdio.h>
#include <stdlib.h>

int fatorial (int num);

int main () {

    int num;

    printf ("========== FATORIAL RECURSIVO ==========\n\n");

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &num);

    if (num < 0) {
        printf ("\nNao existe fatorial de numero negativo.\n\n");
    
    } else {
        printf ("\nO fatorial de %d e: %d\n\n", num, fatorial (num));
    }

    system ("pause");
    return 0;
}

int fatorial (int num) {

    if (num == 0 || num == 1) {
        return 1;

    } else {
        return num * fatorial (num - 1);
    
    }
}
#include <stdio.h>
#include <stdlib.h>

int soma (int a, int b) {
    return a + b;
}

int main () {

    int num1, num2, resultado;

    printf ("========== Calculadora de Soma ==========\n\n");

    printf ("Digite o primeiro numero: ");
    scanf ("%d", &num1);

    printf ("\nDigite o segundo numero: ");
    scanf ("%d", &num2);

    printf ("\n\n");

    printf ("A soma de %d + %d = %d\n\n", num1, num2, soma(num1, num2));


    system ("pause");
    return 0;
}
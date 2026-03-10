#include <stdio.h>
#include <stdlib.h>

float fahrenheit_para_celsius (float fahrenheit);

int main () {

    float celsius, fahrenheit;

    printf ("========== CONVERSOR DE TEMPERATURA ==========\n\n");

    printf ("Digite a temperatura em Fahrenheit: ");
    scanf ("%f", &fahrenheit);

    celsius = fahrenheit_para_celsius (fahrenheit);

    printf ("\nA temperatura em Celsius e: %.2f C\n\n", celsius);

    system ("pause");
    return 0;
}

float fahrenheit_para_celsius (float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}
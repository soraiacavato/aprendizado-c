#include <stdio.h>
#include <stdlib.h>

int soma () {
    int num1, num2, resultado;

    printf ("Digite o primeiro numero: ");
    scanf ("%d", &num1);
    
    printf ("\nDigite o segundo numero: ");
    scanf ("%d", &num2);

    resultado = num1 + num2;

    printf ("\nO resultado da soma de %d + %d = %d\n\n", num1, num2, resultado);
}

int subtracao () {
    int num1, num2, resultado;

    printf ("Digite o primeiro numero: ");
    scanf ("%d", &num1);

    printf ("\nDigite o segundo numero: ");
    scanf ("%d", &num2);

    resultado = num1 - num2;

    printf ("\nO resultado da subtracao de %d - %d = %d\n\n", num1, num2, resultado);
}

int multiplicacao () {
    int num1, num2, resultado;

    printf ("Digite o primeiro numero: ");
    scanf ("%d", &num1);

    printf ("\nDigite o segundo numero: ");
    scanf ("%d", &num2);

    resultado = num1 * num2;

    printf ("\nO resultado da multiplicacao de %d * %d = %d\n\n", num1, num2, resultado);
}

int divisao () {
    int num1, num2, resultado;

    printf ("Digite o primeiro numero: ");
    scanf ("%d", &num1);

    printf ("\nDigite o segundo numero: ");
    scanf ("%d", &num2);

    if (num2 == 0) {
        printf ("\nNao e possivel dividir por zero!\n\n");
        return 0;
    }

    resultado = num1 / num2;

    printf ("\nO resultado da divisao de %d / %d = %d\n\n", num1, num2, resultado);
}


int main () {

    int op;

    printf ("========== CALCULADORA POR FUNÇÕES ==========\n\n");
    
    printf ("Escolha uma operacao:\n");
    printf ("1 - Soma\n");
    printf ("2 - Subtracao\n");
    printf ("3 - Multiplicacao\n");
    printf ("4 - Divisao\n");
    scanf ("%d", &op);

    switch (op) {
        case 1:
            soma ();
            break;
        case 2:
            subtracao ();
            break;
        case 3:
            multiplicacao ();
            break;
        case 4:
            divisao ();
            break;

        default:
            printf ("Escolha uma opcao valida!\n\n");
    }


    system ("pause");
    return 0;
}
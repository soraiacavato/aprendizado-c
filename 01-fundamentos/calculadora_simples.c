#include <stdio.h>
#include <stdlib.h>

int main (){

    // Variáveis

    float x, y, soma, sub, mult, div;

    x = 0;
    y = 0;

    // Boas vindas ao programa e entrada de dados

    printf ("Bem vindo(a) ao programa de calculadora simples\n\n");
    
    printf ("Digite o primeiro numero: ");
    scanf ("%f", &x);

    printf ("Digite o segundo numero: ");
    scanf ("%f", &y);

    // Operações

    soma = x+y;
    sub = x-y;
    mult = x*y;
    div = x/y;

    // Saída de Dados

    printf ("\n\nResultados:\n\n");

    printf ("Adição: %.2f \n", soma);
    printf ("Subtração: %.2f \n", sub);
    printf ("Multiplicação: %.2f \n", mult);

    if (div>0){
        printf ("Divisão: %.2f \n", div);

    } else {
        printf ("Erro, sem divisão por 0.\n");
        
    }


    system("pause");
    return 0;

}
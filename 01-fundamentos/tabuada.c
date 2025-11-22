#include <stdio.h>
#include <stdlib.h>

int main (){

    int numero, i;

    printf ("*** Tabuada *** \n\n");
    printf ("Insira um numero de 0 a 10 para calcular a tabuada: ");
    scanf ("%d", &numero);

    if (numero >= 0 && numero <= 10) {

        for (i = 0; i <= 10; i++) {
            printf ("\n%d x %d = %d", numero, i, numero * i);
        }
    } else {
        printf ("Numero invalido");
    }



    system ("pause");
    return 0;
}
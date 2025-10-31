#include <stdio.h>
#include <stdlib.h>

int main (){

    //Variaveis

    int x, i;

    //Entrada de Dados:

    printf ("***** Contador de 1 a 10 *****\n\n");

    printf ("Insira um numero de 1 a 10: ");
    scanf ("%d", &x);

    printf ("\n\n");

    //Saída de Dados:

    if (x>0){

        for (i=x; i<=10; i++) {

            printf ("%d ", i);
        }
        
    } else {

        printf ("Insira um numero de 1 a 10: ");
        scanf("%d", &x);
    }

    printf ("\n\n");

    system ("pause");
    return 0;
}
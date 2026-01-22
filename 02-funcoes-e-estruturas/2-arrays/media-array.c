#include <stdio.h>
#include <stdlib.h>

int main () {

    // Boas vindas ao programa

    printf ("=== Calculo de Media dos Elementos da Matriz ===\n\n");

    //Declaração e inicialização da matriz 3x3

    int matriz[3][3] = {
        {77, 88, 99},
        {33, 44, 55},
        {22, 66, 11}
    };

    //Exibição da matriz 3x3

    int i, j;
    float soma = 0.0;
    float media;

    for (i = 0; i<3; i++) {
        for (j = 0; j<3; j++) {

            printf ("%d ", matriz[i][j]);
            soma += matriz[i][j];
        }
        printf ("\n");
    };

    //Calculo e exibição da média

    media = soma/(3*3);

    printf ("\n");
    printf ("A media dos elementos da matriz 3x3 e: %.2f\n\n", media);
    

    system ("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main (){

    //Boas vindas ao programa
    printf ("=== Somando duas matrizes ===\n\n");

    //Declaração e inicialização das matrizes

    int matriz1[5][5] = {
        {2, 4, 6, 8, 10},
        {3, 6, 9, 12, 15},
        {4, 8, 12, 16, 20},
        {5, 10, 15, 20, 25},
        {6, 12, 18, 24, 30}
    };

    int matriz2[5][5] = {
        {10, 20, 30, 40, 50},
        {50, 40, 30, 20, 10},
        {10, 10, 10, 10, 10},
        {20, 20, 20, 20, 20},
        {30, 0, 30, 0, 30}
    };

    int matriz3[5][5];

    //Exibição das matrizes

    printf ("Exibindo a matriz 1:\n\n");

    int i, j;

    for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
            
            printf ("%d ", matriz1[i][j]);
        }
        printf ("\n");
    };

    printf ("\n\n");
    printf ("Exibindo a matriz 2: \n\n");

    for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){

            printf ("%d ", matriz2[i][j]);
        }
        printf ("\n");
    };

    printf ("\n\n");

    //Soma resultante das 2 matrizes 5x5

    printf ("O resultado da soma das duas matrizes 5x5 e a matriz: \n\n");

    for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];

            printf ("%d ", matriz3[i][j]);

        }
        printf ("\n");
    };

    system ("pause");
    return 0;
}
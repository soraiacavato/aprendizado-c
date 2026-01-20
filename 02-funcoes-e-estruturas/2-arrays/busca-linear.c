#include <stdio.h>
#include <stdlib.h>

int main () {

    int target = 0;
    int found = 0;
    int i, j;

    //Boas vindas e entrada de dado

    printf ("=== Bem vindo(a) ao programa de busca na matriz ===\n\n");

    printf ("Digite um numero inteiro de 1 a 50 para busca-lo na matriz: ");
    scanf ("%d", &target);
    getchar ();

    //Declaração e inicialização da matriz 3x3

    int matriz[3][3] = {
        {6, 26, 14},
        {8, 31, 15},
        {40, 19, 38}
    };

    //Impressão na tela do resultado da busca

    printf ("\n\n");

    for (i = 0; i<3; i++){
        for (j = 0; j<3; j++){

            if (matriz[i][j] == target) {
                printf ("Numero %d encontrado! Posicao (%d, %d)\n\n", target, i, j);
                found = 1;
                break;
            }
        }
        if (found == 1) {
            break;
        }
    };

    if (found == 0){
        printf ("Numero %d nao encontrado na matriz!\n\n", target);
    }

    system ("pause");
    return 0;
}
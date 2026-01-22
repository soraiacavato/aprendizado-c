#include <stdio.h>
#include <stdlib.h>

int main () {

    //Boas vindas ao programa 

    printf ("*** Bem vindo(a) ao cacador de maior e menor elemento ***\n\n");

    //Declaração e inicialização do vetor

    int tamanho;
    int vetor[tamanho];
    int i;

    printf ("Qual o tamanho do vetor? ");
    scanf ("%d", &tamanho);
    printf ("\nPreencha os elementos do vetor: \n");
    
    for (i = 0; i<tamanho; i++) {
        scanf ("%d", &vetor[i]);
    };

    printf ("\n");

    //Verifica se o vetor não está vazio 

    int maior, menor;

    if (vetor > 0) {
        int maior = vetor[0];
        int menor = vetor[0];

        //Impressão do maior e menor

        for (i = 1; i<tamanho; i++) {
            if (vetor[i] > maior) {
                maior = vetor[i];
            }
            if (vetor[i] < menor) {
                menor = vetor[i];
            }
        };

        printf ("O maior elemento do vetor e: %d\n", maior);
        printf ("O menor elemento do vetor e: %d\n\n", menor);

    } else {
        printf ("Vetor vazio\n");
    }    

    system ("pause");
    return 0;
}
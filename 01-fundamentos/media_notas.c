#include <stdio.h>
#include <stdlib.h>

int main () {

    float nota1, nota2, nota3, nota4, media;

    printf("***** Calculadora de Media *****\n\n");

    printf("Insira a nota do 1 bimestre: ");
    scanf("%f", &nota1);

    printf("Insira a nota do 2 bimestre: ");
    scanf("%f", &nota2);

    printf("Insira a nota do 3 bimestre: ");
    scanf("%f", &nota3);

    printf("Insira a nota do 4 bimestre: ");
    scanf("%f", &nota4);

    printf("\n\n");

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A media e: %.2f.\n", media);


    system ("pause");
    return 0;
}
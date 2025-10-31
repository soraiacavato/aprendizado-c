#include <stdio.h>
#include <stdlib.h>

int main (){

    //Variáveis

    float nota1, nota2, nota3, nota4, media;

    //Entrada de Dados:

    printf ("***** Calculadora de Media 2 *****\n\n");

    printf ("Insira a nota do 1 bimestre: ");
    scanf ("%f", &nota1);
    printf ("Insira a nota do 2 bimestre: ");
    scanf ("%f", &nota2);
    printf ("Insira a nota do 3 bimestre: ");
    scanf ("%f", &nota3);
    printf ("Insira a nota do 4 bimestre: ");
    scanf ("%f", &nota4);

    //Calculo da media

    media = (nota1+nota2+nota3+nota4)/4;

    //Saída de Dados:

    printf ("\n\n");

    printf ("A media final do aluno foi de: %.2f.\n\n", media);

    if (media>=6) {

        printf ("*** APROVADO ***\n\n");

    } else {

        printf ("*** REPROVADO ***\n\n");
    }

    system ("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main (){

    //variáveis

    char nome[50] = "";
    int idade = 0;
    float altura = 1.0;

    //perguntas

    printf ("Insira o seu nome: ");
    scanf ("%s", nome);

    printf ("Insira a sua idade: ");
    scanf ("%d", &idade);

    printf ("Insira a sua altura: ");
    scanf ("%f", &altura);

    //respostas

    printf ("\nSeu nome e: %s.\n", nome);
    printf ("Sua idade e: %d.\n", idade);
    printf ("Sua altura e: %.2f.\n", altura);


    system("pause");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main (){

//Variáveis

int idade, dependentes;
float renda;

//Entrada de Dados

printf ("Verificador de Condicoes Para a Qualificacao de Beneficios Sociais\n\n");

printf ("Digite a idade: ");
scanf ("%d", &idade);
printf ("Digite a renda mensal: ");
scanf ("%f", &renda);
printf ("Digite o numero de dependentes: ");
scanf ("%d", &dependentes);

// Saída de Dados

printf ("\n");

if (idade >= 18 && idade <= 65) {
    if (renda < 3000.0) {
        if (dependentes > 2) {
            printf ("Voce esta qualificado para os beneficios sociais.\n");

        } else {
            printf("Voce nao esta qualificado para os beneficios devido ao numero de dependentes.");

        } 
    } else {
        printf ("Voce nao esta qualificado para os beneficios devido a renda.\n");

    }
} else {
    printf ("Voce nao esta qualificado para os beneficios devido a idade.\n");
}


    system ("pause");
    return 0;
}
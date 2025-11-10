#include <stdio.h>
#include <stdlib.h>

int main (){

// Variáveis

int opcao;
float saldo = 0.0, saque;

// Menu

printf ("Escolha uma opcao: \n\n");
printf ("1. Verificar Saldo\n");
printf ("2. Fazer Deposito\n");
printf ("3. Fazer Saque\n");
printf ("4. Sair\n");
scanf ("%d", &opcao);

printf ("\n");

switch (opcao){

    case 1:
        printf ("Saldo atual: R$ %.2f\n", saldo);
        break;
    
    case 2:
        printf ("Entre com o valor a ser depositado: \n");
        scanf ("%f", &saldo);
        printf ("Deposito realizado com sucesso\n");
        break;

    case 3:
        printf ("Entre com o valor a ser sacado: \n");
        scanf ("%f", &saque);
        saque = saque - saldo;
        printf ("Saque realizado com sucesso\n");
        break;

    case 4:
        printf ("Saindo...\n");
        break;

    default:
        printf ("Opcao invalida\n");

 }

    system ("pause");
    return 0;
}
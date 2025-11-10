#include <stdio.h>
#include <stdlib.h>

int main (){

int idade;

printf ("*** Verificador de Idade para Classificacao Etaria ***\n\n");

printf ("Digite a sua idade: ");
scanf ("%d", &idade);

printf ("\n");

if (idade < 12) {
    printf ("Voce e uma criança.\n");

} else if (idade >= 12 && idade < 18) {
    printf ("Voce e um adolescente.\n");

} else if (idade >= 18 && idade < 60){
    printf ("Voce e um adulto.\n");

} else {
    printf ("Voce e um idoso.\n");

}

    system ("pause");
    return 0;
}
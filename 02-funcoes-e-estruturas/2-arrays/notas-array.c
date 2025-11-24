#include <stdio.h>
#include <stdlib.h>

int main (){

// Exibir as notas de 5 alunos quando pedida através de matrizes

int indice;

char *nomeAlunos [5][3] = {         //declara uma matriz e inicializa-a
    {"Aluno 1", "Portugues: 90", "Matematica: 75"},
    {"Aluno 2", "Portugues: 10", "Matematica: 95"},
    {"Aluno 3", "Portugues: 55", "Matematica: 85"},
    {"Alunos 4", "Portugues: 70", "Matematica: 60"},
    {"Alunos 5", "Portugues 75", "Matematica: 80"}
};

printf ("=== Banco de Notas da Turma 10 ===\n\n");

printf ("Selecione o Aluno para ver as notas de Portugues e Matematica dele.\n"); //menu de seleção
printf ("Para Aluno 1 digite 0\n");
printf ("Para Aluno 2 digite 1\n");
printf ("Para Aluno 3 digite 2\n");
printf ("Para Aluno 4 digite 3\n");
printf ("Para Aluno 5 digite 4\n");
scanf ("%d", &indice);
getchar();

printf ("\n");      //imprimindo as notas do alunos de acordo com o numero digitado
printf ("A nota do %s e: %s, %s\n\n", nomeAlunos[indice][0], nomeAlunos[indice][1], nomeAlunos[indice][2]);


    system ("pause");
    return 0;
}